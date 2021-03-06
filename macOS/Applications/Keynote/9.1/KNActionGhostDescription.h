//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KNAbstractSlide, KNBuild, NSArray, TSDEditableBezierPathSource, TSDInfoGeometry;

@interface KNActionGhostDescription : NSObject
{
    NSArray *_builds;
    KNActionGhostDescription *_previousDescription;
}

+ (id)ghostDescriptionWithPreviousDescription:(id)arg1 builds:(id)arg2;
@property(readonly, nonatomic) KNActionGhostDescription *previousDescription; // @synthesize previousDescription=_previousDescription;
@property(readonly, nonatomic) NSArray *builds; // @synthesize builds=_builds;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL i_containsNonEmphasisBuilds;
- (void)i_setPreviousGhostDescription:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) TSDInfoGeometry *infoGeometry;
- (id)p_previousInfoGeometry;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) double rotationRelativeToPreviousInfo;
@property(readonly, nonatomic) double rotationRelativeToOriginalDrawable;
- (double)p_previousRotationRelativeToOriginalDrawable;
@property(readonly, nonatomic) double scaleRelativeToPreviousInfo;
@property(readonly, nonatomic) double scale;
- (struct CGSize)p_size;
@property(readonly, nonatomic) struct CGPoint center;
@property(readonly, nonatomic) struct CGPoint positionRelativeToOriginalDrawable;
- (struct CGPoint)p_previousPositionRelativeToOriginalDrawable;
@property(readonly, nonatomic) TSDEditableBezierPathSource *pathSource;
@property(readonly, nonatomic) TSDInfoGeometry *originalGeometry;
- (id)p_originalDrawable;
- (double)p_normalizedRotationCCWFromBuilds;
@property(readonly, nonatomic) KNBuild *opacityBuild;
@property(readonly, nonatomic) KNBuild *rotationBuild;
@property(readonly, nonatomic) KNBuild *scaleBuild;
@property(readonly, nonatomic) BOOL hasMotionBuild;
@property(readonly, nonatomic) KNBuild *motionPathBuild;
- (id)p_firstBuildWithEffect:(id)arg1;
@property(readonly, nonatomic) unsigned long long index;
@property(readonly, nonatomic) KNAbstractSlide *slide;
- (id)initWithPreviousDescription:(id)arg1 builds:(id)arg2;

@end

