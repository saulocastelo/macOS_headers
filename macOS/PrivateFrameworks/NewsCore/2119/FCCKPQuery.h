//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSMutableArray;

@interface FCCKPQuery : PBCodable <NSCopying>
{
    NSMutableArray *_filters;
    int _queryOperator;
    NSMutableArray *_sorts;
    NSMutableArray *_types;
    BOOL _distinct;
    struct {
        unsigned int queryOperator:1;
        unsigned int distinct:1;
    } _has;
}

@property(nonatomic) BOOL distinct; // @synthesize distinct=_distinct;
@property(retain, nonatomic) NSMutableArray *sorts; // @synthesize sorts=_sorts;
@property(retain, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) NSMutableArray *types; // @synthesize types=_types;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasQueryOperator;
@property(nonatomic) int queryOperator; // @synthesize queryOperator=_queryOperator;
@property(nonatomic) BOOL hasDistinct;
- (id)sortsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sortsCount;
- (void)addSorts:(id)arg1;
- (void)clearSorts;
- (id)filtersAtIndex:(unsigned long long)arg1;
- (unsigned long long)filtersCount;
- (void)addFilters:(id)arg1;
- (void)clearFilters;
- (id)typesAtIndex:(unsigned long long)arg1;
- (unsigned long long)typesCount;
- (void)addTypes:(id)arg1;
- (void)clearTypes;
- (void)dealloc;

@end

