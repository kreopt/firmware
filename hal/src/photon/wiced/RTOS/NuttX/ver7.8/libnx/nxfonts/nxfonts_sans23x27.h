/****************************************************************************
 * libnx/nxfonts/nxfonts_sans23x27.h
 *
 *   Copyright (C) 2008, 2011-2012 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT}
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING}
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#ifndef __LIBNX_NXFONTS_NXFONTS_SANS23X27_H
#define __LIBNX_NXFONTS_NXFONTS_SANS23X27_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

/****************************************************************************
 * Pre-Processor Definitions
 ****************************************************************************/

/* Font ID */

#define NXFONT_ID         FONTID_SANS23X27

/* Ranges of 7-bit and 8-bit fonts */

#define NXFONT_MIN7BIT    33
#define NXFONT_MAX7BIT    126

#define NXFONT_MIN8BIT    161
#define NXFONT_MAX8BIT    255

/* Maximum height and width of any glyph in the set */

#define NXFONT_MAXHEIGHT  23
#define NXFONT_MAXWIDTH   27

/* The width of a space */

#define NXFONT_SPACEWIDTH 4

/* A sans serif font kind of like Lucida */

/* Space (32) */

/* Exclamation point (33) */
#define NXFONT_METRICS_33 {1, 1, 9, 2, 5, 0}
#define NXFONT_BITMAP_33  {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0x80}

/* Double quote (34) */
#define NXFONT_METRICS_34 {1, 3, 3, 1, 4, 0}
#define NXFONT_BITMAP_34  {0xa0, 0xa0, 0xa0}

/* Number sign (35) */
#define NXFONT_METRICS_35 {1, 7, 9, 1, 5, 0}
#define NXFONT_BITMAP_35  {0x24, 0x24, 0x24, 0xfe, 0x28, 0xfe, 0x48, 0x48, 0x48}

/* Dollar sign (36) */
#define NXFONT_METRICS_36 {1, 6, 11, 1, 4, 0}
#define NXFONT_BITMAP_36  {0x10, 0x78, 0x94, 0x90, 0x50, 0x30, 0x28, 0x24, 0xa4, 0x78, 0x20}

/* Percent sign (37) */
#define NXFONT_METRICS_37 {1, 7, 9, 1, 5, 0}
#define NXFONT_BITMAP_37  {0x60, 0x92, 0x94, 0x68, 0x10, 0x2c, 0x52, 0x92, 0x0c}

/* Ampersand (38) */
#define NXFONT_METRICS_38 {1, 7, 9, 1, 5, 0}
#define NXFONT_BITMAP_38  {0x30, 0x48, 0x48, 0x30, 0x66, 0x94, 0x88, 0x88, 0x76}

/* Single quote (39) */
#define NXFONT_METRICS_39 {1, 1, 3, 1, 4, 0}
#define NXFONT_BITMAP_39  {0x80, 0x80, 0x80}

/* Left parenthis (40) */
#define NXFONT_METRICS_40 {1, 3, 10, 1, 5, 0}
#define NXFONT_BITMAP_40  {0x20, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x20}

/* Right parenthis (41) */
#define NXFONT_METRICS_41 {1, 3, 11, 0, 5, 0}
#define NXFONT_BITMAP_41  {0x80, 0x40, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x40, 0x80}

/* Asterisk (42) */
#define NXFONT_METRICS_42 {1, 5, 5, 1, 5, 0}
#define NXFONT_BITMAP_42  {0x20, 0xa8, 0x50, 0xa8, 0x20}

/* Plus (43) */
#define NXFONT_METRICS_43 {1, 7, 7, 1, 7, 0}
#define NXFONT_BITMAP_43  {0x10, 0x10, 0x10, 0xfe, 0x10, 0x10, 0x10}

/* Comma (44) */
#define NXFONT_METRICS_44 {1, 2, 4, 1, 12, 0}
#define NXFONT_BITMAP_44  {0x40, 0x40, 0x80, 0x80}

/* Hyphen (45) */
#define NXFONT_METRICS_45 {1, 5, 1, 1, 10, 0}
#define NXFONT_BITMAP_45  {0xf8}

/* Period (46) */
#define NXFONT_METRICS_46 {1, 1, 2, 2, 12, 0}
#define NXFONT_BITMAP_46  {0x80, 0x80}

/* Forward slash (47) */
#define NXFONT_METRICS_47 {1, 4, 11, 1, 5, 0}
#define NXFONT_BITMAP_47  {0x10, 0x10, 0x10, 0x20, 0x20, 0x20, 0x40, 0x40, 0x40, 0x80, 0x80}

/* '0' (48) */
#define NXFONT_METRICS_48 {1, 6, 9, 1, 5, 0}
#define NXFONT_BITMAP_48  {0x30, 0x48, 0x84, 0x84, 0x84, 0x84, 0x84, 0x48, 0x30}

/* '1' (49) */
#define NXFONT_METRICS_49 {1, 5, 9, 2, 5, 0}
#define NXFONT_BITMAP_49  {0x20, 0xe0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xf8}

/* '2' (50) */
#define NXFONT_METRICS_50 {1, 6, 9, 1, 5, 0}
#define NXFONT_BITMAP_50  {0x78, 0x84, 0x04, 0x04, 0x08, 0x30, 0x40, 0x80, 0xfc}

/* '3' (51) */
#define NXFONT_METRICS_51 {1, 6, 9, 1, 5, 0}
#define NXFONT_BITMAP_51  {0x78, 0x84, 0x04, 0x04, 0x38, 0x04, 0x04, 0x84, 0x78}

/* '4' (52) */
#define NXFONT_METRICS_52 {1, 6, 9, 1, 5, 0}
#define NXFONT_BITMAP_52  {0x08, 0x18, 0x28, 0x48, 0x88, 0x88, 0xfc, 0x08, 0x08}

/* '5' (53) */
#define NXFONT_METRICS_53 {1, 6, 9, 1, 5, 0}
#define NXFONT_BITMAP_53  {0xfc, 0x80, 0x80, 0xf0, 0x08, 0x04, 0x04, 0x84, 0x78}

