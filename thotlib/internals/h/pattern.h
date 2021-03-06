/*
 *
 *  (c) COPYRIGHT INRIA, 1996.
 *  Please first read the full copyright statement in file COPYRIGHT.
 *
 */

#ifndef __PATTERN_H
#define __PATTERN_H
 
#define gray0_width 16
#define gray0_height 16
unsigned short gray0_bits[] = {
   0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000};


#define gray1_width 16
#define gray1_height 16
unsigned short gray1_bits[] = {
   0x1111, 0x0000, 0x4444, 0x0000,
   0x1111, 0x0000, 0x4444, 0x0000,
   0x1111, 0x0000, 0x4444, 0x0000,
   0x1111, 0x0000, 0x4444, 0x0000};


#define gray2_width 16
#define gray2_height 16
unsigned short gray2_bits[] = {
   0x1111, 0x4444, 0x1111, 0x4444,
   0x1111, 0x4444, 0x1111, 0x4444,
   0x1111, 0x4444, 0x1111, 0x4444,
   0x1111, 0x4444, 0x1111, 0x4444};


#define gray3_width 16
#define gray3_height 16
unsigned char gray3_bits[] = {
   0x22, 0x22, 0x55, 0x55, 0x88, 0x88, 0x55, 0x55, 0x22, 0x22, 0x55, 0x55,
   0x88, 0x88, 0x55, 0x55, 0x22, 0x22, 0x55, 0x55, 0x88, 0x88, 0x55, 0x55,
   0x22, 0x22, 0x55, 0x55, 0x88, 0x88, 0x55, 0x55};


#define gray4_width 16
#define gray4_height 16
unsigned short gray4_bits[] = {
   0x5555, 0xaaaa, 0x5555, 0xaaaa,
   0x5555, 0xaaaa, 0x5555, 0xaaaa,
   0x5555, 0xaaaa, 0x5555, 0xaaaa,
   0x5555, 0xaaaa, 0x5555, 0xaaaa};


#define gray5_width 16
#define gray5_height 16
unsigned char gray5_bits[] = {
   0xdd, 0xdd, 0xaa, 0xaa, 0x77, 0x77, 0xaa, 0xaa, 0xdd, 0xdd, 0xaa, 0xaa,
   0x77, 0x77, 0xaa, 0xaa, 0xdd, 0xdd, 0xaa, 0xaa, 0x77, 0x77, 0xaa, 0xaa,
   0xdd, 0xdd, 0xaa, 0xaa, 0x77, 0x77, 0xaa, 0xaa};


#define gray6_width 16
#define gray6_height 16
unsigned short gray6_bits[] = {
   0xeeee, 0xbbbb, 0xeeee, 0xbbbb,
   0xeeee, 0xbbbb, 0xeeee, 0xbbbb,
   0xeeee, 0xbbbb, 0xeeee, 0xbbbb,
   0xeeee, 0xbbbb, 0xeeee, 0xbbbb};


#define gray7_width 16
#define gray7_height 16
unsigned short gray7_bits[] = {
   0xeeee, 0xffff, 0xbbbb, 0xffff,
   0xeeee, 0xffff, 0xbbbb, 0xffff,
   0xeeee, 0xffff, 0xbbbb, 0xffff,
   0xeeee, 0xffff, 0xbbbb, 0xffff};


#define gray8_width 16
#define gray8_height 16
unsigned short gray8_bits[] = {
   0xffff, 0xffff, 0xffff, 0xffff,
   0xffff, 0xffff, 0xffff, 0xffff,
   0xffff, 0xffff, 0xffff, 0xffff,
   0xffff, 0xffff, 0xffff, 0xffff};

#define horiz1_width 16
#define horiz1_height 16
unsigned char horiz1_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00};

#define horiz2_width 16
#define horiz2_height 16
unsigned char horiz2_bits[] = {
   0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
   0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
   0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00};

#define horiz3_width 16
#define horiz3_height 16
unsigned char horiz3_bits[] = {
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00};

#define vert1_width 16
#define vert1_height 16
unsigned char vert1_bits[] = {
   0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
   0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
   0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22};

#define vert2_width 16
#define vert2_height 16
unsigned char vert2_bits[] = {
   0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
   0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
   0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66};

#define vert3_width 16
#define vert3_height 16
unsigned char vert3_bits[] = {
   0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77,
   0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77,
   0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77};

#define left1_width 16
#define left1_height 16
unsigned char left1_bits[] = {
   0x11, 0x11, 0x22, 0x22, 0x44, 0x44, 0x88, 0x88, 0x11, 0x11, 0x22, 0x22,
   0x44, 0x44, 0x88, 0x88, 0x11, 0x11, 0x22, 0x22, 0x44, 0x44, 0x88, 0x88,
   0x11, 0x11, 0x22, 0x22, 0x44, 0x44, 0x88, 0x88};

#define left2_width 16
#define left2_height 16
unsigned char left2_bits[] = {
   0x99, 0x99, 0x33, 0x33, 0x66, 0x66, 0xcc, 0xcc, 0x99, 0x99, 0x33, 0x33,
   0x66, 0x66, 0xcc, 0xcc, 0x99, 0x99, 0x33, 0x33, 0x66, 0x66, 0xcc, 0xcc,
   0x99, 0x99, 0x33, 0x33, 0x66, 0x66, 0xcc, 0xcc};

