//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KNBadgeDecorator, TSDRep;

@protocol KNBadgeDecoratorDelegate <NSObject>

@optional
- (void)badgeDecoratorDidEndZoomingOperation:(KNBadgeDecorator *)arg1;
- (void)badgeDecoratorWillBeginZoomingOperation:(KNBadgeDecorator *)arg1;
- (void)badgeDecoratorDidEndDynamicOperation:(KNBadgeDecorator *)arg1;
- (void)badgeDecoratorWillBeginDynamicOperation:(KNBadgeDecorator *)arg1;
- (void)badgeDecoratorDidLayout:(KNBadgeDecorator *)arg1;
- (struct CGPoint)badgeDecorator:(KNBadgeDecorator *)arg1 badgePositionForRep:(TSDRep *)arg2;
@end

