//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

@interface DGiPhotoEffectsFilter01 : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputIntensity;
    NSNumber *inputW;
    NSNumber *inputH;
    NSNumber *inputColor;
    NSNumber *inputVariant;
}

+ (void)initialize;
- (id)customAttributes;
- (id)outputImage;

@end

