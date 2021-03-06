//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKLabelNavFeature-Protocol.h>

@class NSString, VKLabelNavJunction, VKLabelNavRoadLabel;

__attribute__((visibility("hidden")))
@interface VKLabelNavRoad : NSObject <VKLabelNavFeature>
{
    shared_ptr_702c344d _tile;
    CDStruct_dce90927 *_data;
    unsigned long long _vertexIndexA;
    unsigned long long _vertexIndexB;
    CDStruct_3b01f0aa *_junctionA;
    CDStruct_3b01f0aa *_junctionB;
    VKLabelNavJunction *_navJunctionA;
    vector_8c4749e3 _simplifiedPoints;
    Matrix_8746f91e _direction;
    BOOL _isRoadLabelUnique;
    BOOL _isOnRoute;
    BOOL _isStartOfRoadName;
    BOOL _isInGuidance;
    BOOL _isGuidanceStepStart;
    BOOL _areLabelsDisabled;
    struct PolylineCoordinate _routeOffset;
    float _routeCrossProduct;
    long long _intraRoadPriority;
    double _length;
    NSString *_name;
    NSString *_shieldDisplayGroup;
    NSString *_shieldGroup;
    VKLabelNavRoadLabel *_roadSign;
    VKLabelNavRoadLabel *_roadShield;
    char _isVisibilityCached[3];
    char _cachedSignVisibility[3];
    char _cachedShieldVisibility[3];
    BOOL _hasVisibleSigns;
    BOOL _hasVisibleShields;
    BOOL _suppressRoadSignIfShieldPresent;
    BOOL _isPicked;
}

@property(readonly, nonatomic) const shared_ptr_702c344d *tile; // @synthesize tile=_tile;
@property(nonatomic) BOOL isPicked; // @synthesize isPicked=_isPicked;
@property(readonly, nonatomic) BOOL suppressRoadSignIfShieldPresent; // @synthesize suppressRoadSignIfShieldPresent=_suppressRoadSignIfShieldPresent;
@property(readonly, nonatomic) VKLabelNavJunction *navJunctionA; // @synthesize navJunctionA=_navJunctionA;
@property(nonatomic) BOOL isRoadLabelUnique; // @synthesize isRoadLabelUnique=_isRoadLabelUnique;
@property(nonatomic) BOOL areLabelsDisabled; // @synthesize areLabelsDisabled=_areLabelsDisabled;
@property(nonatomic) long long intraRoadPriority; // @synthesize intraRoadPriority=_intraRoadPriority;
@property(readonly, nonatomic) CDStruct_3b01f0aa *junctionB; // @synthesize junctionB=_junctionB;
@property(nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property(nonatomic) float routeCrossProduct; // @synthesize routeCrossProduct=_routeCrossProduct;
@property(nonatomic) BOOL isGuidanceStepStart; // @synthesize isGuidanceStepStart=_isGuidanceStepStart;
@property(nonatomic) BOOL isInGuidance; // @synthesize isInGuidance=_isInGuidance;
@property(nonatomic) BOOL isStartOfRoadName; // @synthesize isStartOfRoadName=_isStartOfRoadName;
@property(nonatomic) BOOL isOnRoute; // @synthesize isOnRoute=_isOnRoute;
@property(nonatomic) Matrix_8746f91e direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isTrafficCameraFeature;
@property(readonly, nonatomic) BOOL isEtaFeature;
- (double)length;
- (id)_newLabelWithNavContext:(struct NavContext *)arg1 isShieldLabel:(BOOL)arg2 worldPoint:(Matrix_6e1d3589)arg3 alignment:(unsigned char)arg4 artworkCache:(struct VKLabelNavArtworkCache *)arg5;
@property(readonly, nonatomic) unsigned char roadSignAlignment;
- (BOOL)_worldPointForRoadOffset:(float)arg1 worldPoint:(Mercator3_40a88dec *)arg2;
- (void)_worldRoadPoints:(vector_8c4749e3 *)arg1;
- (void)appendSimplifiedWorldRoadPoints:(vector_8c4749e3 *)arg1;
- (void)recreateRoadSignWithAlignment:(unsigned char)arg1 navContext:(struct NavContext *)arg2 artworkCache:(struct VKLabelNavArtworkCache *)arg3;
- (void)createLabelWithNavContext:(struct NavContext *)arg1 isShieldLabel:(BOOL)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 minRouteDistance:(float)arg6 roadGraph:(id)arg7 artworkCache:(struct VKLabelNavArtworkCache *)arg8;
- (BOOL)_findLabelAnchorPoint:(Mercator3_40a88dec *)arg1 isShieldLabel:(BOOL)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 roadGraph:(id)arg6;
- (float)_findRoadOffsetForDistanceToRay:(float)arg1 rayStart:(Matrix_6e1d3589)arg2 rayVector:(Matrix_8746f91e)arg3 roadGraph:(id)arg4;
- (id)labelWithType:(BOOL)arg1;
@property(readonly, nonatomic) NSString *shieldDisplayGroup;
@property(readonly, nonatomic) NSString *shieldGroup;
- (BOOL)hasShield;
- (BOOL)hasVisibleShields;
- (BOOL)hasVisibleSigns;
- (BOOL)matchesRoad:(id)arg1;
- (BOOL)matchesRoadEdge:(const CDStruct_91f75a7f *)arg1;
- (void)getRoadEdge:(CDStruct_91f75a7f *)arg1;
@property(readonly, nonatomic) BOOL isOnewayToJunction;
@property(readonly, nonatomic) BOOL isRamp;
@property(readonly, nonatomic) BOOL isAwayFromRoute;
@property(readonly, nonatomic) int roadClass;
- (id)description;
- (void)prepareStyleVarsWithContext:(struct NavContext *)arg1;
- (void)layoutWithNavContext:(struct NavContext *)arg1;
- (void)_updateWithNavContext:(struct NavContext *)arg1;
- (void)_updateWithNavContext:(struct NavContext *)arg1 threshold:(double)arg2;
- (void)clearRoadSign;
@property(readonly, nonatomic) const char *cstrName;
- (void)dealloc;
- (id)initWithRoadEdge:(const CDStruct_91f75a7f *)arg1 navJunctionA:(id)arg2 routeOffset:(struct PolylineCoordinate)arg3 tile:(const shared_ptr_702c344d *)arg4;

@end

