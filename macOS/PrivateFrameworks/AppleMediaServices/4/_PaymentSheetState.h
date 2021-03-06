//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSBiometricsSignatureResult, AMSPaymentSheetMetricsEvent, NSError, NSString;

__attribute__((visibility("hidden")))
@interface _PaymentSheetState : NSObject
{
    BOOL _didAuthorizePayment;
    BOOL _didBiometricLockout;
    BOOL _didPresent;
    NSError *_error;
    AMSPaymentSheetMetricsEvent *_event;
    NSString *_passwordEquivalentToken;
    NSString *_paymentToken;
    AMSBiometricsSignatureResult *_signatureResult;
}

@property(retain) AMSBiometricsSignatureResult *signatureResult; // @synthesize signatureResult=_signatureResult;
@property(retain) NSString *paymentToken; // @synthesize paymentToken=_paymentToken;
@property(retain) NSString *passwordEquivalentToken; // @synthesize passwordEquivalentToken=_passwordEquivalentToken;
@property(retain) AMSPaymentSheetMetricsEvent *event; // @synthesize event=_event;
@property BOOL didPresent; // @synthesize didPresent=_didPresent;
@property BOOL didBiometricLockout; // @synthesize didBiometricLockout=_didBiometricLockout;
@property BOOL didAuthorizePayment; // @synthesize didAuthorizePayment=_didAuthorizePayment;
@property(retain) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)init;

@end

