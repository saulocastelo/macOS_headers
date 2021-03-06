//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AccountController : NSObject
{
    BOOL _accountIsValid;
    NSArray *_storedAliases;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *storedAliases; // @synthesize storedAliases=_storedAliases;
- (void).cxx_destruct;
- (void)aliasSetupHasNoChanges:(id)arg1;
- (void)contactListDidBecomeVisible:(id)arg1;
- (void)_setupComplete;
- (void)_showSetup;
- (void)_updateSetupAnimated:(BOOL)arg1;
- (BOOL)_shouldShowRegionChooser;
- (void)bringUpAccount;
- (void)_requestPendingInvitesDone:(id)arg1;
- (BOOL)_shouldOfferPhoneNumberActivation;
- (void)_clearExtraFaceTimeAccounts;
- (id)account;
- (void)_profileValidationStatusChanged:(id)arg1;
- (void)_enabledStatusChanged:(id)arg1;
- (void)_registrationStatusChanged:(id)arg1;
- (void)_updateAccountControllerVersion;
- (void)_daemonConnectionChanged:(id)arg1;
- (void)_accountWasRemoved:(id)arg1;
- (void)_accountWasAdded:(id)arg1;

@end

