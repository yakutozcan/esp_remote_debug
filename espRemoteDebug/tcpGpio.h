/*-----------------------------------------------------------------------------
/
/
/----------------------------------------------------------------------------*/
#include "mem.h"
#include "osapi.h"
#include "c_types.h"
#include "ets_sys.h"
#include "user_interface.h"
#include "espconn.h"
#include "gpio.h"

/*---------------------------------------------------------------------------*/
#define TCPGPIO_PORT 8085

/*---------------------------------------------------------------------------*/
void ICACHE_FLASH_ATTR
tcpGpio_init();

/*---------------------------------------------------------------------------*/
uint8_t ICACHE_FLASH_ATTR
tcpGpio_readState();