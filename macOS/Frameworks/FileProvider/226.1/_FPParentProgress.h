//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSProgress.h>

@class FPProgressProxy;

__attribute__((visibility("hidden")))
@interface _FPParentProgress : NSProgress
{
    FPProgressProxy *_progressProxy;
}

@property(readonly) FPProgressProxy *progressProxy; // @synthesize progressProxy=_progressProxy;
- (void).cxx_destruct;
- (void)setProgressProxy:(id)arg1;

@end

