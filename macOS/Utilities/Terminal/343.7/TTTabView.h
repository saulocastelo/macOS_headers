//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTabView.h>

#import "NSAnimationDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class NSAnimation, NSImage, NSString, NSTimer, TTTabViewItem;

@interface TTTabView : NSTabView <NSAnimationDelegate, NSMenuDelegate>
{
    struct CGRect _newTabButtonRect;
    struct CGRect _overflowImageRect;
    struct CGRect _tabFrame;
    TTTabViewItem *_draggedTab;
    TTTabViewItem *_draggedTabOnCloseImage;
    unsigned long long _draggedTabInitialIndex;
    struct CGPoint _lastMouseDownLocation;
    double _tabDraggedXOffset;
    double _tabDraggedYOffset;
    double _tabDraggedXOffsetBeyondBounds;
    BOOL _showOverflowTabMenu;
    BOOL _isShowingOverflowMenu;
    BOOL _isMouseOffScreen;
    BOOL _isTabViewOnBottom;
    BOOL _showTabIfOnlyOneInDesktopScreen;
    BOOL _showTabIfOnlyOneInFullScreen;
    BOOL _isRegisteredForDragEvents;
    NSImage *_newTabButtonImage;
    NSImage *_overflowTabMenuImage;
    NSImage *_draggingImage;
    NSTimer *_draggingSelectTabTimer;
    TTTabViewItem *_tabViewItemForSpringLoading;
    BOOL _springLoadingArmed;
    double TT_TAB_FRAME_BOTTOM;
    BOOL _haveTabWidthMax;
    long long _tabWidthMax;
    long long _tabWidthMin;
    NSAnimation *_activeAnimation;
}

+ (id)keyPathsForValuesAffectingShowTabIfOnlyOne;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)setOverflowTabMenuImage:(id)arg1;
- (void)setNewTabButtonImage:(id)arg1;
- (id)draggedTab;
- (void)setDraggedTab:(id)arg1;
- (double)tabDraggedYOffset;
- (double)tabDraggedXOffset;
- (void)setTabDraggedXOffset:(double)arg1;
- (struct CGRect)tabFrame;
- (id)selectedTabViewItem;
- (BOOL)showTabIfOnlyOneInFullScreen;
- (void)setShowTabIfOnlyOneInFullScreen:(BOOL)arg1;
- (BOOL)showTabIfOnlyOneInDesktopScreen;
- (void)setShowTabIfOnlyOneInDesktopScreen:(BOOL)arg1;
- (void)updateTabBarVisibility:(BOOL)arg1;
- (BOOL)showsTabs;
- (BOOL)showTabIfOnlyOne;
- (void)setShowTabIfOnlyOne:(BOOL)arg1;
- (BOOL)tabViewOnBottom;
- (void)setTabViewOnBottom:(BOOL)arg1;
- (BOOL)isFlipped;
- (id)lineColor;
- (void)selectTabFromMenu:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)menu:(id)arg1 updateItem:(id)arg2 atIndex:(long long)arg3 shouldCancel:(BOOL)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawBorderAndBackground;
- (void)drawTabOverflowMenuImage;
- (void)drawNewTabButtonImage;
- (void)resizeWindowToAccountForTabsBeingDisplayed:(int)arg1;
- (void)viewDidEndLiveResize;
- (struct CGRect)resizeRectToFitInsideBounds:(struct CGRect)arg1;
- (struct CGRect)_tabRectAdjustedForOverlap:(struct CGRect)arg1;
- (void)removeTabViewTooltips;
- (struct CGSize)contentSizeForFrameSize:(struct CGSize)arg1;
- (struct CGSize)frameSizeForContentSize:(struct CGSize)arg1;
- (struct CGRect)contentRect;
- (double)_tabBarheight;
- (struct CGRect)rectForTabViewItem:(long long)arg1 forNumberOfTabs:(long long)arg2;
- (void)animationDidEnd:(id)arg1;
- (void)startSpringBackAnimation:(id)arg1;
- (void)startTabReorderAnimation:(id)arg1;
- (void)stopActiveAnimation;
- (long long)indexOfLastVisibleTabViewItem;
- (BOOL)isTabViewItemInOverflowMenu:(id)arg1;
- (void)addTabViewItem:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)addTabViewItem:(id)arg1;
- (void)removeTabViewItem:(id)arg1;
- (void)selectPreviousTabViewItem:(id)arg1;
- (void)selectNextTabViewItem:(id)arg1;
- (void)selectTabViewItem:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (BOOL)isValidDrag:(id)arg1 operation:(unsigned long long *)arg2 validCount:(long long *)arg3;
- (id)folderItemsFromPasteboard:(id)arg1;
- (void)unregisterForDragEvents;
- (void)registerForDragEvents;
- (void)invalidateDraggingSelectTabTimer;
- (void)updateDraggingSelectTabTimer:(id)arg1;
- (void)scheduleDraggingSelectTabTimer:(long long)arg1;
- (void)draggingSelectTabTimer:(id)arg1;
- (void)unhighlightTabs;
- (void)highlightTab:(id)arg1;
- (struct CGPoint)reverseRecenterMouseInFloatingTab:(struct CGPoint)arg1;
- (struct CGPoint)recenterMouseInFloatingTab:(struct CGPoint)arg1;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (id)tabViewItemAtPoint:(struct CGPoint)arg1;
- (BOOL)acceptsFirstResponder;
- (void)windowDidChangeKey:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)initTabFrame;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

