//
//  KeyChainStore.h
//  HealthyCity
//
//  Created by gulu on 17/11/29.
//  Copyright © 2017年 gulu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZCKeyChainStore : NSObject

+ (void)save:(NSString *)service data:(id)data;
+ (id)load:(NSString *)service;
+ (void)deleteKeyData:(NSString *)service;

@end
