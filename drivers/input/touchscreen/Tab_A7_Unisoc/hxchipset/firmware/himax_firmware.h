/*
 *
 * Himax TouchScreen driver.
 *
 * Copyright (c) 2012-2019, FocalTech Systems, Ltd., all rights reserved.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
/************************************************************************
*
* File Name: himax_firmware.h
*
* Author: gaozhengwei@huaqin.com
*
* Created: 2021-10-02
*
* Abstract: global configurations
*
* Version: v1.0
*
************************************************************************/


#ifndef __HIMAX_FIRMWARE_H
#define __HIMAX_FIRMWARE_H

/*Tab A7 T618 code for AX6189DEV-20|AX6189DEV-26 by suyurui at 2021/12/21 start*/
static const uint8_t CTPM_FW_HLT_HSD[] = {
    #include "OT9_HQ_SEC_102E_CID3807_D02_C01_20211217.i"
};
static const uint8_t CTPM_FW_GX_HSD[] = {
    #include "OT9_HQ_SEC_102E_CID3807_D02_C01_20211217.i"
};
/*Tab A7 T618 code for AX6189DEV-20|AX6189DEV-26 by suyurui at 2021/12/21 end*/

#endif
