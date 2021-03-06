//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSDEditableBezierPathSource.h"

@class NSArray, TSDBezierNode;

@interface TSDEditableBezierPathSource (ActionGhostAdditions)
- (void)changeBezierNodesToSharpNodes;
@property(readonly, nonatomic) NSArray *selectedNodes;
@property(readonly, nonatomic) unsigned long long selectedNodesCount;
@property(readonly, nonatomic) TSDBezierNode *penultimateNode;
@property(readonly, nonatomic) BOOL isCurved;
@property(readonly, nonatomic) struct CGPoint pathDelta;
- (void)p_adjustZeroBasedPathUsingDelta:(struct CGPoint)arg1;
- (void)p_adjustZeroBasedPathUsingDeltaFromPath:(id)arg1 isAdditive:(BOOL)arg2;
- (void)truncateDelta:(struct CGPoint)arg1;
- (void)truncateDeltaFromZeroBasedPath:(id)arg1;
- (void)prependDeltaFromZeroBasedPath:(id)arg1;
- (void)translateBezierPathToStartAtZero;
- (id)editableBezierPathStartingAtZero;
@end

