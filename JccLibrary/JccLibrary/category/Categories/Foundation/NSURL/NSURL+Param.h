//
//  NSURL+Param.h
//  iOS-Categories (https://github.com/shaojiankui/iOS-Categories)
//
//  Created by Jakey on 14/12/30.
//  Copyright (c) 2014年 www.skyfox.org. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (Param)
/**
 *  获取URL参数信息
 *
 *  @return dic
 */
- (NSDictionary *)parameters;
/**
 *  获取URL某个参数的值
 *
 *  @param parameterKey key
 *
 *  @return str
 */
- (NSString *)valueForParameter:(NSString *)parameterKey;
@end
