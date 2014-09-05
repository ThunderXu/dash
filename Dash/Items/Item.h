//
//  Item.h
//  dash
//
//  Created by ADMIN on 9/4/14.
//  Copyright (c) 2014 Minhua Xu. All rights reserved.
//

@protocol ItemAction<NSObject>
-(void)move;
-(void)triggered:(NSArray*)objects;
@end

