//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPProtectionInfo, CKDPRecordStableUrl, CKDPRecordZoneIdentifier, CKDPShareIdentifier, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPZone : PBCodable <NSCopying>
{
    NSData *_encryptedZoneishLastRollDate;
    CKDPProtectionInfo *_protectionInfo;
    NSMutableArray *_protectionInfoKeysToRemoves;
    CKDPProtectionInfo *_recordProtectionInfo;
    CKDPShareIdentifier *_shareId;
    CKDPRecordStableUrl *_stableUrl;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
}

+ (Class)protectionInfoKeysToRemoveType;
@property(retain, nonatomic) NSMutableArray *protectionInfoKeysToRemoves; // @synthesize protectionInfoKeysToRemoves=_protectionInfoKeysToRemoves;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
@property(retain, nonatomic) CKDPRecordStableUrl *stableUrl; // @synthesize stableUrl=_stableUrl;
@property(retain, nonatomic) NSData *encryptedZoneishLastRollDate; // @synthesize encryptedZoneishLastRollDate=_encryptedZoneishLastRollDate;
@property(retain, nonatomic) CKDPProtectionInfo *recordProtectionInfo; // @synthesize recordProtectionInfo=_recordProtectionInfo;
@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)protectionInfoKeysToRemoveAtIndex:(unsigned long long)arg1;
- (unsigned long long)protectionInfoKeysToRemovesCount;
- (void)addProtectionInfoKeysToRemove:(id)arg1;
- (void)clearProtectionInfoKeysToRemoves;
@property(readonly, nonatomic) BOOL hasShareId;
@property(readonly, nonatomic) BOOL hasStableUrl;
@property(readonly, nonatomic) BOOL hasEncryptedZoneishLastRollDate;
@property(readonly, nonatomic) BOOL hasRecordProtectionInfo;
@property(readonly, nonatomic) BOOL hasProtectionInfo;
@property(readonly, nonatomic) BOOL hasZoneIdentifier;

@end

