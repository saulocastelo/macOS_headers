//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPProfileDomainServiceRequestProtocol.h"

@class NSString, NSXPCConnection;

@interface CPProfileDomainServiceConnectionHandler : NSObject <CPProfileDomainServiceRequestProtocol>
{
    NSXPCConnection *_connection;
}

@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)hostPrivRequest:(id)arg1 response:(id *)arg2 error:(id *)arg3;
- (_Bool)hostUpdateSecureSettingsForDevice:(_Bool)arg1 domain:(id)arg2 deltas:(id)arg3 error:(id *)arg4;
- (_Bool)hostWriteSecureSettings:(id)arg1 forDevice:(_Bool)arg2 domain:(id)arg3 error:(id *)arg4;
- (_Bool)hostGetProfiles:(id *)arg1 forDevice:(_Bool)arg2 error:(id *)arg3;
- (_Bool)hostGetProfiles:(id *)arg1 forDevice:(_Bool)arg2 withPayloadTypes:(id)arg3 error:(id *)arg4;
- (_Bool)hostGetProfiles:(id *)arg1 forDevice:(_Bool)arg2 withPayloadTypes:(id)arg3 ignoringProfile:(id)arg4 error:(id *)arg5;
- (void)processRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)queryServiceCapabilities:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

