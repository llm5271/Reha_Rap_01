/*
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * 
 * File: ads7841_autoconf.h
 * 
 ***************************************************************************************************
 */

#ifndef _ADS7841_AUTO_CONF_H
#define _ADS7841_AUTO_CONF_H

/**************************************************************************************************/
/* Defines                                                                                        */
/**************************************************************************************************/
#define ADS7841_NOT_USED          
#define ADS7841_NUM_ICS 0 




/**************************************************************************************************/
/* Defines for sequencedefinitions                                                                */
/**************************************************************************************************/


/**************************************************************************************************/
/* Extern declarations                                                                            */
/**************************************************************************************************/
__PRAGMA_USE__hwe__50ms_1s__constant__s32__START
extern const Spi_SeqDef_t Ads7841_ADCGet_cs[];
__PRAGMA_USE__hwe__50ms_1s__constant__s32__END

/* _ADS7841_AUTO_CONF_H */
#endif