/* '6' (54) */
#define NXFONT_METRICS_54 {1, 6, 9, 1, 5, 0}
#define NXFONT_BITMAP_54  {0x3c, 0x40, 0x80, 0xb8, 0xc4, 0x84, 0x84, 0x44, 0x38}

/* '7' (55) */
#define NXFONT_METRICS_55 {1, 6, 9, 1, 5, 0}
#define NXFONT_BITMAP_55  {0xfc, 0x04, 0x08, 0x10, 0x10, 0x20, 0x20, 0x40, 0x40}

/* '8' (56) */
#define NXFONT_METRICS_56 {1, 6, 9, 1, 5, 0}
#define NXFONT_BITMAP_56  {0x78, 0x84, 0x84, 0x84, 0x78, 0x84, 0x84, 0x84, 0x78}

/* '9' (57) */
#define NXFONT_METRICS_57 {1, 6, 9, 1, 5, 0}
#define NXFONT_BITMAP_57  {0x70, 0x88, 0x84, 0x84, 0x8c, 0x74, 0x04, 0x08, 0xf0}

/* Colon (58) */
#define NXFONT_METRICS_58 {1, 1, 7, 2, 7, 0}
#define NXFONT_BITMAP_58  {0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0x80}

/* Semicolon (59) */
#define NXFONT_METRICS_59 {1, 2, 9, 1, 7, 0}
#define NXFONT_BITMAP_59  {0x40, 0x40, 0x00, 0x00, 0x00, 0x40, 0x40, 0x80, 0x80}

/* Less than sign (60) */
#define NXFONT_METRICS_60 {1, 6, 7, 2, 7, 0}
#define NXFONT_BITMAP_60  {0x04, 0x18, 0x20, 0xc0, 0x20, 0x18, 0x04}

/* Equal to sign (61) */
#define NXFONT_METRICS_61 {1, 7, 3, 1, 9, 0}
#define NXFONT_BITMAP_61  {0xfe, 0x00, 0xfe}

/* Greater than sign (62) */
#define NXFONT_METRICS_62 {1, 6, 7, 2, 7, 0}
#define NXFONT_BITMAP_62  {0x80, 0x60, 0x10, 0x0c, 0x10, 0x60, 0x80}

/* Question mark (63) */
#define NXFONT_METRICS_63 {1, 4, 9, 1, 5, 0}
#define NXFONT_BITMAP_63  {0xe0, 0x10, 0x10, 0x60, 0x40, 0x40, 0x00, 0x40, 0x40}

/* at sign (64) */
#define NXFONT_METRICS_64 { 2, 9, 9, 1, 5, 0}
#define NXFONT_BITMAP_64  {0x1e, 0x00, 0x21, 0x00, 0x4c, 0x80, 0x92, 0x80, 0xa4, 0x80, 0xad, 0x00,\
                           0x96, 0x00, 0x40, 0x00, 0x3c, 0x00}

/* 'A' (65) */
#define NXFONT_METRICS_65 {1, 6, 9, 1, 5, 0}
#define NXFONT_BITMAP_65  {0x30, 0x30, 0x48, 0x48, 0x48, 0xfc, 0x84, 0x84, 0x84}

/* 'B' (66) */
#define NXFONT_METRICS_66 {1, 5, 9, 1, 5, 0}
#define NXFONT_BITMAP_66  {0xf0, 0x88, 0x88, 0x88, 0xf0, 0x88, 0x88, 0x88, 0xf0}

/* 'C' (67) */
#define NXFONT_METRICS_67 {1, 6, 9, 1, 5, 0}
#define NXFONT_BITMAP_67  {0x3c, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x3c}

/* 'D' (68) */
#define NXFONT_METRICS_68 {1, 7, 9, 1, 5, 0}
#define NXFONT_BITMAP_68  {0xf8, 0x84, 0x82, 0x82, 0x82, 0x82, 0x82, 0x84, 0xf8}

/* 'E' (69) */
#define NXFONT_METRICS_69 {1, 5, 9, 1, 5, 0}
#define NXFONT_BITMAP_69  {0xf8, 0x80, 0x80, 0x80, 0xf0, 0x80, 0x80, 0x80, 0xf8}

/* 'F' (70) */
#define NXFONT_METRICS_70 {1, 4, 9, 1, 5, 0}
#define NXFONT_BITMAP_70  {0xf0, 0x80, 0x80, 0x80, 0xf0, 0x80, 0x80, 0x80, 0x80}

/* 'G' (71) */
#define NXFONT_METRICS_71 {1, 7, 9, 1, 5, 0}
#define NXFONT_BITMAP_71  {0x3e, 0x40, 0x80, 0x80, 0x82, 0x82, 0x82, 0x42, 0x3e}

/* 'H' (72) */
#define NXFONT_METRICS_72 {1, 7, 9, 1, 5, 0}
#define NXFONT_BITMAP_72  {0x82, 0x82, 0x82, 0x82, 0xfe, 0x82, 0x82, 0x82, 0x82}

/* 'I' (73) */
#define NXFONT_METRICS_73 {1, 1, 9, 1, 5, 0}
#define NXFONT_BITMAP_73  {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* 'J' (74) */
#define NXFONT_METRICS_74 {1, 3, 11, 0, 5, 0}
#define NXFONT_BITMAP_74  {0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xc0}

/* 'K' (75) */
#define NXFONT_METRICS_75 {1, 6, 9, 1, 5, 0}
#define NXFONT_BITMAP_75  {0x84, 0x88, 0x90, 0xa0, 0xe0, 0x90, 0x88, 0x84, 0x84}

/* 'L' (76) */
#define NXFONT_METRICS_76 {1, 5, 9, 1, 5, 0}
#define NXFONT_BITMAP_76  {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xf8}

/* 'M' (77) */
#define NXFONT_METRICS_77 {1, 8, 9, 1, 5, 0}
#define NXFONT_BITMAP_77  {0x81, 0xc3, 0xc3, 0xa5, 0xa5, 0x99, 0x99, 0x81, 0x81}

/* 'N' (78) */
#define NXFONT_METRICS_78 {1, 7, 9, 1, 5, 0}
#define NXFONT_BITMAP_78  {0x82, 0xc2, 0xc2, 0xa2, 0x92, 0x8a, 0x86, 0x86, 0x82}

