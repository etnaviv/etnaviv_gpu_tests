#ifndef STATE_BLT_XML
#define STATE_BLT_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://0x04.net/cgit/index.cgi/rules-ng-ng
git clone git://0x04.net/rules-ng-ng

The rules-ng-ng source files this header was generated from are:
- state.xml     (  25532 bytes, from 2017-10-13 12:19:04)
- common.xml    (  26193 bytes, from 2017-10-13 12:18:24)
- common_3d.xml (  12531 bytes, from 2017-10-13 11:04:24)
- state_hi.xml  (  27733 bytes, from 2017-10-02 19:00:30)
- copyright.xml (   1597 bytes, from 2016-10-29 07:29:22)
- state_2d.xml  (  51552 bytes, from 2016-10-29 07:29:22)
- state_3d.xml  (  74317 bytes, from 2017-10-13 12:43:31)
- state_blt.xml (  11153 bytes, from 2017-10-13 12:39:38)
- state_vg.xml  (   5975 bytes, from 2016-10-29 07:29:22)

Copyright (C) 2012-2017 by the following authors:
- Wladimir J. van der Laan <laanwj@gmail.com>
- Christian Gmeiner <christian.gmeiner@gmail.com>
- Lucas Stach <l.stach@pengutronix.de>
- Russell King <rmk@arm.linux.org.uk>

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sub license,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial portions
of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/


#define BLT_TILING_LINEAR					0x00000000
#define BLT_TILING_SUPERTILED					0x00000003
#define BLT_FORMAT_A4R4G4B4					0x00000001
#define BLT_FORMAT_A8R8G8B8					0x00000006
#define BLT_FORMAT_A16R16G16B16					0x0000001c
#define BLT_FORMAT_R8G8B8					0x00000022
#define BLT_FORMAT_R8						0x00000023
#define BLT_FORMAT_R8G8						0x00000024
#define BLT_IMAGE_CONFIG_TS					0x00000001
#define BLT_IMAGE_CONFIG_COMPRESSION				0x00000002
#define BLT_IMAGE_CONFIG_COMPRESSION_FORMAT__MASK		0x000000f0
#define BLT_IMAGE_CONFIG_COMPRESSION_FORMAT__SHIFT		4
#define BLT_IMAGE_CONFIG_COMPRESSION_FORMAT(x)			(((x) << BLT_IMAGE_CONFIG_COMPRESSION_FORMAT__SHIFT) & BLT_IMAGE_CONFIG_COMPRESSION_FORMAT__MASK)
#define BLT_IMAGE_CONFIG_UNK8					0x00000100
#define BLT_IMAGE_CONFIG_SWIZ_R__MASK				0x00000600
#define BLT_IMAGE_CONFIG_SWIZ_R__SHIFT				9
#define BLT_IMAGE_CONFIG_SWIZ_R(x)				(((x) << BLT_IMAGE_CONFIG_SWIZ_R__SHIFT) & BLT_IMAGE_CONFIG_SWIZ_R__MASK)
#define BLT_IMAGE_CONFIG_SWIZ_G__MASK				0x00001800
#define BLT_IMAGE_CONFIG_SWIZ_G__SHIFT				11
#define BLT_IMAGE_CONFIG_SWIZ_G(x)				(((x) << BLT_IMAGE_CONFIG_SWIZ_G__SHIFT) & BLT_IMAGE_CONFIG_SWIZ_G__MASK)
#define BLT_IMAGE_CONFIG_SWIZ_B__MASK				0x00006000
#define BLT_IMAGE_CONFIG_SWIZ_B__SHIFT				13
#define BLT_IMAGE_CONFIG_SWIZ_B(x)				(((x) << BLT_IMAGE_CONFIG_SWIZ_B__SHIFT) & BLT_IMAGE_CONFIG_SWIZ_B__MASK)
#define BLT_IMAGE_CONFIG_SWIZ_A__MASK				0x00018000
#define BLT_IMAGE_CONFIG_SWIZ_A__SHIFT				15
#define BLT_IMAGE_CONFIG_SWIZ_A(x)				(((x) << BLT_IMAGE_CONFIG_SWIZ_A__SHIFT) & BLT_IMAGE_CONFIG_SWIZ_A__MASK)
#define BLT_IMAGE_CONFIG_CACHE_MODE__MASK			0x00020000
#define BLT_IMAGE_CONFIG_CACHE_MODE__SHIFT			17
#define BLT_IMAGE_CONFIG_CACHE_MODE_128				0x00000000
#define BLT_IMAGE_CONFIG_CACHE_MODE_256				0x00020000
#define BLT_IMAGE_CONFIG_FLIP_Y					0x00080000
#define BLT_IMAGE_CONFIG_FROM_SUPERTILED			0x00200000
#define BLT_IMAGE_CONFIG_UNK22					0x00400000
#define BLT_IMAGE_CONFIG_TO_SUPERTILED				0x04000000
#define VIVS_BLT						0x00000000

