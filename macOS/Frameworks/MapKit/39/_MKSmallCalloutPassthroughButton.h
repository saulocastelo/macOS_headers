//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

__attribute__((visibility("hidden")))
@interface _MKSmallCalloutPassthroughButton : NSControl
{
    NSControl *_targetControl;
}

@property(retain, nonatomic) NSControl *targetControl; // @synthesize targetControl=_targetControl;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_forwardAction:(SEL)arg1 toTargetViewWithEvent:(id)arg2;

@end

