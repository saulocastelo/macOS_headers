//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPageController.h>

@class PagingDotView;

@interface RemindersPageController : NSPageController
{
    PagingDotView *_pagingDotView;
}

@property(retain) PagingDotView *pagingDotView; // @synthesize pagingDotView=_pagingDotView;
- (void).cxx_destruct;
- (void)navigateToPage:(long long)arg1;
- (void)updatePagingDotView;
- (BOOL)shouldShowPagingDots;
- (void)setSelectedIndex:(long long)arg1;
- (void)setArrangedObjects:(id)arg1;
- (id)init;

@end

