//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CPViewController.h"

#import "CPView2DSource-Protocol.h"

@interface CPView2DController : CPViewController <CPView2DSource>
{
    id mCartesianScaleDialog;
    id mRadialLogScaleDialog;
}

+ (void)drawBackgroundOfView:(id)arg1 inRect:(struct CGRect)arg2;
- (id)frameLimitsDialogForScale:(id)arg1;
- (void)drawInteriorWithRect:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)objectSupportsDimmedSelection:(id)arg1;

@end

