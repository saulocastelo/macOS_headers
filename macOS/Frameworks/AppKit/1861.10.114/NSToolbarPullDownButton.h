//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPopUpButton.h>

#import <AppKit/NSMenuToolbarItemControl-Protocol.h>

@class NSImage, NSMenu, NSString;

__attribute__((visibility("hidden")))
@interface NSToolbarPullDownButton : NSPopUpButton <NSMenuToolbarItemControl>
{
    BOOL _showsIndicator;
    NSImage *_image;
    NSString *_title;
}

- (void)dealloc;
- (void)_configureDisplayItem;
@property(copy) NSString *title;
@property(retain) NSImage *image;
@property BOOL showsIndicator;
@property(retain) NSMenu *menu;
- (id)init;

// Remaining properties
@property SEL action;
@property __weak id target;

@end

