//
//  FireBall.h
//  dash
//
//  Created by ADMIN on 9/4/14.
//  Copyright (c) 2014 Minhua Xu. All rights reserved.
//

#import "CCSprite.h"
#import "ItemFactory.h"
#import "Item.h"

@interface FireBall : CCSprite<ItemAction>

@end

@interface FireBallFactory : ItemFactory
@end