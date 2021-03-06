//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "TabBarViewDelegate-Protocol.h"

@class CALayer, NSString, TabBarView;

@interface MinimizeTrayTabBarView : NSView <TabBarViewDelegate>
{
    TabBarView *_tabBarView;
    CALayer *_tabLayer;
    CALayer *_fillLayer;
}

@property(nonatomic) __weak CALayer *fillLayer; // @synthesize fillLayer=_fillLayer;
@property(nonatomic) __weak CALayer *tabLayer; // @synthesize tabLayer=_tabLayer;
- (void).cxx_destruct;
- (BOOL)tabBarView:(id)arg1 acceptDrop:(id)arg2 index:(unsigned long long)arg3;
- (unsigned long long)tabBarView:(id)arg1 validateDrop:(id)arg2;
- (void)tabBarView:(id)arg1 didFinishTransitionAnimationForWindow:(id)arg2;
- (id)tabBarView:(id)arg1 destinationWindowForDetachedTabBarViewItem:(id)arg2;
- (id)tabBarView:(id)arg1 detachedWindowImageForDraggedTabBarViewItem:(id)arg2;
- (BOOL)tabBarView:(id)arg1 acceptTabDrop:(id)arg2 index:(unsigned long long)arg3;
- (unsigned long long)tabBarView:(id)arg1 validateTabDrop:(id)arg2;
- (id)tabBarView:(id)arg1 menuForTabBarViewItem:(id)arg2 event:(id)arg3;
- (void)tabBarView:(id)arg1 didMoveTabBarViewItem:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)tabBarView:(id)arg1 closeOtherTabsExceptTabBarViewItem:(id)arg2;
- (void)tabBarView:(id)arg1 closeTabBarViewItem:(id)arg2;
- (id)selectedTabBarViewItemAfterClosingCurrentTabInTabBarView:(id)arg1;
- (void)createNewTabInTabBarView:(id)arg1;
- (void)tabBarViewDidZoomIn:(id)arg1;
- (void)tabBarView:(id)arg1 selectTabBarViewItem:(id)arg2;
- (void)updateTabsWithNames:(id)arg1;
- (void)restoreMinimizedModalWindows;
- (void)mouseUp:(id)arg1;
@property(readonly, nonatomic) __weak TabBarView *tabBarView; // @synthesize tabBarView=_tabBarView;
- (BOOL)wantsUpdateLayer;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)makeBackingLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