#define left3_width 16
#define left3_height 16
unsigned char left3_bits[] = {
   0xdd, 0xdd, 0xbb, 0xbb, 0x77, 0x77, 0xee, 0xee, 0xdd, 0xdd, 0xbb, 0xbb,
   0x77, 0x77, 0xee, 0xee, 0xdd, 0xdd, 0xbb, 0xbb, 0x77, 0x77, 0xee, 0xee,
   0xdd, 0xdd, 0xbb, 0xbb, 0x77, 0x77, 0xee, 0xee};

#define right1_width 16
#define right1_height 16
unsigned char right1_bits[] = {
   0x88, 0x88, 0x44, 0x44, 0x22, 0x22, 0x11, 0x11, 0x88, 0x88, 0x44, 0x44,
   0x22, 0x22, 0x11, 0x11, 0x88, 0x88, 0x44, 0x44, 0x22, 0x22, 0x11, 0x11,
   0x88, 0x88, 0x44, 0x44, 0x22, 0x22, 0x11, 0x11};

#define right2_width 16
#define right2_height 16
unsigned char right2_bits[] = {
   0xcc, 0xcc, 0x66, 0x66, 0x33, 0x33, 0x99, 0x99, 0xcc, 0xcc, 0x66, 0x66,
   0x33, 0x33, 0x99, 0x99, 0xcc, 0xcc, 0x66, 0x66, 0x33, 0x33, 0x99, 0x99,
   0xcc, 0xcc, 0x66, 0x66, 0x33, 0x33, 0x99, 0x99};

#define right3_width 16
#define right3_height 16
unsigned char right3_bits[] = {
   0xee, 0xee, 0x77, 0x77, 0xbb, 0xbb, 0xdd, 0xdd, 0xee, 0xee, 0x77, 0x77,
   0xbb, 0xbb, 0xdd, 0xdd, 0xee, 0xee, 0x77, 0x77, 0xbb, 0xbb, 0xdd, 0xdd,
   0xee, 0xee, 0x77, 0x77, 0xbb, 0xbb, 0xdd, 0xdd};

#define square1_width 16
#define square1_height 16
unsigned char square1_bits[] = {
   0x11, 0x11, 0xff, 0xff, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xff, 0xff,
   0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xff, 0xff, 0x11, 0x11, 0x11, 0x11,
   0x11, 0x11, 0xff, 0xff, 0x11, 0x11, 0x11, 0x11};

#define square2_width 16
#define square2_height 16
unsigned char square2_bits[] = {
   0x33, 0x33, 0xff, 0xff, 0xff, 0xff, 0x33, 0x33, 0x33, 0x33, 0xff, 0xff,
   0xff, 0xff, 0x33, 0x33, 0x33, 0x33, 0xff, 0xff, 0xff, 0xff, 0x33, 0x33,
   0x33, 0x33, 0xff, 0xff, 0xff, 0xff, 0x33, 0x33};

#define square3_width 16
#define square3_height 16
unsigned char square3_bits[] = {
   0x77, 0x77, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x77, 0x77, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0x77, 0x77, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0x77, 0x77, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};

#define lozenge_width 16
#define lozenge_height 16
unsigned char lozenge_bits[] = {
   0x11, 0x11, 0xaa, 0xaa, 0x44, 0x44, 0xaa, 0xaa, 0x11, 0x11, 0xaa, 0xaa,
   0x44, 0x44, 0xaa, 0xaa, 0x11, 0x11, 0xaa, 0xaa, 0x44, 0x44, 0xaa, 0xaa,
   0x11, 0x11, 0xaa, 0xaa, 0x44, 0x44, 0xaa, 0xaa};

#define brick_width 16
#define brick_height 16
unsigned char brick_bits[] = {
   0x00, 0x01, 0xff, 0xff, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0xff, 0xff,
   0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0xff, 0xff, 0x01, 0x00, 0x01, 0x00,
   0x01, 0x00, 0xff, 0xff, 0x00, 0x01, 0x00, 0x01};

#define tile_width 16
#define tile_height 16
unsigned char tile_bits[] = {
   0x01, 0x01, 0x01, 0x01, 0x82, 0x82, 0x7c, 0x7c, 0x10, 0x10, 0x10, 0x10,
   0x28, 0x28, 0xc7, 0xc7, 0x01, 0x01, 0x01, 0x01, 0x82, 0x82, 0x7c, 0x7c,
   0x10, 0x10, 0x10, 0x10, 0x28, 0x28, 0xc7, 0xc7};

#define sea_width 16
#define sea_height 16
unsigned char sea_bits[] = {
   0x00, 0x00, 0xc1, 0xc1, 0x31, 0x31, 0x0e, 0x0e, 0x00, 0x00, 0x81, 0x81,
   0x61, 0x61, 0x1e, 0x1e, 0x00, 0x00, 0xc1, 0xc1, 0x31, 0x31, 0x0e, 0x0e,
   0x00, 0x00, 0x81, 0x81, 0x61, 0x61, 0x1e, 0x1e};

#define basket_width 16
#define basket_height 16
unsigned char basket_bits[] = {
   0x11, 0x11, 0xb8, 0xb8, 0x7c, 0x7c, 0x3a, 0x3a, 0x11, 0x11, 0xa3, 0xa3,
   0xc7, 0xc7, 0x8b, 0x8b, 0x11, 0x11, 0xb8, 0xb8, 0x7c, 0x7c, 0x3a, 0x3a,
   0x11, 0x11, 0xa3, 0xa3, 0xc7, 0xc7, 0x8b, 0x8b};

#endif /* __PATTERN_H */
