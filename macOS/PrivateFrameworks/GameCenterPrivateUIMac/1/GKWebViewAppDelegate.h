//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterPrivateUIMac/NSApplicationDelegate-Protocol.h>
#import <GameCenterPrivateUIMac/NSPageControllerDelegate-Protocol.h>
#import <GameCenterPrivateUIMac/NSTextFieldDelegate-Protocol.h>

@class GKGreenBuddyViewController, NSPageController, NSString, NSWindow;

@interface GKWebViewAppDelegate : NSObject <NSApplicationDelegate, NSPageControllerDelegate, NSTextFieldDelegate>
{
    NSPageController *_pageController;
    NSWindow *_window;
    GKGreenBuddyViewController *_greenBuddyViewController;
}

@property GKGreenBuddyViewController *greenBuddyViewController; // @synthesize greenBuddyViewController=_greenBuddyViewController;
@property NSWindow *window; // @synthesize window=_window;
@property(retain) NSPageController *pageController; // @synthesize pageController=_pageController;
- (void)showGreenBuddy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

