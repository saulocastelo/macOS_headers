//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CnxFirmwareUpdaterDelegate-Protocol.h"
#import "WorkflowNode-Protocol.h"

@class Device, HexFile, NSData, NSString, NSThread, ProgressMessage;
@protocol WorkflowNodeDelegate;

@interface FirmwareUpdateProcess : NSObject <WorkflowNode, CnxFirmwareUpdaterDelegate>
{
    id <WorkflowNodeDelegate> delegate;
    HexFile *hexFile;
    Device *device;
    NSThread *processThread;
    NSData *flashData;
    unsigned char avrChipID;
    NSData *flashBytesZeroPadded;
    NSData *flashBytesSkipFirst;
    NSData *flashBytesFirst;
    float progress;
    unsigned long long retryCount;
    ProgressMessage *progressState;
}

- (void).cxx_destruct;
- (unsigned long long)AvrWriteRecoveryInfoIntoHighFlash:(unsigned long long)arg1 withSteps:(unsigned long long)arg2;
- (void)onCnxUpdateFailure:(id)arg1;
- (void)onCnxUpdateSuccess;
- (void)onCnxProgressUpdate:(float)arg1;
- (void)programFirmwareForCnx:(id)arg1;
- (id)writeByteDataToFile:(id)arg1;
- (unsigned long long)ProgramFirmwareForAVR_VerifyFlashBytes:(id)arg1 withStartAddress:(unsigned long long)arg2 withProgressCnt:(unsigned long long)arg3 withProgressTotalSteps:(unsigned long long)arg4;
- (unsigned long long)ProgramFirmwareForAVR_WriteFlashBytes:(id)arg1 withSectionStartAddress:(unsigned long long)arg2 withProgressCnt:(unsigned long long)arg3 withProgressTotalSteps:(unsigned long long)arg4;
- (void)ProgramFirmwareForAVR:(id)arg1;
- (BOOL)signFlashIsOKForPIC18;
- (BOOL)eraseIsOKorPIC18;
- (BOOL)queryIsOKForPIC18;
- (void)programFirmwareForPIC18:(id)arg1;
- (BOOL)signFlashIsOKForPIC32;
- (BOOL)eraseMemoryIsOKForPIC32;
- (BOOL)queryInfoisOKForPIC32;
- (void)programFirmwareForPIC32:(id)arg1;
- (void)cancel;
- (void)retry;
- (void)startWithContext:(id)arg1;
- (void)start;
- (id)getTitle;
- (id)initWithDelegate:(id)arg1 withFlashData:(id)arg2 forUpdateDevice:(id)arg3;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

