//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSDictionary, UIGestureRecognizer, UIInputViewSetPlacement, UIView;
@protocol UIInputViewSetPlacementApplicator, UIInputViewSetPlacementOwner;

@protocol UIInputViewSetPlacementApplicator <NSObject>
+ (id <UIInputViewSetPlacementApplicator>)applicatorForOwner:(id <UIInputViewSetPlacementOwner>)arg1 withPlacement:(UIInputViewSetPlacement *)arg2;
@property(readonly) struct CGRect popoverFrame;
@property(readonly) struct UIEdgeInsets contentInsets;
@property(readonly, retain) UIView *twoFingerDraggableView;
@property(readonly, retain) UIView *draggableView;
@property(readonly, retain) NSArray *constraints;
@property(readonly) struct CGPoint origin;
- (void)invalidate;
- (void)prepare;
- (void)applyChanges:(NSDictionary *)arg1;
- (BOOL)allConstraintsActive;
- (BOOL)isGesture:(UIGestureRecognizer *)arg1 inDraggableView:(struct CGPoint)arg2;
- (BOOL)preBeginGesture:(UIGestureRecognizer *)arg1 shouldBegin:(char *)arg2;
@end

