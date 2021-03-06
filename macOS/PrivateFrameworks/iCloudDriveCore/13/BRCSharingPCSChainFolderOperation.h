//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iCloudDriveCore/_BRCOperation.h>

#import "BRCOperationSubclass.h"
#import "ICDBRCancellable.h"

@class BRCAppLibrary, BRCServerItem, NSString;

@interface BRCSharingPCSChainFolderOperation : _BRCOperation <ICDBRCancellable, BRCOperationSubclass>
{
    BRCServerItem *_serverItem;
    BRCAppLibrary *_appLibrary;
    CDUnknownBlockType _pcsChainFolderCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType pcsChainFolderCompletionBlock; // @synthesize pcsChainFolderCompletionBlock=_pcsChainFolderCompletionBlock;
- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)_performPCSChainBatch;
- (oneway void)invalidate;
- (id)createActivity;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

