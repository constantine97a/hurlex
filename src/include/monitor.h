/*
 * =====================================================================================
 *
 *       Filename:  monitor.h
 *
 *    Description:  屏幕操作的相关函数的头文件
 *
 *        Version:  1.0
 *        Created:  2013年07月24日 20时53分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */

#ifndef INCLUDE_MONITOR_H_

#define INCLUDE_MONITOR_H_

#include "common.h"

typedef
enum real_color {
	rc_black = 0,
	rc_blue = 1,
	rc_green = 2,
	rc_cyan = 3,
	rc_red = 4,
	rc_magenta = 5,
	rc_brown = 6,
	rc_light_grey = 7,
	rc_dark_grey = 8,
	rc_light_blue = 9,
	rc_light_green = 10,
	rc_light_cyan = 11,
	rc_light_red = 12,
	rc_light_magenta = 13,
	rc_light_brown  = 14, 	// yellow
	rc_white = 15
} real_color_t;

// 清屏操作
void monitor_clear();

// 屏幕输出一个字符(带颜色)
void monitor_putc_color(char c, real_color_t back, real_color_t fore);

// 屏幕打印一个以 \0 结尾的字符串(默认黑底白字)
void monitor_write(char *cstr);

// 屏幕打印一个以 \0 结尾的字符串(带颜色)
void monitor_write_color(char *cstr, real_color_t back, real_color_t fore);

// 屏幕输出一个十六进制的整型数
void monitor_write_hex(uint32_t n, real_color_t back, real_color_t fore);

// 屏幕输出一个十进制的整形数
void monitor_write_dec(uint32_t n, real_color_t back, real_color_t fore);

#endif  // INCLUDE_MONITOR_H_