#define VIVS_BLT_SRC_ADDR					0x00014000

#define VIVS_BLT_SRC_STRIDE					0x00014008
#define VIVS_BLT_SRC_STRIDE_STRIDE__MASK			0x000fffff
#define VIVS_BLT_SRC_STRIDE_STRIDE__SHIFT			0
#define VIVS_BLT_SRC_STRIDE_STRIDE(x)				(((x) << VIVS_BLT_SRC_STRIDE_STRIDE__SHIFT) & VIVS_BLT_SRC_STRIDE_STRIDE__MASK)
#define VIVS_BLT_SRC_STRIDE_FORMAT__MASK			0x1fe00000
#define VIVS_BLT_SRC_STRIDE_FORMAT__SHIFT			21
#define VIVS_BLT_SRC_STRIDE_FORMAT(x)				(((x) << VIVS_BLT_SRC_STRIDE_FORMAT__SHIFT) & VIVS_BLT_SRC_STRIDE_FORMAT__MASK)
#define VIVS_BLT_SRC_STRIDE_TILING__MASK			0x60000000
#define VIVS_BLT_SRC_STRIDE_TILING__SHIFT			29
#define VIVS_BLT_SRC_STRIDE_TILING(x)				(((x) << VIVS_BLT_SRC_STRIDE_TILING__SHIFT) & VIVS_BLT_SRC_STRIDE_TILING__MASK)

#define VIVS_BLT_SRC_CONFIG					0x0001400c

#define VIVS_BLT_SRC_TS						0x00014010

#define VIVS_BLT_SRC_POS					0x00014014
#define VIVS_BLT_SRC_POS_X__MASK				0x0000ffff
#define VIVS_BLT_SRC_POS_X__SHIFT				0
#define VIVS_BLT_SRC_POS_X(x)					(((x) << VIVS_BLT_SRC_POS_X__SHIFT) & VIVS_BLT_SRC_POS_X__MASK)
#define VIVS_BLT_SRC_POS_Y__MASK				0xffff0000
#define VIVS_BLT_SRC_POS_Y__SHIFT				16
#define VIVS_BLT_SRC_POS_Y(x)					(((x) << VIVS_BLT_SRC_POS_Y__SHIFT) & VIVS_BLT_SRC_POS_Y__MASK)

#define VIVS_BLT_DEST_ADDR					0x00014018

#define VIVS_BLT_DEST_TS					0x00014020

#define VIVS_BLT_DEST_STRIDE					0x00014024
#define VIVS_BLT_DEST_STRIDE_STRIDE__MASK			0x000fffff
#define VIVS_BLT_DEST_STRIDE_STRIDE__SHIFT			0
#define VIVS_BLT_DEST_STRIDE_STRIDE(x)				(((x) << VIVS_BLT_DEST_STRIDE_STRIDE__SHIFT) & VIVS_BLT_DEST_STRIDE_STRIDE__MASK)
#define VIVS_BLT_DEST_STRIDE_FORMAT__MASK			0x1fe00000
#define VIVS_BLT_DEST_STRIDE_FORMAT__SHIFT			21
#define VIVS_BLT_DEST_STRIDE_FORMAT(x)				(((x) << VIVS_BLT_DEST_STRIDE_FORMAT__SHIFT) & VIVS_BLT_DEST_STRIDE_FORMAT__MASK)
#define VIVS_BLT_DEST_STRIDE_TILING__MASK			0x60000000
#define VIVS_BLT_DEST_STRIDE_TILING__SHIFT			29
#define VIVS_BLT_DEST_STRIDE_TILING(x)				(((x) << VIVS_BLT_DEST_STRIDE_TILING__SHIFT) & VIVS_BLT_DEST_STRIDE_TILING__MASK)

#define VIVS_BLT_DEST_CONFIG					0x00014028

#define VIVS_BLT_DEST_POS					0x0001402c
#define VIVS_BLT_DEST_POS_X__MASK				0x0000ffff
#define VIVS_BLT_DEST_POS_X__SHIFT				0
#define VIVS_BLT_DEST_POS_X(x)					(((x) << VIVS_BLT_DEST_POS_X__SHIFT) & VIVS_BLT_DEST_POS_X__MASK)
#define VIVS_BLT_DEST_POS_Y__MASK				0xffff0000
#define VIVS_BLT_DEST_POS_Y__SHIFT				16
#define VIVS_BLT_DEST_POS_Y(x)					(((x) << VIVS_BLT_DEST_POS_Y__SHIFT) & VIVS_BLT_DEST_POS_Y__MASK)

