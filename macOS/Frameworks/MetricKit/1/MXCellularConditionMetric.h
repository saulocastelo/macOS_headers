//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MetricKit/MXMetric.h>

@class MXHistogram;

@interface MXCellularConditionMetric : MXMetric
{
    MXHistogram *_histogrammedCellularConditionTime;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) MXHistogram *histogrammedCellularConditionTime; // @synthesize histogrammedCellularConditionTime=_histogrammedCellularConditionTime;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCellularConditionTime:(id)arg1;

@end

