/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "Arduino.h"

#ifdef __cplusplus
 extern "C" {
#endif

extern void pinMode( uint32_t ulPin, uint32_t ulMode )
{
	if ( g_APinDescription[ulPin].ulPinType == PIO_NOT_A_PIN )
    {
        return ;
    }

	switch ( ulMode )
    {
        case INPUT:
            /* Enable peripheral for clocking input */
            PMC_EnablePeripheral( g_APinDescription[ulPin].ulPeripheralId ) ;
            PIO_Configure( g_APinDescription[ulPin].pPort, PIO_INPUT, g_APinDescription[ulPin].ulPin, 0 ) ;
        break ;

        case OUTPUT:
            /* if all pins are output, disable PIO Controller clocking, reduce power consomption */
            if ( g_APinDescription[ulPin].pPort->PIO_OSR == 0xffffffff )
            {
                PMC_DisablePeripheral( g_APinDescription[ulPin].ulPeripheralId ) ;
            }
            PIO_Configure( g_APinDescription[ulPin].pPort, PIO_OUTPUT_1, g_APinDescription[ulPin].ulPin, g_APinDescription[ulPin].ulPinConfiguration ) ;
        break ;

        default:
        break ;
    }
}

extern void digitalWrite( uint32_t ulPin, uint32_t ulVal )
{
  /* Handle */
	if ( g_APinDescription[ulPin].ulPinType == PIO_NOT_A_PIN )
  {
    return ;
  }

  if ( PIO_GetOutputDataStatus( g_APinDescription[ulPin].pPort, g_APinDescription[ulPin].ulPin ) == 0 )
  {
    PIO_PullUp( g_APinDescription[ulPin].pPort, g_APinDescription[ulPin].ulPin, 1 ) ;
  }
  else
  {
    PIO_SetOutput( g_APinDescription[ulPin].pPort, g_APinDescription[ulPin].ulPin, ulVal, 0, PIO_PULLUP ) ;
  }
}

extern int digitalRead( uint32_t ulPin )
{
	if ( g_APinDescription[ulPin].ulPinType == PIO_NOT_A_PIN )
    {
        return LOW ;
    }

	if ( PIO_Get( g_APinDescription[ulPin].pPort, PIO_INPUT, g_APinDescription[ulPin].ulPin ) == 1 )
    {
        return HIGH ;
    }

	return LOW ;
}

#ifdef __cplusplus
}
#endif

