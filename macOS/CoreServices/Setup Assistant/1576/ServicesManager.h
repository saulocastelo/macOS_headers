//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HiCloudManager-Protocol.h"

@class NSString;

@interface ServicesManager : NSObject <HiCloudManager>
{
    BOOL coreLocationWasEnabled;
    BOOL sendDiagnosticsToApple;
    BOOL _shouldSetSendDiagnosticsToApple;
    BOOL _sendThirdPartyDiagnosticsToApple;
}

+ (void)_load_mbicloudsetup;
+ (id)_getAuthorizationFor:(id)arg1;
+ (void)disableServices;
+ (void)enableServices;
@property BOOL sendThirdPartyDiagnosticsToApple; // @synthesize sendThirdPartyDiagnosticsToApple=_sendThirdPartyDiagnosticsToApple;
@property BOOL shouldSetSendDiagnosticsToApple; // @synthesize shouldSetSendDiagnosticsToApple=_shouldSetSendDiagnosticsToApple;
@property BOOL sendDiagnosticsToApple; // @synthesize sendDiagnosticsToApple;
- (id)_genericErrorMessageDict;
@property BOOL coreLocationEnabled;
- (BOOL)applySettings:(id *)arg1;
@property(readonly) BOOL appleDiagnosticsCurrentlyEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

