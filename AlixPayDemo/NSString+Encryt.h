//
//  NSString+Encrypt.h
//  CloudShopping
//
//  Created by sixiaobo on 14-7-9.
//  Copyright (c) 2014年 com.Uni2uni. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCrypto.h>
#import <sys/sysctl.h>
#import <sys/socket.h>
#import <net/if.h>
#import <net/if_dl.h>

/*!
 * @brief NSString扩展加密相关方法
 * @author huangyibiao
 */
@interface NSString (Encrypt)

/*!
 * @brief 将字符串本身进行md5加密，并将加密后的字符串返回
 * @return 返回加密后的字符串
 */
- (NSString *)md5;

//! sha1加密
- (NSString *)sha1;

//! 获取网卡的MAC地址
+ (NSString *)obtainMacAddress;

@end
