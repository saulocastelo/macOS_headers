//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "iCloudViewControllerBase.h"

@class NSSecureTextField, NSTextField;

@interface iCloudKeychainVerifyComplexiCSCRecoveryController : iCloudViewControllerBase
{
    BOOL _generatedCode;
    BOOL _validating;
    BOOL _allowForward;
    BOOL _skipSMSVerification;
    BOOL _isRequestingToJoinInsteadOnForgotteniCSC;
    NSTextField *_verifyField;
    NSSecureTextField *_simpleVerifyField;
}

@property BOOL isRequestingToJoinInsteadOnForgotteniCSC; // @synthesize isRequestingToJoinInsteadOnForgotteniCSC=_isRequestingToJoinInsteadOnForgotteniCSC;
@property BOOL skipSMSVerification; // @synthesize skipSMSVerification=_skipSMSVerification;
@property BOOL allowForward; // @synthesize allowForward=_allowForward;
@property __weak NSSecureTextField *simpleVerifyField; // @synthesize simpleVerifyField=_simpleVerifyField;
@property __weak NSTextField *verifyField; // @synthesize verifyField=_verifyField;
@property BOOL validating; // @synthesize validating=_validating;
@property BOOL generatedCode; // @synthesize generatedCode=_generatedCode;
- (void).cxx_destruct;
- (void)_showForgotCodeSheet;
- (void)_showBackupNoCircleForgotCodeSheet;
- (void)iForgotMyiCSCClicked:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)cleanupBindings;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)backwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)didBecomeVisible;
- (void)willBecomeVisible;
- (id)init;
- (id)alternateViewIdentifier;
- (id)previousViewIdentifier;
- (id)nextViewIdentifier;

@end

