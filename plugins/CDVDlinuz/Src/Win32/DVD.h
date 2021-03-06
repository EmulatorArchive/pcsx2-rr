/*  DVD.h

 *  Copyright (C) 2002-2005  PCSX2 Team

 *

 *  This program is free software; you can redistribute it and/or modify

 *  it under the terms of the GNU General Public License as published by

 *  the Free Software Foundation; either version 2 of the License, or

 *  (at your option) any later version.

 *

 *  This program is distributed in the hope that it will be useful,

 *  but WITHOUT ANY WARRANTY; without even the implied warranty of

 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the

 *  GNU General Public License for more details.

 *

 *  You should have received a copy of the GNU General Public License

 *  along with this program; if not, write to the Free Software

 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

 *

 *  PCSX2 members can be contacted through their website at www.pcsx2.net.

 */





#ifndef DVD_H

#define DVD_H





#define CDVDdefs

#include "PS2Edefs.h"





extern void InitDVDInfo();

extern s32 DVDreadTrack(u32 lsn, int mode, u8 *buffer);

extern s32 DVDgetTN(cdvdTN *cdvdtn);

extern s32 DVDgetTD(u8 newtrack, cdvdTD *cdvdtd);

extern s32 DVDgetDiskType();





#endif /* DVD_H */

