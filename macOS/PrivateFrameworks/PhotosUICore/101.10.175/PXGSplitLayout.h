//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXGLayout.h>

@interface PXGSplitLayout : PXGLayout
{
    CDStruct_5f1286c4 _updateFlags;
    BOOL _settingSublayouts;
    BOOL _isUpdatingSublayouts;
    BOOL _shouldExcludeTopAndBottomPaddingFromReferenceSize;
    PXGLayout *_firstSublayout;
    PXGLayout *_secondSublayout;
    long long _mode;
    double _interlayoutSpacing;
    struct NSEdgeInsets _padding;
    struct NSEdgeInsets _presentedPadding;
}

@property(readonly, nonatomic) struct NSEdgeInsets presentedPadding; // @synthesize presentedPadding=_presentedPadding;
@property(nonatomic) BOOL shouldExcludeTopAndBottomPaddingFromReferenceSize; // @synthesize shouldExcludeTopAndBottomPaddingFromReferenceSize=_shouldExcludeTopAndBottomPaddingFromReferenceSize;
@property(nonatomic) struct NSEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double interlayoutSpacing; // @synthesize interlayoutSpacing=_interlayoutSpacing;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) PXGLayout *secondSublayout; // @synthesize secondSublayout=_secondSublayout;
@property(retain, nonatomic) PXGLayout *firstSublayout; // @synthesize firstSublayout=_firstSublayout;
- (void).cxx_destruct;
- (void)willRemoveSublayout:(id)arg1;
- (void)didAddSublayout:(id)arg1;
- (void)didChangeSublayoutOrigins;
- (void)sublayoutDidChangeLastBaseline:(id)arg1;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (void)userInterfaceDirectionDidChange;
- (void)screenScaleDidChange;
- (void)safeAreaInsetsDidChange;
- (void)visibleRectDidChange;
- (void)referenceSizeDidChange;
- (void)viewEnvironmentDidChange;
- (void)_updateSublayoutGeometries;
- (void)update;
- (void)_replaceSublayout:(id)arg1 withSublayout:(id)arg2 atIndex:(long long)arg3;

@end