/* 'O' (79) */
#define NXFONT_METRICS_79 {1, 7, 9, 1, 5, 0}
#define NXFONT_BITMAP_79  {0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38}

/* 'P' (80) */
#define NXFONT_METRICS_80 {1, 5, 9, 1, 5, 0}
#define NXFONT_BITMAP_80  {0xf0, 0x88, 0x88, 0x88, 0x88, 0xf0, 0x80, 0x80, 0x80}

/* 'Q' (81) */
#define NXFONT_METRICS_81 {1, 8, 11, 1, 5, 0}
#define NXFONT_BITMAP_81  {0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38, 0x04, 0x03}

/* 'R' (82) */
#define NXFONT_METRICS_82 {1, 6, 9, 1, 5, 0}
#define NXFONT_BITMAP_82  {0xf0, 0x88, 0x88, 0x88, 0xf0, 0x90, 0x88, 0x84, 0x84}

/* 'S' (83) */
#define NXFONT_METRICS_83 {1, 5, 9, 1, 5, 0}
#define NXFONT_BITMAP_83  {0x78, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x08, 0xf0}

/* 'T' (84) */
#define NXFONT_METRICS_84 {1, 7, 9, 1, 5, 0}
#define NXFONT_BITMAP_84  {0xfe, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10}

/* 'U' (85) */
#define NXFONT_METRICS_85 {1, 6, 9, 1, 5, 0}
#define NXFONT_BITMAP_85  {0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x48, 0x30}

/* 'V' (86) */
#define NXFONT_METRICS_86 {1, 7, 9, 1, 5, 0}
#define NXFONT_BITMAP_86  {0x82, 0x82, 0x44, 0x44, 0x44, 0x28, 0x28, 0x10, 0x10}

/* 'W' (87) */
#define NXFONT_METRICS_87 {2, 9, 9, 1, 5, 0}
#define NXFONT_BITMAP_87  {0x80, 0x80, 0x88, 0x80, 0x88, 0x80, 0x55, 0x00, 0x55, 0x00, 0x55, 0x00,\
                           0x22, 0x00, 0x22, 0x00, 0x22, 0x00}

/* 'X' (88) */
#define NXFONT_METRICS_88 {1, 6, 9, 1, 5, 0}
#define NXFONT_BITMAP_88  {0x84, 0x84, 0x48, 0x28, 0x30, 0x50, 0x48, 0x84, 0x84}

/* 'Y' (89) */
#define NXFONT_METRICS_89 {1, 7, 9, 0, 5, 0}
#define NXFONT_BITMAP_89  {0x82, 0x82, 0x44, 0x44, 0x28, 0x10, 0x10, 0x10, 0x10}

/* 'Z' (90) */
#define NXFONT_METRICS_90 {1, 5, 9, 1, 5, 0}
#define NXFONT_BITMAP_90  {0xf8, 0x08, 0x10, 0x10, 0x20, 0x40, 0x40, 0x80, 0xf8}

/* Left bracket (91) */
#define NXFONT_METRICS_91 {1, 2, 11, 1, 5, 0}
#define NXFONT_BITMAP_91  {0xc0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0}

/* Back slash (92) */
#define NXFONT_METRICS_92 {1, 4, 11, 1, 5, 0}
#define NXFONT_BITMAP_92  {0x80, 0x80, 0x80, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20, 0x10, 0x10}

/* Right bracket (93) */
#define NXFONT_METRICS_93 {1, 2, 11, 1, 5, 0}
#define NXFONT_BITMAP_93  {0xc0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xc0}

/* ascii circumflex (94) */
#define NXFONT_METRICS_94 {1, 6, 6, 1, 5, 0}
#define NXFONT_BITMAP_94  {0x30, 0x30, 0x48, 0x48, 0x84, 0x84}

/* Underscore (95) */
#define NXFONT_METRICS_95 {1, 6, 1, 0, 14, 0}
#define NXFONT_BITMAP_95  {0xfc}

/* Grave (96) */
#define NXFONT_METRICS_96 {1, 3, 2, 2, 4, 0}
#define NXFONT_BITMAP_96  {0xc0, 0x20}

/* 'a' (97) */
#define NXFONT_METRICS_97 {1, 6, 7, 1, 7, 0}
#define NXFONT_BITMAP_97  {0x70, 0x88, 0x08, 0x78, 0x88, 0x88, 0x74}

/* 'b' (98) */
#define NXFONT_METRICS_98 {1, 6, 10, 1, 4, 0}
#define NXFONT_BITMAP_98  {0x80, 0x80, 0x80, 0xb8, 0xc4, 0x84, 0x84, 0x84, 0xc4, 0xb8}

/* 'c' (99) */
#define NXFONT_METRICS_99 {1, 4, 7, 1, 7, 0}
#define NXFONT_BITMAP_99  {0x70, 0x80, 0x80, 0x80, 0x80, 0x80, 0x70}

/* 'd' (100) */
#define NXFONT_METRICS_100 {1, 6, 10, 1, 4, 0}
#define NXFONT_BITMAP_100  {0x04, 0x04, 0x04, 0x74, 0x8c, 0x84, 0x84, 0x84, 0x8c, 0x74}

/* 'e' (101) */
#define NXFONT_METRICS_101 {1, 5, 7, 1, 7, 0}
#define NXFONT_BITMAP_101  {0x70, 0x88, 0x88, 0xf8, 0x80, 0x80, 0x78}

/* 'f' (102) */
#define NXFONT_METRICS_102 {1, 4, 10, 0, 4, 0}
#define NXFONT_BITMAP_102  {0x30, 0x40, 0x40, 0x40, 0xf0, 0x40, 0x40, 0x40, 0x40, 0x40}

/* 'g' (103) */
#define NXFONT_METRICS_103 {1, 5, 9, 1, 7, 0}
#define NXFONT_BITMAP_103  {0x68, 0x98, 0x88, 0x88, 0x98, 0x68, 0x08, 0x08, 0xf0}

