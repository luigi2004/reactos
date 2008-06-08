/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         ReactOS System Libraries
 * FILE:            lib/gdi32/include/precomp.h
 * PURPOSE:         User-Mode Win32 GDI Library Header
 * PROGRAMMER:      Alex Ionescu (alex@relsoft.net)
 */

/* INCLUDES ******************************************************************/

/* Definitions */
#define WIN32_NO_STATUS
#define NTOS_MODE_USER
#define BUILDING_DCIMAN32

/* SDK/DDK/NDK Headers. */
#include <windows.h>
#include <ndk/ntndk.h>
#include <wingdi.h>
#include <winddi.h>
#include <d3dnthal.h>
#include <prntfont.h>
#include <dciddi.h>
#include <dciman.h>

/* Public Win32K Headers */
#include <win32k/ntgdityp.h>
#include <ntgdi.h>
#include <win32k/ntgdihdl.h>

#define UNIMPLEMENTED DbgPrint("DCIMAN32: %s is unimplemented, please try again later.\n", __FUNCTION__);

/* EOF */