#define VIVS_BLT_IMAGE_SIZE					0x00014030
#define VIVS_BLT_IMAGE_SIZE_WIDTH__MASK				0x0000ffff
#define VIVS_BLT_IMAGE_SIZE_WIDTH__SHIFT			0
#define VIVS_BLT_IMAGE_SIZE_WIDTH(x)				(((x) << VIVS_BLT_IMAGE_SIZE_WIDTH__SHIFT) & VIVS_BLT_IMAGE_SIZE_WIDTH__MASK)
#define VIVS_BLT_IMAGE_SIZE_HEIGHT__MASK			0xffff0000
#define VIVS_BLT_IMAGE_SIZE_HEIGHT__SHIFT			16
#define VIVS_BLT_IMAGE_SIZE_HEIGHT(x)				(((x) << VIVS_BLT_IMAGE_SIZE_HEIGHT__SHIFT) & VIVS_BLT_IMAGE_SIZE_HEIGHT__MASK)

#define VIVS_BLT_SRC_TS_CLEAR_VALUE0				0x00014034

#define VIVS_BLT_SRC_TS_CLEAR_VALUE1				0x00014038

#define VIVS_BLT_DEST_TS_CLEAR_VALUE0				0x0001403c

#define VIVS_BLT_DEST_TS_CLEAR_VALUE1				0x00014040

#define VIVS_BLT_CLEAR_COLOR0					0x00014044

#define VIVS_BLT_CLEAR_COLOR1					0x00014048

#define VIVS_BLT_UNK1404C					0x0001404c

#define VIVS_BLT_UNK14050					0x00014050

#define VIVS_BLT_BUFFER_SIZE					0x00014054

#define VIVS_BLT_UNK14058					0x00014058

#define VIVS_BLT_UNK1405C					0x0001405c

#define VIVS_BLT_COMMAND					0x00014060
#define VIVS_BLT_COMMAND_COMMAND__MASK				0x0000000f
#define VIVS_BLT_COMMAND_COMMAND__SHIFT				0
#define VIVS_BLT_COMMAND_COMMAND_CLEAR_IMAGE			0x00000001
#define VIVS_BLT_COMMAND_COMMAND_COPY_IMAGE			0x00000002
#define VIVS_BLT_COMMAND_COMMAND_COPY_BUFFER			0x00000003
#define VIVS_BLT_COMMAND_COMMAND_YUV_TILE			0x00000005
#define VIVS_BLT_COMMAND_COMMAND_GEN_MIPMAPS			0x00000006

#define VIVS_BLT_CONFIG						0x00014064
#define VIVS_BLT_CONFIG_SRC_ENDIAN__MASK			0x00000006
#define VIVS_BLT_CONFIG_SRC_ENDIAN__SHIFT			1
#define VIVS_BLT_CONFIG_SRC_ENDIAN(x)				(((x) << VIVS_BLT_CONFIG_SRC_ENDIAN__SHIFT) & VIVS_BLT_CONFIG_SRC_ENDIAN__MASK)
#define VIVS_BLT_CONFIG_DEST_ENDIAN__MASK			0x00000018
#define VIVS_BLT_CONFIG_DEST_ENDIAN__SHIFT			3
#define VIVS_BLT_CONFIG_DEST_ENDIAN(x)				(((x) << VIVS_BLT_CONFIG_DEST_ENDIAN__SHIFT) & VIVS_BLT_CONFIG_DEST_ENDIAN__MASK)
#define VIVS_BLT_CONFIG_UNK5					0x00000020
#define VIVS_BLT_CONFIG_UNK6					0x00000040
#define VIVS_BLT_CONFIG_CLEAR_BPP__MASK				0x00000380
#define VIVS_BLT_CONFIG_CLEAR_BPP__SHIFT			7
#define VIVS_BLT_CONFIG_CLEAR_BPP(x)				(((x) << VIVS_BLT_CONFIG_CLEAR_BPP__SHIFT) & VIVS_BLT_CONFIG_CLEAR_BPP__MASK)

#define VIVS_BLT_YUV						0x00000000

#define VIVS_BLT_YUV_CONFIG					0x0001406c

#define VIVS_BLT_YUV_UNK14070					0x00014070

#define VIVS_BLT_YUV_SRC_YADDR					0x00014074

#define VIVS_BLT_YUV_SRC_YSTRIDE				0x00014078

#define VIVS_BLT_YUV_SRC_UADDR					0x0001407c

#define VIVS_BLT_YUV_SRC_USTRIDE				0x00014080

#define VIVS_BLT_YUV_SRC_VADDR					0x00014084

#define VIVS_BLT_YUV_SRC_VSTRIDE				0x00014088

