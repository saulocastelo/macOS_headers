//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXView.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface IPXMetadataCollapsibleView : UXView
{
    double _initialHeight;
    BOOL _isCollapsed;
    NSLayoutConstraint *_heightConstraint;
}

@property(readonly, nonatomic) BOOL isCollapsed; // @synthesize isCollapsed=_isCollapsed;
@property(nonatomic) __weak NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)toggleCollapsed:(BOOL)arg1 animate:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_commonInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

