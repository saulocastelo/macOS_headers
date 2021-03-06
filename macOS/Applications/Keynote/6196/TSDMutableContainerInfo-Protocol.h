//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDContainerInfo-Protocol.h"
#import "TSDModelContainer-Protocol.h"

@class NSArray, NSIndexSet, NSObject;
@protocol TSDInfo;

@protocol TSDMutableContainerInfo <TSDContainerInfo, TSDModelContainer>
- (void)replaceChildInfo:(NSObject<TSDInfo> *)arg1 with:(NSObject<TSDInfo> *)arg2;
- (void)removeChildInfo:(NSObject<TSDInfo> *)arg1;
- (void)moveChildren:(NSArray *)arg1 toIndexes:(NSIndexSet *)arg2;
- (void)insertChildInfo:(NSObject<TSDInfo> *)arg1 above:(NSObject<TSDInfo> *)arg2;
- (void)insertChildInfo:(NSObject<TSDInfo> *)arg1 below:(NSObject<TSDInfo> *)arg2;
- (void)insertChildInfo:(NSObject<TSDInfo> *)arg1 atIndex:(unsigned long long)arg2;
- (void)addChildInfo:(NSObject<TSDInfo> *)arg1;
- (void)setChildInfos:(NSArray *)arg1;
@end

