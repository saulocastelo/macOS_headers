//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "GEOServerFormatTokenPriceValue.h"
#import "NSCopying.h"

@class NSString, PBUnknownFields;

@interface GEOPrice : PBCodable <GEOServerFormatTokenPriceValue, NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_currencyCode;
    float _amount;
    struct {
        unsigned int has_amount:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *currencyCode;
@property(readonly, nonatomic) BOOL hasCurrencyCode;
@property(nonatomic) BOOL hasAmount;
@property(nonatomic) float amount;
@property(readonly, nonatomic) double value;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

