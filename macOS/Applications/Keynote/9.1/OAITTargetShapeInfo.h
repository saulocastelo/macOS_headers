//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OADOrientedBounds, OAITPathInfo, TSDPathSource, TSUBezierPath;

@interface OAITTargetShapeInfo : NSObject
{
    OADOrientedBounds *mAbsoluteOrientedBounds;
    OAITPathInfo *mPathInfo;
    TSUBezierPath *mBezierPath;
    TSDPathSource *mPathSource;
}

@property(retain, nonatomic) TSDPathSource *pathSource; // @synthesize pathSource=mPathSource;
@property(retain, nonatomic) TSUBezierPath *bezierPath; // @synthesize bezierPath=mBezierPath;
@property(retain, nonatomic) OAITPathInfo *pathInfo; // @synthesize pathInfo=mPathInfo;
@property(retain, nonatomic) OADOrientedBounds *absoluteOrientedBounds; // @synthesize absoluteOrientedBounds=mAbsoluteOrientedBounds;
- (void).cxx_destruct;

@end

