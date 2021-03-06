//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DBRoute, NSOperationQueue, NSString;

@interface DBTask : NSObject
{
    DBRoute *_route;
    NSOperationQueue *_queue;
    int _retryCount;
    NSString *_tokenUid;
}

@property(readonly, copy, nonatomic) NSString *tokenUid; // @synthesize tokenUid=_tokenUid;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
- (void).cxx_destruct;
- (id)restart;
- (void)start;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (id)initWithRoute:(id)arg1 tokenUid:(id)arg2;

@end

