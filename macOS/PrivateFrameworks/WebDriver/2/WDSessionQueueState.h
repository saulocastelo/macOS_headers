//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, WDCommandRequest;

@interface WDSessionQueueState : NSObject
{
    BOOL _acceptsRequests;
    WDCommandRequest *_currentRequest;
    NSMutableArray *_queuedRequests;
}

@property(nonatomic) BOOL acceptsRequests; // @synthesize acceptsRequests=_acceptsRequests;
@property(readonly, nonatomic) NSMutableArray *queuedRequests; // @synthesize queuedRequests=_queuedRequests;
@property(readonly, nonatomic) WDCommandRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
- (void).cxx_destruct;
- (id)dequeueNextRequest;
- (void)enqueueRequest:(id)arg1;
- (void)finishCurrentRequest;
- (id)init;

@end

