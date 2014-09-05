//
//  FireBall.m
//  dash
//
//  Created by ADMIN on 9/4/14.
//  Copyright (c) 2014 Minhua Xu. All rights reserved.
//

#import "FireBall.h"
#import "ItemFactory.h"

@implementation FireBall

-(void)move{

}

-(void)triggered:(NSArray *)objects{

}

-(id)myInit{
    if ( [self init] ){
        
    }
    return self;
}

@end


@implementation FireBallFactory

-(id)create{
    return [[FireBall alloc] myInit];
}

@end