/* 'h' (104) */
#define NXFONT_METRICS_104 {1, 5, 9, 1, 5, 0}
#define NXFONT_BITMAP_104  {0x80, 0x80, 0xb0, 0xc8, 0x88, 0x88, 0x88, 0x88, 0x88}

/* 'i' (105) */
#define NXFONT_METRICS_105 {1, 1, 9, 1, 5, 0}
#define NXFONT_BITMAP_105  {0x80, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* 'j' (106) */
#define NXFONT_METRICS_106 {1, 3, 11, 0, 5, 0}
#define NXFONT_BITMAP_106  {0x20, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xc0}

/* 'k' (107) */
#define NXFONT_METRICS_107 {1, 6, 10, 1, 4, 0}
#define NXFONT_BITMAP_107  {0x80, 0x80, 0x80, 0x88, 0x90, 0xa0, 0xe0, 0x90, 0x88, 0x84}

/* 'l' (108) */
#define NXFONT_METRICS_108 {1, 1, 10, 1, 4, 0}
#define NXFONT_BITMAP_108  {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* 'm' (109) */
#define NXFONT_METRICS_109 {2, 9, 7, 1, 7, 0}
#define NXFONT_BITMAP_109  {0xb3, 0x00, 0xcc, 0x80, 0x88, 0x80, 0x88, 0x80, 0x88, 0x80, 0x88, 0x80,\
                            0x88, 0x80}
/* 'n' (110) */
#define NXFONT_METRICS_110 {1, 5, 7, 1, 7, 0}
#define NXFONT_BITMAP_110  {0xb0, 0xc8, 0x88, 0x88, 0x88, 0x88, 0x88}

/* 'o' (111) */
#define NXFONT_METRICS_111 {1, 6, 7, 1, 7, 0}
#define NXFONT_BITMAP_111 {0x30, 0x48, 0x84, 0x84, 0x84, 0x48, 0x30}

/* 'p' (112) */
#define NXFONT_METRICS_112 {1, 6, 9, 1, 7, 0}
#define NXFONT_BITMAP_112  {0xb8, 0xc4, 0x84, 0x84, 0x84, 0xc4, 0xb8, 0x80, 0x80}

/* 'q' (113) */
#define NXFONT_METRICS_113 {1, 6, 9, 1, 7, 0}
#define NXFONT_BITMAP_113  {0x74, 0x8c, 0x84, 0x84, 0x84, 0x9c, 0x74, 0x04, 0x04}

/* 'r' (114) */
#define NXFONT_METRICS_114 {1, 4, 7, 1, 7, 0}
#define NXFONT_BITMAP_114  {0xb0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x80}

/* 's' (115) */
#define NXFONT_METRICS_115 {1, 4, 7, 1, 7, 0}
#define NXFONT_BITMAP_115  {0x70, 0x80, 0x80, 0x60, 0x10, 0x10, 0xe0}

/* 't' (116) */
#define NXFONT_METRICS_116 {1, 4, 9, 0, 5, 0}
#define NXFONT_BITMAP_116  {0x40, 0x40, 0xf0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x30}

/* 'u' (117) */
#define NXFONT_METRICS_117 {1, 5, 7, 1, 7, 0}
#define NXFONT_BITMAP_117  {0x88, 0x88, 0x88, 0x88, 0x88, 0x98, 0x68}

/* 'v' (118) */
#define NXFONT_METRICS_118 {1, 5, 7, 1, 7, 0}
#define NXFONT_BITMAP_118  {0x88, 0x88, 0x88, 0x50, 0x50, 0x20, 0x20}

/* 'w' (119) */
#define NXFONT_METRICS_119 {2, 9, 7, 0, 7, 0}
#define NXFONT_BITMAP_119 {0x80, 0x80, 0x88, 0x80, 0x49, 0x00, 0x55, 0x00, 0x55, 0x00, 0x22, 0x00,\
                           0x22, 0x00}

/* 'x' (120) */
#define NXFONT_METRICS_120 {1, 5, 7, 1, 7, 0}
#define NXFONT_BITMAP_120  {0x88, 0x88, 0x50, 0x20, 0x50, 0x88, 0x88}

/* 'y' (121) */
#define NXFONT_METRICS_121 {1, 5, 9, 1, 7, 0}
#define NXFONT_BITMAP_121  {0x88, 0x88, 0x88, 0x50, 0x50, 0x20, 0x20, 0x40, 0xc0}

/* 'z' (122) */
#define NXFONT_METRICS_122 {1, 5, 7, 1, 7, 0}
#define NXFONT_BITMAP_122  {0xf8, 0x08, 0x10, 0x20, 0x40, 0x80, 0xf8}

/* Left brace (123) */
#define NXFONT_METRICS_123 {1, 4, 11, 0, 5, 0}
#define NXFONT_BITMAP_123  {0x30, 0x40, 0x40, 0x40, 0x20, 0xc0, 0x20, 0x40, 0x40, 0x40, 0x30}

/* Vertical bar (124) */
#define NXFONT_METRICS_124 {1, 1, 11, 2, 5, 0}
#define NXFONT_BITMAP_124  {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* Right brace (125) */
#define NXFONT_METRICS_125 {1, 4, 11, 0, 5, 0}
#define NXFONT_BITMAP_125  {0xc0, 0x20, 0x20, 0x20, 0x40, 0x30, 0x40, 0x20, 0x20, 0x20, 0xc0}

/* Tilde (126) */
#define NXFONT_METRICS_126 {1, 6, 3, 1, 9, 0}
#define NXFONT_BITMAP_126  {0x44, 0xb4, 0x88}

/* Space (160) */

/* Down exclamation point (161) */
#define NXFONT_METRICS_161 {1, 1, 9, 1, 7, 0}
#define NXFONT_BITMAP_161  {0x80, 0x80, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* Cent (162) */
#define NXFONT_METRICS_162 {1, 6, 9, 1, 5, 0}
#define NXFONT_BITMAP_162  {0x10, 0x3c, 0x50, 0x90, 0x90, 0x90, 0x50, 0x3c, 0x10}

/* Sterling (163) */
#define NXFONT_METRICS_163 {1, 6, 9, 1, 5, 0}
#define NXFONT_BITMAP_163  {0x1c, 0x20, 0x20, 0x20, 0x78, 0x20, 0x20, 0x40, 0xfc}

