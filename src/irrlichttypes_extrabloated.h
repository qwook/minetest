/*
Minetest
Copyright (C) 2010-2013 celeron55, Perttu Ahola <celeron55@gmail.com>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef IRRLICHTTYPES_EXTRABLOATED_HEADER
#define IRRLICHTTYPES_EXTRABLOATED_HEADER

#define endSceneX(d){d->draw2DLine(v2s32(0,0),v2s32(1,0),\
video::SColor(255,30,30,30));d->endScene();}

#include "irrlichttypes_bloated.h"

#ifndef SERVER
#include <IMesh.h>
#include <IImage.h>
#include <IrrlichtDevice.h>
#include <IMeshSceneNode.h>
#include <SMesh.h>
#include <ISceneManager.h>
#include <IMeshBuffer.h>
#include <SMeshBuffer.h>
#include <IGUIElement.h>
#include <IGUIEnvironment.h>
#endif

#endif
