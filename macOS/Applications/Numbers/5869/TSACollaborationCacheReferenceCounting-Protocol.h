//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TSACollaborationCacheReferenceCounting <NSObject>
- (void)decrementReferenceCountForUniqueCacheIdentifier:(struct NSUUID *)arg1 isContext:(BOOL)arg2 logEntry:(NSString *)arg3;
- (void)incrementReferenceCountForUniqueCacheIdentifier:(struct NSUUID *)arg1 isContext:(BOOL)arg2 isOpening:(BOOL)arg3 logEntry:(NSString *)arg4;
@end

