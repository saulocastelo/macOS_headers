//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class BSAppDelegate, BSBar, BSPrefs, BSStackView, NSMutableArray, NSTrackingArea;

@interface BSAreaView : NSView
{
    BSAppDelegate *appDelegate;
    BSPrefs *prefs;
    BSBar *bar;
    NSMutableArray *stackViews;
    BOOL rebuildingItems;
    BOOL needsRebuildOfItems;
    int totalRows;
    int totalColumns;
    NSTrackingArea *trackingArea;
    long long areaViewType;
    long long areaViewIdentity;
    BSStackView *activeStack;
}

@property(retain, nonatomic) BSStackView *activeStack; // @synthesize activeStack;
- (void).cxx_destruct;
- (long long)stackIdentity;
- (long long)stackType;
- (int)indexOfStack:(id)arg1;
- (int)stackCount;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateTrackingAreas;
- (void)wantsAttentionChangedForAppWithPID:(int)arg1;
- (void)switchToStackAtIndex:(int)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)firstWindowStackForApp:(id)arg1;
- (id)stackForPath:(id)arg1;
- (id)stackForWindow:(id)arg1;
- (id)stackForApp:(id)arg1;
- (id)stackWithPID:(int)arg1;
- (id)stackAtPoint:(struct CGPoint)arg1;
- (int)getContentWidth;
- (void)updateActiveStackPopupWithModiferFlags:(unsigned long long)arg1;
- (void)redrawItemWithPID:(int)arg1 andWID:(int)arg2;
- (void)resampleIconsForItems;
- (void)redrawItems;
- (BOOL)isFlipped;
- (void)rebuildItems;
- (void)setNeedsRebuildOfItems;
- (int)calculateItemWidthForStackCount:(int)arg1;
- (int)calculateMaximumAreaViewWidth;
- (void)setupAsArea:(long long)arg1 forBar:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (float)desiredHeight;
- (float)desiredWidth;
- (int)desiredStaticRows;
- (int)desiredStaticColumns;

@end

