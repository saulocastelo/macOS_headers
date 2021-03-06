//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKSyncEngineDataSource.h"

@class CKSyncEngine, NSError, NSOperation;

@protocol CKSyncEngineDataSourceInternal <CKSyncEngineDataSource>

@optional
- (void)syncEngine:(CKSyncEngine *)arg1 willEnqueueOperation:(NSOperation *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 didUpdateAccountStatus:(long long)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 didSaveSubscriptionWithError:(NSError *)arg2;
- (void)syncEngineDidScheduleInitialWork:(CKSyncEngine *)arg1;
- (void)syncEngineDidFetchDatabaseChanges:(CKSyncEngine *)arg1;
@end

