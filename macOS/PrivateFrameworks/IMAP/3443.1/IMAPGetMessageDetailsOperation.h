//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMAP/IMAPPersistenceTaskOperation.h>

@class NSIndexSet;
@protocol IMAPGetPersistenceIDsAndFlagsForUIDsOperationDelegate;

@interface IMAPGetMessageDetailsOperation : IMAPPersistenceTaskOperation
{
    id <IMAPGetPersistenceIDsAndFlagsForUIDsOperationDelegate> _delegate;
    NSIndexSet *_uids;
}

@property(readonly, copy, nonatomic) NSIndexSet *uids; // @synthesize uids=_uids;
@property(readonly, nonatomic) __weak id <IMAPGetPersistenceIDsAndFlagsForUIDsOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)main;
- (id)initWithDataSource:(id)arg1;
- (id)initWithUIDs:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3;

@end

