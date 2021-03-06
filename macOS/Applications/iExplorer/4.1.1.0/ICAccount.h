//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ICAccount : NSObject
{
    NSString *_appleID;
    NSString *_accountID;
    NSString *_mainAuthToken;
    NSString *_backupURL;
    NSString *_contentURL;
    NSArray *_backups;
    NSString *_initialAuthToken;
}

+ (id)clientInfoAndUserAgentHeaders;
@property(retain, nonatomic) NSString *initialAuthToken; // @synthesize initialAuthToken=_initialAuthToken;
@property(retain, nonatomic) NSArray *backups; // @synthesize backups=_backups;
@property(retain, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property(retain, nonatomic) NSString *backupURL; // @synthesize backupURL=_backupURL;
@property(retain, nonatomic) NSString *mainAuthToken; // @synthesize mainAuthToken=_mainAuthToken;
@property(retain, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (void).cxx_destruct;
- (void)requestBackupDeviceWithError:(id *)arg1;
- (void)requestAccountSettingsWithError:(id *)arg1;
- (void)downloadBackupDeviceListWithError:(id *)arg1;
- (void)authenticateWithPassword:(id)arg1 error:(id *)arg2;
- (id)initWithAppleID:(id)arg1;

@end

