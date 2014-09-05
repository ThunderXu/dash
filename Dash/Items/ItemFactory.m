#import "ItemFactory.h"

@implementation ItemFactory

static NSMutableDictionary *itemFactoryMap;

+(void)addFactory:(NSString *)name withFactory:(ItemFactory *)factory{
    itemFactoryMap[name] = factory;
}

+(ItemFactory *)getFactory:(NSString *)name{
    return itemFactoryMap[name];
}

+(NSMutableDictionary *)myFactoryMap{
    return itemFactoryMap;
}

@end