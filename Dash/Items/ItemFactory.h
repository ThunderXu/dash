//
//  ItemFactory.h
//  dash
//
//  Created by ADMIN on 9/4/14.
//  Copyright (c) 2014 Minhua Xu. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol Factory
-(id)create;
@end

@interface ItemFactory: NSObject<Factory>

-(id)create;

+(void)addFactory:(NSString *)name withFactory:(ItemFactory *)factory;
+(ItemFactory *)getFactory:(NSString *)name;
+(NSMutableDictionary *)myFactoryMap;

@end