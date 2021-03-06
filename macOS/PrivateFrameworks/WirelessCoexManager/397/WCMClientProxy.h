//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface WCMClientProxy : NSObject
{
    int mProcessId;
    id <WCMClientCallback> mDelegate;
    NSObject<OS_dispatch_queue> *mQueue;
    _Bool mIsRegistered;
    NSObject<OS_xpc_object> *mConnection;
}

- (void)reConnect;
- (void)sendMessage:(int)arg1 argument:(id)arg2;
- (void)registerToServer;
- (_Bool)connectToServer;
- (id)initWithClientProcessId:(int)arg1 delegate:(id)arg2 dispatch:(id)arg3;
- (void)dealloc;
- (id)init;

@end

