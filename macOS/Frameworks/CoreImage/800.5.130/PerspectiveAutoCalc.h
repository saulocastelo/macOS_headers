//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIContext, CIImage;

__attribute__((visibility("hidden")))
@interface PerspectiveAutoCalc : NSObject
{
    CIImage *_image;
    CIContext *_context;
    CDStruct_6256a11b _config;
    // Error parsing type: {double3x3="columns"[3]}, name: K
    // Error parsing type: {double3x3="columns"[3]}, name: invK
    struct CGAffineTransform imageToEdgeMap;
    struct CGAffineTransform edgeMapToImage;
    float *edgeMap;
    unsigned long long edgeMapW;
    unsigned long long edgeMapH;
    unsigned long long edgeMapRB;
    struct HoughTransform *hT;
    struct vector<HoughLine, std::__1::allocator<HoughLine>> vLines;
    struct vector<HoughLine, std::__1::allocator<HoughLine>> hLines;
    unsigned int u;
    unsigned int v;
    CDStruct_c94878bf vGuide0;
    CDStruct_c94878bf vGuide1;
    CDStruct_c94878bf hGuide0;
    CDStruct_c94878bf hGuide1;
    double vRX;
    double vRZ;
    double hRY;
    double hRZ;
    unsigned long long vCorrectedLineCount;
    unsigned long long hCorrectedLineCount;
    CIImage *saliencyHeatmap;
    double pitch;
    double yaw;
    double roll;
}

@property(readonly) double roll; // @synthesize roll;
@property(readonly) double yaw; // @synthesize yaw;
@property(readonly) double pitch; // @synthesize pitch;
@property(retain, nonatomic) CIImage *saliencyHeatmap; // @synthesize saliencyHeatmap;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)houghSpaceImage;
- (id)edgeMapImage;
- (void)computeTransform;
- (void)computeGuidesH:(unsigned long long)arg1;
- (void)computeGuidesV:(unsigned long long)arg1;
- (unsigned long long)randIndex:(unsigned long long)arg1;
- (void)computeGuides;
- (void)extractLineSegments;
- (void)refineEdgeMap;
- (void)saliencyMaskEdgeMap;
- (void)createEdgeMap;
- (void)prefilterForEdgeMap;
- (void)standardizeImage;
- (_Bool)compute;
- (void)dealloc;
- (id)initWithImage:(id)arg1 context:(id)arg2 config:(const CDStruct_6256a11b *)arg3;

@end

