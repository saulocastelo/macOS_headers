//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HREffectViewController.h"

@class CIFilter, NSString;

@interface HRFilterViewController : HREffectViewController
{
    CIFilter *_filter;
    NSString *_filterName;
}

@property(retain, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property(retain, nonatomic) CIFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (void)OK:(id)arg1;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;

@end

