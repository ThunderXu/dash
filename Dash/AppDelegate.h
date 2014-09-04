//
//  AppDelegate.h
//  dash
//
//  Created by Minhua Xu on 9/4/14.
//  Copyright Minhua Xu 2014. All rights reserved.
//

#import "cocos2d.h"

@interface dashAppDelegate : NSObject <NSApplicationDelegate>
{
	NSWindow	*window_;
	CCGLView	*glView_;
}

@property (assign) IBOutlet NSWindow	*window;
@property (assign) IBOutlet CCGLView	*glView;

- (IBAction)toggleFullScreen:(id)sender;

@end
