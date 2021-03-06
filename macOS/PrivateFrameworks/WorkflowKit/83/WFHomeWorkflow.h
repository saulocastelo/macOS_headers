//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString, WFWorkflow;

@interface WFHomeWorkflow : NSObject
{
    NSData *_data;
    WFWorkflow *_workflow;
}

@property(retain, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)debugDescription;
@property(readonly, nonatomic) BOOL requiresDeviceUnlock;
@property(readonly, copy, nonatomic) NSArray *summaryIconDescriptors;
@property(readonly, copy, nonatomic) NSArray *summaryIconNames;
@property(readonly, copy, nonatomic) NSString *summaryString;
- (id)initWithData:(id)arg1;

@end

