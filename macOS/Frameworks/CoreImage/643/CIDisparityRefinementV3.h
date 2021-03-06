//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparityRefinementV3 : CIFilter
{
    NSNumber *inputScale;
    CIImage *inputImage;
    CIImage *inputMainImage;
    CIImage *inputLensModelImage;
    NSDictionary *inputTuningParameters;
}

@property(retain) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(retain) CIImage *inputLensModelImage; // @synthesize inputLensModelImage;
@property(retain) CIImage *inputMainImage; // @synthesize inputMainImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
@property(copy) NSNumber *inputScale; // @synthesize inputScale;
- (id)outputImage;

@end

