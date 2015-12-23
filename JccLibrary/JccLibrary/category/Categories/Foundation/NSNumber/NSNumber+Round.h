//
//  NSNumber+Round.h
//  iOS-Categories (https://github.com/shaojiankui/iOS-Categories)
//
//  Created by Jakey on 15/5/23.
//  Copyright (c) 2015年 www.skyfox.org. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSNumber (Round)
/**
 *  字符串展示
 *
 *  @param digit 保留位数
 *
 *  @return 字符串
 */
- (NSString*)toDisplayNumberWithDigit:(NSInteger)digit;
/**
 *  百分比展示
 *
 *  @param digit 保留位数
 *
 *  @return 百分比字符串
 */
- (NSString*)toDisplayPercentageWithDigit:(NSInteger)digit;

/**
 *  四舍五入
 *
 *  @param digit 保留位数
 *
 *  @return number
 */
- (NSNumber*)doRoundWithDigit:(NSUInteger)digit;
/**
 *  全入
 *
 *  @param digit 保留位数
 *
 *  @return number
 */
- (NSNumber*)doCeilWithDigit:(NSUInteger)digit;
/**
 *  全舍
 *
 *  @param digit 保留位数
 *
 *  @return number
 */
- (NSNumber*)doFloorWithDigit:(NSUInteger)digit;
@end
