//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

__attribute__((visibility("hidden")))
@interface NSToolbarSnapshotWindow : NSWindow
{
    BOOL _active;
}

- (BOOL)isKeyWindow;
- (BOOL)hasMainAppearance;
- (BOOL)_hasActiveAppearanceIgnoringKeyFocus;
- (BOOL)_hasActiveAppearance;
- (BOOL)hasKeyAppearance;
- (BOOL)_hasActiveControls;
@property BOOL active;

@end

