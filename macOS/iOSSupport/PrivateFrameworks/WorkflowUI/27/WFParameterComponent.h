//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ComponentKit/CKCompositeComponent.h>

@class WFParameter;

@interface WFParameterComponent : CKCompositeComponent
{
}

+ (BOOL)editsMultipleValues;
+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;

// Remaining properties
@property(readonly, nonatomic) __weak WFParameter *parameter; // @dynamic parameter;
@property(readonly, nonatomic) CDUnknownBlockType updateBlock; // @dynamic updateBlock;

@end

