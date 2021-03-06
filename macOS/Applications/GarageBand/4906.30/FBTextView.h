//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBLabelView.h"

#import "FBItemBackgroundViewModifier-Protocol.h"
#import "NSGestureRecognizerDelegate-Protocol.h"

@class NSString;
@protocol FBControlViewDelegate;

@interface FBTextView : FBLabelView <NSGestureRecognizerDelegate, FBItemBackgroundViewModifier>
{
    BOOL _hasDependents;
    BOOL _hasParent;
    long long tag;
    double _doubleValue;
    id <FBControlViewDelegate> _controlViewDelegate;
    long long _positioning;
    SEL _action;
    id _target;
}

@property __weak id target; // @synthesize target=_target;
@property SEL action; // @synthesize action=_action;
@property(nonatomic) long long positioning; // @synthesize positioning=_positioning;
@property(nonatomic) BOOL hasParent; // @synthesize hasParent=_hasParent;
@property(nonatomic) BOOL hasDependents; // @synthesize hasDependents=_hasDependents;
@property(nonatomic) __weak id <FBControlViewDelegate> controlViewDelegate; // @synthesize controlViewDelegate=_controlViewDelegate;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property long long tag; // @synthesize tag;
- (void).cxx_destruct;
- (id)smartControlsAssistant;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)handleClick:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (long long)dividerPosition;
- (long long)roundedSide;
- (BOOL)isOn;
- (BOOL)isHighlighted;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

