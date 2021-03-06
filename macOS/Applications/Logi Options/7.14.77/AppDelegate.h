//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSApplicationDelegate.h"

@class NSPreferencePane, NSString, NSView, NSWindowController;

__attribute__((visibility("hidden")))
@interface AppDelegate : NSObject <NSApplicationDelegate>
{
    NSView *_prefView;
    NSPreferencePane *_prefPane;
    NSWindowController *_myWindowController;
}

@property(retain) NSWindowController *myWindowController; // @synthesize myWindowController=_myWindowController;
- (void).cxx_destruct;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)handleQuit:(id)arg1;
- (void)handleQuitAppleEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)userDidSwitch:(id)arg1;
- (void)systemWillSleep:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