/* Currency (164) */
#define NXFONT_METRICS_164 {1, 5, 7, 1, 6, 0}
#define NXFONT_BITMAP_164  {0x88, 0x70, 0x88, 0x88, 0x88, 0x70, 0x88}

/* Yen (165) */
#define NXFONT_METRICS_165 {1, 7, 9, 0, 5, 0}
#define NXFONT_BITMAP_165  {0x82, 0x44, 0x28, 0x10, 0x7c, 0x10, 0x7c, 0x10, 0x10}

/* Broken bar (166) */
#define NXFONT_METRICS_166 {1, 1, 11, 2, 5, 0}
#define NXFONT_BITMAP_166  {0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80}

/* Section (167) */
#define NXFONT_METRICS_167 {1, 5, 11, 1, 5, 0}
#define NXFONT_BITMAP_167  {0x78, 0x80, 0x80, 0x60, 0x98, 0x88, 0xc8, 0x30, 0x08, 0x08, 0xf0}

/* Dieresis (168) */
#define NXFONT_METRICS_168 {1, 3, 2, 2, 4, 0}
#define NXFONT_BITMAP_168  {0xa0, 0xa0}

/* Copyright (169) */
#define NXFONT_METRICS_169 {2, 9, 9, 1, 5, 0}
#define NXFONT_BITMAP_169  {0x3e, 0x00, 0x41, 0x00, 0x9c, 0x80, 0xa0, 0x80, 0xa0, 0x80, 0xa0, 0x80,\
                            0x9c, 0x80, 0x41, 0x00, 0x3e, 0x00}
/* Ord feminine (170) */
#define NXFONT_METRICS_170 {1, 3, 5, 1, 4, 0}
#define NXFONT_BITMAP_170  {0xc0, 0x20, 0xe0, 0xa0, 0xe0}

/* Left guillemot (171) */
#define NXFONT_METRICS_171 {1, 4, 6, 1, 8, 0}
#define NXFONT_BITMAP_171  {0x50, 0x50, 0xa0, 0xa0, 0x50, 0x50}

/* Logical not (172) */
#define NXFONT_METRICS_172 {1, 7, 3, 1, 9, 0}
#define NXFONT_BITMAP_172  {0xfe, 0x02, 0x02}

/* Hyphen (173) */
#define NXFONT_METRICS_173 {1, 5, 1, 1, 10, 0}
#define NXFONT_BITMAP_173  {0xf8}

/* Registered (174) */
#define NXFONT_METRICS_174 {1, 6, 6, 1, 5, 0}
#define NXFONT_BITMAP_174  {0x78, 0xb4, 0xb4, 0xac, 0xac, 0x78}

/* Macron (175) */
#define NXFONT_METRICS_175 {1, 6, 1, 0, 4, 0}
#define NXFONT_BITMAP_175  {0xfc}

/* Degree (176) */
#define NXFONT_METRICS_176 {1, 3, 3, 0, 5, 0}
#define NXFONT_BITMAP_176  {0x40, 0xa0, 0x40}

/* plus/minus (177) */
#define NXFONT_METRICS_177 {1, 7, 7, 1, 7, 0}
#define NXFONT_BITMAP_177  {0x10, 0x10, 0xfe, 0x10, 0x10, 0x00, 0xfe}

/* '2' superior (178) */
#define NXFONT_METRICS_178 {1, 3, 5, 1, 5, 0}
#define NXFONT_BITMAP_178  {0xc0, 0x20, 0x60, 0x80, 0xe0}

/* '3' superior (179) */
#define NXFONT_METRICS_179 {1, 3, 5, 1, 5, 0}
#define NXFONT_BITMAP_179  {0xc0, 0x20, 0xc0, 0x20, 0xc0}

/* Acute (180) */
#define NXFONT_METRICS_180 {1, 3, 2, 2, 4, 0}
#define NXFONT_BITMAP_180  {0x60, 0x80}

/* Mu (181) */
#define NXFONT_METRICS_181 {1, 5, 9, 1, 7, 0}
#define NXFONT_BITMAP_181  {0x88, 0x88, 0x88, 0x88, 0x88, 0xd8, 0xa8, 0x80, 0x80}

/* Paragraph (182) */
#define NXFONT_METRICS_182 {1, 5, 11, 1, 5, 0}
#define NXFONT_BITMAP_182  {0x78, 0xe8, 0xe8, 0xe8, 0x68, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28}

/* Centered period (183) */
#define NXFONT_METRICS_183 {1, 1, 2, 2, 9, 0}
#define NXFONT_BITMAP_183  {0x80, 0x80}

/* Cedilla (184) */
#define NXFONT_METRICS_184 {1, 3, 2, 2, 14, 0}
#define NXFONT_BITMAP_184  {0x20, 0xc0}

/* '1' superior (185) */
#define NXFONT_METRICS_185 {1, 2, 5, 1, 5, 0}
#define NXFONT_BITMAP_185  {0x40, 0xc0, 0x40, 0x40, 0x40}

/* Ord masculine (186) */
#define NXFONT_METRICS_186 {1, 4, 5, 1, 5, 0}
#define NXFONT_BITMAP_186  {0x60, 0x90, 0x90, 0x90, 0x60}

/* Right guillemot (187) */
#define NXFONT_METRICS_187 {1, 4, 6, 1, 8, 0}
#define NXFONT_BITMAP_187  {0xa0, 0xa0, 0x50, 0x50, 0xa0, 0xa0}

/* One quarter (188) */
#define NXFONT_METRICS_188 {1, 8, 10, 1, 5, 0}
#define NXFONT_BITMAP_188  {0x42, 0xc4, 0x44, 0x48, 0x52, 0x16, 0x2a, 0x4f, 0x42, 0x80}

/* One half (189) */
#define NXFONT_METRICS_189 {1, 8, 10, 1, 5, 0}
#define NXFONT_BITMAP_189  {0x42, 0xc4, 0x44, 0x48, 0x56, 0x11, 0x22, 0x44, 0x47, 0x80}

