//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID;

@protocol TUCallHistoryManagerXPCServer <NSObject>
- (void)unregisterClient:(id <TUCallHistoryManagerXPCClient>)arg1;
- (void)registerClient:(id <TUCallHistoryManagerXPCClient>)arg1;
- (oneway void)updateOutgoingLocalParticipantUUID:(NSUUID *)arg1 forCallsWithOutgoingLocalParticipantUUID:(NSUUID *)arg2;
@end

