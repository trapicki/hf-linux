/*****************************************************************************/

/*
 *      oss.h  --  Linux sound I/O.
 *
 *      Copyright (C) 2004 G�nther Montag 
 *
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *
 *  This is the Linux realtime sound output driver
 */

/*****************************************************************************/
      
#ifndef _OSS_H
#define _OSS_H

int probe_oss(const char *name_audio);
void *oss_fdx_driver(void *name_audio);
void *oss_hdx_driver(void *name_audio);
void *oss_nommap_fdx_driver(void *name_audio);
void *oss_nommap_hdx_driver(void *name_audio);
void oss_prepare_mixer(const char* name_mixer); 
void oss_l1_set_mixer(unsigned int src, int igain, int ogain);

#endif /* _OSS_H */