/* Three quarters (190) */
#define NXFONT_METRICS_190 {1, 8, 10, 1, 5, 0}
#define NXFONT_BITMAP_190  {0xc2, 0x24, 0xc4, 0x28, 0xd2, 0x16, 0x2a, 0x4f, 0x42, 0x80}

/* Upside down question mark (191) */
#define NXFONT_METRICS_191 {1, 5, 9, 0, 7, 0}
#define NXFONT_BITMAP_191  {0x20, 0x20, 0x00, 0x20, 0x20, 0x60, 0x80, 0x80, 0x78}

/* Agrave (192) */
#define NXFONT_METRICS_192 {1, 6, 12, 1, 2, 0}
#define NXFONT_BITMAP_192  {0x60, 0x10, 0x00, 0x30, 0x30, 0x48, 0x48, 0x48, 0xfc, 0x84, 0x84, 0x84}

/* 'A' acute (193) */
#define NXFONT_METRICS_193 {1, 6, 12, 1, 2, 0}
#define NXFONT_BITMAP_193  {0x18, 0x20, 0x00, 0x30, 0x30, 0x48, 0x48, 0x48, 0xfc, 0x84, 0x84, 0x84}

/* 'A' circumflex (194) */
#define NXFONT_METRICS_194 {1, 6, 12, 1, 2, 0}
#define NXFONT_BITMAP_194  {0x10, 0x20, 0x00, 0x30, 0x30, 0x48, 0x48, 0x48, 0xfc, 0x84, 0x84, 0x84}

/* 'A' tilde (195) */
#define NXFONT_METRICS_195 {1, 6, 12, 1, 2, 0}
#define NXFONT_BITMAP_195  {0x34, 0x48, 0x00, 0x30, 0x30, 0x48, 0x48, 0x48, 0xfc, 0x84, 0x84, 0x84}

/* 'A' dieresis (196) */
#define NXFONT_METRICS_196 {1, 6, 12, 1, 2, 0}
#define NXFONT_BITMAP_196  {0x48, 0x48, 0x00, 0x30, 0x30, 0x48, 0x48, 0x48, 0xfc, 0x84, 0x84, 0x84}

/* 'A'ring (197) */
#define NXFONT_METRICS_197 {1, 6, 12, 1, 2, 0}
#define NXFONT_BITMAP_197  {0x30, 0x48, 0x48, 0x30, 0x30, 0x48, 0x48, 0x48, 0xfc, 0x84, 0x84, 0x84}

/* 'AE' (198) */
#define NXFONT_METRICS_198 {2, 9, 9, 1, 5, 0}
#define NXFONT_BITMAP_198  {0x0f, 0x80, 0x14, 0x00, 0x14, 0x00, 0x24, 0x00, 0x27, 0x80, 0x7c, 0x00,\
                            0x44, 0x00, 0x84, 0x00, 0x87, 0x80}

/* 'C' cedilla (199) */
#define NXFONT_METRICS_199 {1, 6, 11, 1, 5, 0}
#define NXFONT_BITMAP_199  {0x3c, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x3c, 0x08, 0x30}

/* 'E' grave (200) */
#define NXFONT_METRICS_200 {1, 5, 12, 1, 2, 0}
#define NXFONT_BITMAP_200  {0xc0, 0x20, 0x00, 0xf8, 0x80, 0x80, 0x80, 0xf0, 0x80, 0x80, 0x80, 0xf8}

/* 'E' acute (201) */
#define NXFONT_METRICS_201 {1, 5, 12, 1, 2, 0}
#define NXFONT_BITMAP_201  {0x18, 0x20, 0x00, 0xf8, 0x80, 0x80, 0x80, 0xf0, 0x80, 0x80, 0x80, 0xf8}

/* 'E' circumflex (202) */
#define NXFONT_METRICS_202 {1, 5, 12, 1, 2, 0}
#define NXFONT_BITMAP_202  {0x20, 0x50, 0x00, 0xf8, 0x80, 0x80, 0x80, 0xf0, 0x80, 0x80, 0x80, 0xf8}

/* 'E' dieresis (203) */
#define NXFONT_METRICS_203 {1, 5, 12, 1, 2, 0}
#define NXFONT_BITMAP_203  {0x50, 0x50, 0x00, 0xf8, 0x80, 0x80, 0x80, 0xf0, 0x80, 0x80, 0x80, 0xf8}

/* 'I' grave (204) */
#define NXFONT_METRICS_204 {1, 3, 12, 0, 2, 0}
#define NXFONT_BITMAP_204  {0xc0, 0x20, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40}

/* 'I' acute (205) */
#define NXFONT_METRICS_205 {1, 3, 12, 0, 2, 0}
#define NXFONT_BITMAP_205  {0x60, 0x80, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40}

/* 'I' circumflex (206) */
#define NXFONT_METRICS_206 {1, 3, 12, 0, 2, 0}
#define NXFONT_BITMAP_206  {0x40, 0xa0, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40}

/* 'I' dieresis (207) */
#define NXFONT_METRICS_207 {1, 3, 12, 0, 2, 0}
#define NXFONT_BITMAP_207  {0xa0, 0xa0, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40}

/* 'E' th (208) */
#define NXFONT_METRICS_208 {1, 8, 9, 0, 5, 0}
#define NXFONT_BITMAP_208  {0x7c, 0x42, 0x41, 0x41, 0xf1, 0x41, 0x41, 0x42, 0x7c}

/* 'N' tilde (209) */
#define NXFONT_METRICS_209 {1, 7, 12, 1, 2, 0}
#define NXFONT_BITMAP_209  {0x34, 0x48, 0x00, 0x82, 0xc2, 0xe2, 0xa2, 0x92, 0x8a, 0x86, 0x86, 0x82}

/* 'O' grave (210) */
#define NXFONT_METRICS_210 {1, 7, 12, 1, 2, 0}
#define NXFONT_BITMAP_210  {0x30, 0x08, 0x00, 0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38}

/* 'O' acute (211) */
#define NXFONT_METRICS_211 {1, 7, 12, 1, 2, 0}
#define NXFONT_BITMAP_211  {0x18, 0x20, 0x00, 0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38}

