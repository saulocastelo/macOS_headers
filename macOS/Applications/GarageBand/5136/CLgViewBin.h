//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLgView.h"

@interface CLgViewBin : CLgView
{
    BOOL _standaloneWindow;
}

@property(nonatomic) BOOL standaloneWindow; // @synthesize standaloneWindow=_standaloneWindow;
- (void)placeReusableViewControllerIntoGlobalCache;
- (void)viewVisibilityChange:(BOOL)arg1;
- (id)newSectionViewControllerForSection:(int)arg1;
- (BOOL)contentsHasVerticalScroller;
- (BOOL)contentsHasHorizontalScroller;
- (id)editorName;
- (id)initWithFrame:(struct CGRect)arg1 userData:(id)arg2 standaloneWindow:(BOOL)arg3;

@end

