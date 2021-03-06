//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AUDataModel.h"

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface AUDisksModel : AUDataModel
{
    NSString *internalDiskName;
    NSMutableArray *partitions;
    NSMutableArray *disks;
    BOOL enableFileSharing;
    BOOL shareDisksOverWAN;
    NSNumber *diskSecurityMethod;
    NSArray *diskSecurityMethodValues;
    NSMutableArray *fileSharingAccounts;
    NSString *diskPassword;
    NSString *diskPasswordVerify;
    BOOL rememberPasswordInKeychain;
    BOOL supportsEraseInternalDisk;
    BOOL supportsArchiveInternalDisk;
}

@property(nonatomic) BOOL supportsArchiveInternalDisk; // @synthesize supportsArchiveInternalDisk;
@property(nonatomic) BOOL supportsEraseInternalDisk; // @synthesize supportsEraseInternalDisk;
@property(nonatomic) BOOL rememberPasswordInKeychain; // @synthesize rememberPasswordInKeychain;
@property(retain, nonatomic) NSString *diskPasswordVerify; // @synthesize diskPasswordVerify;
@property(retain, nonatomic) NSString *diskPassword; // @synthesize diskPassword;
@property(retain, nonatomic) NSMutableArray *fileSharingAccounts; // @synthesize fileSharingAccounts;
@property(retain, nonatomic) NSArray *diskSecurityMethodValues; // @synthesize diskSecurityMethodValues;
@property(retain, nonatomic) NSNumber *diskSecurityMethod; // @synthesize diskSecurityMethod;
@property(nonatomic) BOOL shareDisksOverWAN; // @synthesize shareDisksOverWAN;
@property(nonatomic) BOOL enableFileSharing; // @synthesize enableFileSharing;
@property(retain, nonatomic) NSMutableArray *disks; // @synthesize disks;
@property(retain, nonatomic) NSMutableArray *partitions; // @synthesize partitions;
@property(retain, nonatomic) NSString *internalDiskName; // @synthesize internalDiskName;
- (id)errors;
- (BOOL)valid;
- (BOOL)validateModel:(id)arg1;
- (BOOL)saveData;
- (void)loadData;
- (void)dealloc;
- (void)_unbindAndRemoveObserverForInternalDiskName;
- (id)init;

@end