/* 'O' circumflex (212) */
#define NXFONT_METRICS_212 {1, 7, 12, 1, 2, 0}
#define NXFONT_BITMAP_212  {0x10, 0x28, 0x00, 0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38}

/* 'O' tilde (213) */
#define NXFONT_METRICS_213 {1, 7, 12, 1, 2, 0}
#define NXFONT_BITMAP_213  {0x34, 0x48, 0x00, 0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38}

/* 'O' dieresis (214) */
#define NXFONT_METRICS_214 {1, 7, 12, 1, 2, 0}
#define NXFONT_BITMAP_214  {0x44, 0x44, 0x00, 0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38}

/* Multiply sign (215) */
#define NXFONT_METRICS_215 {1, 7, 7, 1, 7, 0}
#define NXFONT_BITMAP_215  {0x82, 0x44, 0x28, 0x10, 0x28, 0x44, 0x82}

/* 'O' slash (216) */
#define NXFONT_METRICS_216 {1, 7, 9, 1, 5, 0}
#define NXFONT_BITMAP_216  {0x3a, 0x44, 0x8a, 0x8a, 0x92, 0xa2, 0xa2, 0x44, 0xb8}

/*'U' grave (217) */
#define NXFONT_METRICS_217 {1, 6, 12, 1, 2, 0}
#define NXFONT_BITMAP_217  {0x60, 0x10, 0x00, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x48, 0x30}

/* 'U' acute (218) */
#define NXFONT_METRICS_218 {1, 6, 12, 1, 2, 0}
#define NXFONT_BITMAP_218  {0x18, 0x20, 0x00, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x48, 0x30}

/* 'U' circumflex (219) */
#define NXFONT_METRICS_219 {1, 6, 12, 1, 2, 0}
#define NXFONT_BITMAP_219  {0x10, 0x28, 0x00, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x48, 0x30}

/* 'U' dieresis (220) */
#define NXFONT_METRICS_220 {1, 6, 12, 1, 2, 0}
#define NXFONT_BITMAP_220  {0x48, 0x48, 0x00, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x48, 0x30}

/* 'Y' acute (221) */
#define NXFONT_METRICS_221 {1, 7, 12, 0, 2, 0}
#define NXFONT_BITMAP_221  {0x18, 0x20, 0x00, 0x82, 0x82, 0x44, 0x44, 0x28, 0x10, 0x10, 0x10, 0x10}

/* 'T' horn (222) */
#define NXFONT_METRICS_222 {1, 5, 9, 1, 5, 0}
#define NXFONT_BITMAP_222  {0x80, 0x80, 0xf0, 0x88, 0x88, 0x88, 0xf0, 0x80, 0x80}

/* germandbls (223) */
#define NXFONT_METRICS_223 {1, 5, 10, 1, 4, 0}
#define NXFONT_BITMAP_223  {0x60, 0x90, 0x90, 0xa0, 0xa0, 0x90, 0x88, 0x88, 0x88, 0xb0}

/* 'a' grave (224) */
#define NXFONT_METRICS_224 {1, 6, 10, 1, 4, 0}
#define NXFONT_BITMAP_224  {0x60, 0x10, 0x00, 0x70, 0x88, 0x08, 0x78, 0x88, 0x88, 0x74}

/* 'a' acute (225) */
#define NXFONT_METRICS_225 {1, 6, 10, 1, 4, 0}
#define NXFONT_BITMAP_225  {0x18, 0x20, 0x00, 0x70, 0x88, 0x08, 0x78, 0x88, 0x88, 0x74}

/* 'a' circumflex (226) */
#define NXFONT_METRICS_226 {1, 6, 10, 1, 4, 0}
#define NXFONT_BITMAP_226  {0x20, 0x50, 0x00, 0x70, 0x88, 0x08, 0x78, 0x88, 0x88, 0x74}

/* 'a' tilde (227) */
#define NXFONT_METRICS_227 {1, 6, 10, 1, 4, 0}
#define NXFONT_BITMAP_227  {0x68, 0x90, 0x00, 0x70, 0x88, 0x08, 0x78, 0x88, 0x88, 0x74}

/* 'a' dieresis (228) */
#define NXFONT_METRICS_228 {1, 6, 10, 1, 4, 0}
#define NXFONT_BITMAP_228  {0x50, 0x50, 0x00, 0x70, 0x88, 0x08, 0x78, 0x88, 0x88, 0x74}

/* a' ring (229) */
#define NXFONT_METRICS_229 {1, 6, 11, 1, 3, 0}
#define NXFONT_BITMAP_229  {0x20, 0x50, 0x20, 0x00, 0x70, 0x88, 0x08, 0x78, 0x88, 0x88, 0x74}

/* 'ae' (230) */
#define NXFONT_METRICS_230 {1, 8, 7, 1, 7, 0}
#define NXFONT_BITMAP_230  {0x76, 0x89, 0x09, 0x7f, 0x88, 0x88, 0x77}

/* 'c' cedilla (231) */
#define NXFONT_METRICS_231 {1, 4, 9, 1, 7, 0}
#define NXFONT_BITMAP_231  {0x70, 0x80, 0x80, 0x80, 0x80, 0x80, 0x70, 0x20, 0xc0}

/* 'e' grave (232) */
#define NXFONT_METRICS_232 {1, 5, 10, 1, 4, 0}
#define NXFONT_BITMAP_232  {0x60, 0x10, 0x00, 0x70, 0x88, 0x88, 0xf8, 0x80, 0x80, 0x78}

/* 'e' acute (233) */
#define NXFONT_METRICS_233 {1, 5, 10, 1, 4, 0}
#define NXFONT_BITMAP_233  {0x18, 0x20, 0x00, 0x70, 0x88, 0x88, 0xf8, 0x80, 0x80, 0x78}

/* 'e' circumflex (234) */
#define NXFONT_METRICS_234 {1, 5, 10, 1, 4, 0}
#define NXFONT_BITMAP_234  {0x20, 0x50, 0x00, 0x70, 0x88, 0x88, 0xf8, 0x80, 0x80, 0x78}

