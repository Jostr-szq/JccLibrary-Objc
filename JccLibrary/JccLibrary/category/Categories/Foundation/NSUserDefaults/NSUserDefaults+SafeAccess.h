//
//  NSUserDefaults+SafeAccess.h
//  iOS-Categories (https://github.com/shaojiankui/iOS-Categories)
//
//  Created by Jakey on 15/5/23.
//  Copyright (c) 2015年 www.skyfox.org. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSUserDefaults (SafeAccess)
+ (NSString *)stringForKey:(NSString *)defaultName;

+ (NSArray *)arrayForKey:(NSString *)defaultName;

+ (NSDictionary *)dictionaryForKey:(NSString *)defaultName;

+ (NSData *)dataForKey:(NSString *)defaultName;

+ (NSArray *)stringArrayForKey:(NSString *)defaultName;

+ (NSInteger)integerForKey:(NSString *)defaultName;

+ (float)floatForKey:(NSString *)defaultName;

+ (double)doubleForKey:(NSString *)defaultName;

+ (BOOL)boolForKey:(NSString *)defaultName;

+ (NSURL *)URLForKey:(NSString *)defaultName;

#pragma mark - WRITE FOR STANDARD

/**
 *  保存一个Object对象
 *
 *  @param value       对象
 *  @param defaultName key值
 */
+ (void)setObject:(id)value forKey:(NSString *)defaultName;

#pragma mark - READ ARCHIVE FOR STANDARD

/**
 *  读取数据(nscoding编码)
 *
 *  @param defaultName key值
 *
 *  @return obj
 */
+ (id)arcObjectForKey:(NSString *)defaultName;

#pragma mark - WRITE ARCHIVE FOR STANDARD

/**
 *  写入数据
 *
 *  @param value       obj
 *  @param defaultName key值
 */
+ (void)setArcObject:(id)value forKey:(NSString *)defaultName;
@end
