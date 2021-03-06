/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#import <UIKit/UIKit.h>

#import "TiHost.h"
#import "KrollBridge.h"
#import "XHRBridge.h"
#import "TitaniumViewController.h"

@interface TitaniumApp : TiHost <UIApplicationDelegate> 
{
    UIWindow *window;
	UIImageView *loadView;
	BOOL splashDone;
	
	KrollBridge *kjsBridge;
	XHRBridge *xhrBridge;
	
	NSMutableDictionary *launchOptions;
	NSTimeInterval started;
	
	NSLock *networkActivity;
	int networkActivityCount;
	
	TitaniumViewController *controller;
	NSString *userAgent;
	NSString *remoteDeviceUUID;
	
	BOOL keyboardShowing;
	id remoteNotificationDelegate;
	NSDictionary* remoteNotification;
	
	NSString *sessionId;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, assign) id remoteNotificationDelegate;
@property (nonatomic, readonly) NSDictionary* remoteNotification;

+(TitaniumApp*)app;

-(BOOL)isSplashVisible;
-(void)hideSplash:(id)event;
-(UIView*)splash;
-(UIView*)attachSplash;
-(NSDictionary*)launchOptions;
-(NSString*)remoteDeviceUUID;

-(void)startNetwork;
-(void)stopNetwork;

-(TitaniumViewController*)controller;
-(void)showModalError:(NSString*)message;

-(void)showModalController:(UIViewController*)controller animated:(BOOL)animated;
-(void)hideModalController:(UIViewController*)controller animated:(BOOL)animated;

-(NSString*)userAgent;
-(NSString*)sessionId;

-(BOOL)isKeyboardShowing;

@end

