//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NearField/NFSessionInterface-Protocol.h>

@class NFApplet, NFPeerPaymentEnrollmentRequest, NFRunScriptParameters, NSArray, NSData, NSDictionary, NSSet, NSString;

@protocol NFSecureElementManagerSessionInterface <NFSessionInterface>
- (oneway void)getOSUpdateLog:(void (^)(NSData *, NSError *))arg1;
- (oneway void)powerCycleSEID:(NSString *)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)dumpDomain:(unsigned char)arg1 forSEID:(NSString *)arg2 callback:(void (^)(NSDictionary *, NSError *))arg3;
- (oneway void)getAttackCounterLogForSEID:(NSString *)arg1 callback:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)performPeerPaymentEnrollment:(NFPeerPaymentEnrollmentRequest *)arg1 callback:(void (^)(NFPeerPaymentEnrollmentResponse *, NSError *))arg2;
- (oneway void)checkSEExpressAppletCompatibility:(NSDictionary *)arg1 callback:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getExpressConfig:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)setExpressConfig:(NSDictionary *)arg1 restoreAuthorization:(BOOL)arg2 callback:(void (^)(NSError *))arg3;
- (oneway void)removeExpressApplet:(NFApplet *)arg1 type:(unsigned char)arg2 restoreAuthorization:(BOOL)arg3 callback:(void (^)(NSError *))arg4;
- (oneway void)removeExpressKeyID:(NSString *)arg1 forApplet:(NFApplet *)arg2 restoreAuthorization:(BOOL)arg3 callback:(void (^)(NSError *))arg4;
- (oneway void)addExpressKeyID:(NSString *)arg1 forApplet:(NFApplet *)arg2 type:(unsigned char)arg3 authorization:(NSData *)arg4 expressInfo:(NSDictionary *)arg5 callback:(void (^)(NSError *))arg6;
- (oneway void)addExpressApplet:(NFApplet *)arg1 type:(unsigned char)arg2 authorization:(NSData *)arg3 expressInfo:(NSDictionary *)arg4 callback:(void (^)(NSError *))arg5;
- (oneway void)expressModesInfo:(void (^)(BOOL, NSDictionary *))arg1;
- (oneway void)getTransitAppletState:(NFApplet *)arg1 callback:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)getFelicaAppletState:(NFApplet *)arg1 callback:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)disableAuthorizationForApplet:(NFApplet *)arg1 andKeys:(NSSet *)arg2 authorization:(NSData *)arg3 callback:(void (^)(NSError *))arg4;
- (oneway void)restoreAuthorizationForAllAppletsExcept:(NSSet *)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)setExpressModesEnabled:(BOOL)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)getCryptogram:(void (^)(NSData *, NSData *, NSError *))arg1;
- (oneway void)refreshSecureElement:(NSString *)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)didExitRestrictedMode:(NSString *)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)validateSEPairings:(void (^)(NSError *, NSString *))arg1;
- (oneway void)execRemoteAdminScript:(NSDictionary *)arg1 params:(NFRunScriptParameters *)arg2 callback:(void (^)(NSDictionary *, long long, double, NSError *))arg3;
- (oneway void)transceiveMultiple:(NSArray *)arg1 forSEID:(NSString *)arg2 callback:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)transceive:(NSData *)arg1 forSEID:(NSString *)arg2 callback:(void (^)(NSData *, NSError *))arg3;
- (oneway void)deleteAllApplets:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)deleteApplets:(NSArray *)arg1 callback:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getApplets:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)getSignedPlatformDataForSeid:(NSString *)arg1 callback:(void (^)(NSData *, NSData *, NSError *))arg2;
- (oneway void)signChallenge:(NSData *)arg1 forAID:(NSString *)arg2 callback:(void (^)(NSData *, NFSignatureInfo *, NSError *))arg3;
- (oneway void)signChallenge:(NSData *)arg1 useOSVersion:(BOOL)arg2 callback:(void (^)(NSData *, NFSignatureInfo *, NSError *))arg3;
- (oneway void)signChallenge:(NSData *)arg1 callback:(void (^)(NSData *, NSDictionary *, NSError *))arg2;
- (oneway void)stateInformation:(void (^)(NSArray *, NSError *))arg1;
@end

