//
//  NSDateFormatter+Make.h
//  iOS-Categories (https://github.com/shaojiankui/iOS-Categories)
//
//  Created by Jakey on 15/4/25.
//  Copyright (c) 2015年 www.skyfox.org. All rights reserved.
//  mobile.dzone.com/news/ios-threadsafe-date-formatting

#import <Foundation/Foundation.h>

@interface NSDateFormatter (Make)
/**
 *  设置日期格式
 *
 *  @param format "yyy-MM-dd HH:mm:ss" "yyyy年MM月dd日#EEEE" EEEE为星期几
 *
 *  @return class
 */
+(NSDateFormatter *)dateFormatterWithFormat:(NSString *)format;
/**
 *  设置日期格式(带时区)
 *
 *  @param format   格式
 *  @param timeZone 时区(UTC)
 *
 *  @return self
 */
+(NSDateFormatter *)dateFormatterWithFormat:(NSString *)format timeZone:(NSTimeZone *)timeZone;
/**
 *  设置日期(格式、时区、本地化)
 *
 *  @param format   格式
 *  @param timeZone 时区
 *  @param locale   本地化(zh)
 *
 *  @return self
 */
+(NSDateFormatter *)dateFormatterWithFormat:(NSString *)format timeZone:(NSTimeZone *)timeZone locale:(NSLocale *)locale;
/**
 *  设置日期默认格式
 *
 *  @param style 格式
 *
 *  @return self
 */
+(NSDateFormatter *)dateFormatterWithDateStyle:(NSDateFormatterStyle)style;
/**
 *  设置日期(格式、时区)
 *
 *  @param style    格式
 *  @param timeZone 时区
 *
 *  @return self
 */
+(NSDateFormatter *)dateFormatterWithDateStyle:(NSDateFormatterStyle)style timeZone:(NSTimeZone *)timeZone;
/* 基本同时 区别未知 */
+(NSDateFormatter *)dateFormatterWithTimeStyle:(NSDateFormatterStyle)style;
+(NSDateFormatter *)dateFormatterWithTimeStyle:(NSDateFormatterStyle)style timeZone:(NSTimeZone *)timeZone;
@end
