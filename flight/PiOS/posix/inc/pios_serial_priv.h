/**
 ******************************************************************************
 *
 * @file       pios_serial_priv.h
 * @author     dRonin, http://dRonin.org/, Copyright (C) 2016
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2012.
 * @brief      SERIAL private definitions.
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>
 *
 * Additional note on redistribution: The copyright and license notices above
 * must be maintained in each individual source file that is a derivative work
 * of this source file; otherwise redistribution is prohibited.
 */

#ifndef PIOS_SERIAL_PRIV_H
#define PIOS_SERIAL_PRIV_H

#include <pios.h>
#include <stdio.h>
#include <pthread.h>

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

extern const struct pios_com_driver pios_serial_com_driver;

int32_t PIOS_SERIAL_Init(uintptr_t *serial_id, const char *path);
int32_t PIOS_SERIAL_InitFromFd(uintptr_t *serial_id, int readfd,
		int writefd, bool dont_touch_line);

#endif /* PIOS_SERIAL_PRIV_H */
