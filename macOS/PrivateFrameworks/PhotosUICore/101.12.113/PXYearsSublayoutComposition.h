//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXGGeneratedSublayoutComposition.h>

@class PXYearsLayoutGenerator, PXYearsLayoutMetrics;

@interface PXYearsSublayoutComposition : PXGGeneratedSublayoutComposition
{
    PXYearsLayoutGenerator *_layoutGenerator;
    PXYearsLayoutMetrics *_metrics;
}

@property(copy, nonatomic) PXYearsLayoutMetrics *metrics; // @synthesize metrics=_metrics;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long presentedNumberOfColumns;
- (id)configuredLayoutGenerator;

@end

