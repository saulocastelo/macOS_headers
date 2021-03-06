//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTLayoutDynamicResizeInfo.h"

@interface TSTLayoutDynamicResizeInfoUnify : TSTLayoutDynamicResizeInfo
{
    double mTargetWidth;
    double mTargetHeight;
}

@property(readonly, nonatomic) double targetHeight; // @synthesize targetHeight=mTargetHeight;
@property(readonly, nonatomic) double targetWidth; // @synthesize targetWidth=mTargetWidth;
- (BOOL)applyFixedWidth:(double)arg1;
- (BOOL)applyFixedHeight:(double)arg1;
- (void)captureNewMinimumRowHeights:(id)arg1;
- (double)applyResizeWidthFactor:(double)arg1;
- (double)applyResizeHeightFactor:(double)arg1;
- (BOOL)p_applyUnifyFixedSize:(double)arg1 region:(id)arg2 direction:(long long)arg3 count:(unsigned int)arg4 currentArray:(double *)arg5 minimumArray:(double *)arg6;
- (double)p_applyUnifyResizeFactor:(double)arg1 region:(id)arg2 direction:(long long)arg3 totalOfCaptured:(double)arg4 count:(unsigned int)arg5 capturedArray:(double *)arg6 currentArray:(double *)arg7 minimumArray:(double *)arg8;

@end

