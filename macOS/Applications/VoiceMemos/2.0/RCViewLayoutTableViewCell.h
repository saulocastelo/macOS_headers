//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMutableArray, RCViewLayout;

@interface RCViewLayoutTableViewCell : UITableViewCell
{
    NSMutableArray *_viewLayouts;
    NSMutableArray *_viewLayoutsBeingRemoved;
    BOOL _fadeContentDuringPushPopTransitions;
    BOOL _separatorInsetsDrawEndToEnd;
    RCViewLayout *_mainContentViewLayout;
    double _horizontalContentMargin;
    NSArray *_constraintsForStackingViews;
    NSArray *_constraintsForPinningContentBottom;
}

+ (double)_estimatedTableRowHeightLoadingIfNecessary:(BOOL)arg1;
+ (double)estimatedTableRowHeight;
@property(retain, nonatomic) NSArray *constraintsForPinningContentBottom; // @synthesize constraintsForPinningContentBottom=_constraintsForPinningContentBottom;
@property(retain, nonatomic) NSArray *constraintsForStackingViews; // @synthesize constraintsForStackingViews=_constraintsForStackingViews;
@property(nonatomic) double horizontalContentMargin; // @synthesize horizontalContentMargin=_horizontalContentMargin;
@property(nonatomic) BOOL separatorInsetsDrawEndToEnd; // @synthesize separatorInsetsDrawEndToEnd=_separatorInsetsDrawEndToEnd;
@property(readonly, nonatomic) RCViewLayout *mainContentViewLayout; // @synthesize mainContentViewLayout=_mainContentViewLayout;
- (void).cxx_destruct;
- (id)_constraintsForPinningContentBottomToViewLayout:(id)arg1;
- (id)_constraintsForStackingViewLayouts:(id)arg1;
- (void)_performStackTransitionWithStartingAlpha:(double)arg1 finalAlpha:(double)arg2 setupBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_visibleContentViewLayoutsNotBeingRemoved;
- (void)prepareForReuse;
- (void)popExpandedContentViewLayoutWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)pushExpandedContentViewLayout:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *visibleContentViewLayouts;
- (void)prepareForEstimatingRowHeight;
- (void)_setupTableViewCellCommon;
- (id)initWithMainContentViewLayout:(id)arg1 reuseIdentifier:(id)arg2;

@end

