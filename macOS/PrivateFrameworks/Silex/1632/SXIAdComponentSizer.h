//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXComponentSizer.h>

@class SXAdController;

@interface SXIAdComponentSizer : SXComponentSizer
{
    SXAdController *_adController;
}

+ (double)debugHeight;
@property(readonly, nonatomic) SXAdController *adController; // @synthesize adController=_adController;
- (void).cxx_destruct;
- (unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)arg1;
- (struct _NSRange)overrideColumnLayoutForColumnRange:(struct _NSRange)arg1 inColumnLayout:(id)arg2;
- (double)calculateHeightForWidth:(double)arg1 inColumnLayout:(id)arg2;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 documentController:(id)arg4 layoutAttributes:(id)arg5 adController:(id)arg6;

@end