#define VIVS_BLT_YUV_DEST_ADDR					0x0001408c

#define VIVS_BLT_YUV_DEST_STRIDE				0x00014090

#define VIVS_BLT_UNK1409C					0x0001409c

#define VIVS_BLT_UNK140A0					0x000140a0

#define VIVS_BLT_FENCE_OUT_ADDRESS				0x000140a4

#define VIVS_BLT_FENCE_OUT_DATA_LOW				0x000140a8

#define VIVS_BLT_SET_COMMAND					0x000140ac

#define VIVS_BLT_UNK140B0					0x000140b0

#define VIVS_BLT_FENCE_OUT_DATA_HIGH				0x000140b4

#define VIVS_BLT_ENABLE						0x000140b8
#define VIVS_BLT_ENABLE_ENABLE					0x00000001

#define VIVS_BLT_SWIZZLE					0x000140bc
#define VIVS_BLT_SWIZZLE_SRC_R__MASK				0x00000007
#define VIVS_BLT_SWIZZLE_SRC_R__SHIFT				0
#define VIVS_BLT_SWIZZLE_SRC_R(x)				(((x) << VIVS_BLT_SWIZZLE_SRC_R__SHIFT) & VIVS_BLT_SWIZZLE_SRC_R__MASK)
#define VIVS_BLT_SWIZZLE_SRC_G__MASK				0x00000038
#define VIVS_BLT_SWIZZLE_SRC_G__SHIFT				3
#define VIVS_BLT_SWIZZLE_SRC_G(x)				(((x) << VIVS_BLT_SWIZZLE_SRC_G__SHIFT) & VIVS_BLT_SWIZZLE_SRC_G__MASK)
#define VIVS_BLT_SWIZZLE_SRC_B__MASK				0x000001c0
#define VIVS_BLT_SWIZZLE_SRC_B__SHIFT				6
#define VIVS_BLT_SWIZZLE_SRC_B(x)				(((x) << VIVS_BLT_SWIZZLE_SRC_B__SHIFT) & VIVS_BLT_SWIZZLE_SRC_B__MASK)
#define VIVS_BLT_SWIZZLE_SRC_A__MASK				0x00000e00
#define VIVS_BLT_SWIZZLE_SRC_A__SHIFT				9
#define VIVS_BLT_SWIZZLE_SRC_A(x)				(((x) << VIVS_BLT_SWIZZLE_SRC_A__SHIFT) & VIVS_BLT_SWIZZLE_SRC_A__MASK)
#define VIVS_BLT_SWIZZLE_DEST_R__MASK				0x00007000
#define VIVS_BLT_SWIZZLE_DEST_R__SHIFT				12
#define VIVS_BLT_SWIZZLE_DEST_R(x)				(((x) << VIVS_BLT_SWIZZLE_DEST_R__SHIFT) & VIVS_BLT_SWIZZLE_DEST_R__MASK)
#define VIVS_BLT_SWIZZLE_DEST_G__MASK				0x00038000
#define VIVS_BLT_SWIZZLE_DEST_G__SHIFT				15
#define VIVS_BLT_SWIZZLE_DEST_G(x)				(((x) << VIVS_BLT_SWIZZLE_DEST_G__SHIFT) & VIVS_BLT_SWIZZLE_DEST_G__MASK)
#define VIVS_BLT_SWIZZLE_DEST_B__MASK				0x001c0000
#define VIVS_BLT_SWIZZLE_DEST_B__SHIFT				18
#define VIVS_BLT_SWIZZLE_DEST_B(x)				(((x) << VIVS_BLT_SWIZZLE_DEST_B__SHIFT) & VIVS_BLT_SWIZZLE_DEST_B__MASK)
#define VIVS_BLT_SWIZZLE_DEST_A__MASK				0x00e00000
#define VIVS_BLT_SWIZZLE_DEST_A__SHIFT				21
#define VIVS_BLT_SWIZZLE_DEST_A(x)				(((x) << VIVS_BLT_SWIZZLE_DEST_A__SHIFT) & VIVS_BLT_SWIZZLE_DEST_A__MASK)

#define VIVS_BLT_MIP(i0)				       (0x00000000 + 0x4*(i0))
#define VIVS_BLT_MIP__ESIZE					0x00000004
#define VIVS_BLT_MIP__LEN					0x0000000d

#define VIVS_BLT_MIP_ADDR(i0)				       (0x000140c0 + 0x4*(i0))

#define VIVS_BLT_MIP_STRIDE(i0)				       (0x00014300 + 0x4*(i0))

#define VIVS_BLT_SRC_END					0x000140f4

#define VIVS_BLT_DEST_END					0x00014334


#endif /* STATE_BLT_XML */