/* 'e' dieresis (235) */
#define NXFONT_METRICS_235 {1, 5, 10, 1, 4, 0}
#define NXFONT_BITMAP_235  {0x50, 0x50, 0x00, 0x70, 0x88, 0x88, 0xf8, 0x80, 0x80, 0x78}

/* 'i' grave (236) */
#define NXFONT_METRICS_236 {1, 3, 10, 0, 4, 0}
#define NXFONT_BITMAP_236  {0xc0, 0x20, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40}

/* 'i' acute (237) */
#define NXFONT_METRICS_237 {1, 3, 10, 0, 4, 0}
#define NXFONT_BITMAP_237  {0x60, 0x80, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40}

/* 'i' circumflex (238) */
#define NXFONT_METRICS_238 {1, 3, 10, 0, 4, 0}
#define NXFONT_BITMAP_238  {0x40, 0xa0, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40}

/* 'i' dieresis (239) */
#define NXFONT_METRICS_239 {1, 3, 10, 0, 4, 0}
#define NXFONT_BITMAP_239  {0xa0, 0xa0, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40}

/* 'e' th (240) */
#define NXFONT_METRICS_240 {1, 6, 10, 1, 4, 0}
#define NXFONT_BITMAP_240  {0xd0, 0x20, 0x50, 0x10, 0x68, 0x84, 0x84, 0x84, 0x48, 0x30}

/* 'n' tilde (241) */
#define NXFONT_METRICS_241 {1, 5, 10, 1, 4, 0}
#define NXFONT_BITMAP_241  {0x68, 0x90, 0x00, 0xb0, 0xc8, 0x88, 0x88, 0x88, 0x88, 0x88}

/* 'o' grave (242) */
#define NXFONT_METRICS_242 {1, 6, 10, 1, 4, 0}
#define NXFONT_BITMAP_242  {0x60, 0x10, 0x00, 0x30, 0x48, 0x84, 0x84, 0x84, 0x48, 0x30}

/* 'o' acute (243) */
#define NXFONT_METRICS_243 {1, 6, 10, 1, 4, 0}
#define NXFONT_BITMAP_243  {0x18, 0x20, 0x00, 0x30, 0x48, 0x84, 0x84, 0x84, 0x48, 0x30}

/* 'o' circumflex (244) */
#define NXFONT_METRICS_244 {1, 6, 10, 1, 4, 0}
#define NXFONT_BITMAP_244  {0x10, 0x28, 0x00, 0x30, 0x48, 0x84, 0x84, 0x84, 0x48, 0x30}

/* 'o' tilde (245) */
#define NXFONT_METRICS_245 {1, 6, 10, 1, 4, 0}
#define NXFONT_BITMAP_245  {0x34, 0x48, 0x00, 0x30, 0x48, 0x84, 0x84, 0x84, 0x48, 0x30}

/* 'o' dieresis (246) */
#define NXFONT_METRICS_246 {1, 6, 10, 1, 4, 0}
#define NXFONT_BITMAP_246  {0x48, 0x48, 0x00, 0x30, 0x48, 0x84, 0x84, 0x84, 0x48, 0x30}

/* Division sign (247) */
#define NXFONT_METRICS_247 {1, 7, 7, 1, 7, 0}
#define NXFONT_BITMAP_247  {0x10, 0x10, 0x00, 0xfe, 0x00, 0x10, 0x10}

/* 'o' slash (248) */
#define NXFONT_METRICS_248 {1, 6, 7, 1, 7, 0}
#define NXFONT_BITMAP_248  {0x34, 0x48, 0x94, 0x94, 0xa4 0x48, 0xb0}

/* 'u' grave (249) */
#define NXFONT_METRICS_249 {1, 5, 10, 1, 4, 0}
#define NXFONT_BITMAP_249  {0xc0, 0x20, 0x00, 0x88, 0x88, 0x88, 0x88, 0x88, 0x98, 0x68}

/* 'u' acute (250) */
#define NXFONT_METRICS_250 {1, 5, 10, 1, 4, 0}
#define NXFONT_BITMAP_250  {0x18, 0x20, 0x00, 0x88, 0x88, 0x88, 0x88, 0x88, 0x98, 0x68}

/* 'u' circumflex (251) */
#define NXFONT_METRICS_251 {1, 5, 10, 1, 4, 0}
#define NXFONT_BITMAP_251  {0x20, 0x50, 0x00, 0x88, 0x88, 0x88, 0x88, 0x88, 0x98, 0x68}

/* 'u' dieresis (252) */
#define NXFONT_METRICS_252 {1, 5, 10, 1, 4, 0}
#define NXFONT_BITMAP_252  {0x50, 0x50, 0x00, 0x88, 0x88, 0x88, 0x88, 0x88, 0x98, 0x68}

/* 'y' acute (253) */
#define NXFONT_METRICS_253 {1, 5, 12, 1, 4, 0}
#define NXFONT_BITMAP_253  {0x18, 0x20, 0x00, 0x88, 0x88, 0x88, 0x50, 0x50, 0x20, 0x20, 0x40, 0xc0}

/* 't' horn (254) */
#define NXFONT_METRICS_254 {1, 6, 12, 1, 4, 0}
#define NXFONT_BITMAP_254  {0x80, 0x80, 0x80, 0xb8, 0xc4, 0x84, 0x84, 0x84, 0xc4, 0xb8, 0x80, 0x80}

/* 'y' dieresis (255) */
#define NXFONT_METRICS_255 {1, 5, 12, 1, 4, 0}
#define NXFONT_BITMAP_255  {0x50, 0x50, 0x00, 0x88, 0x88, 0x88, 0x50, 0x50, 0x20, 0x20, 0x40, 0xc0}

/****************************************************************************
 * Public Types
 ****************************************************************************/

/****************************************************************************
 * Public Data
 ****************************************************************************/

#undef EXTERN
#if defined(__cplusplus)
#define EXTERN extern "C"
extern "C" {
#else
#define EXTERN extern
#endif

/****************************************************************************
 * Public Functions
 ****************************************************************************/

#undef EXTERN
#if defined(__cplusplus)
}
#endif

#endif /* __LIBNX_NXFONTS_NXFONTS_SANS23X27_H */
