//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class CKRecordID, CKShareID, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingCopyAccessTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    BOOL _wantsSharePermissions;
    CKRecordID *_recordID;
    CKShareID *_shareID;
}

@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(nonatomic) BOOL wantsSharePermissions; // @synthesize wantsSharePermissions=_wantsSharePermissions;
- (void).cxx_destruct;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

