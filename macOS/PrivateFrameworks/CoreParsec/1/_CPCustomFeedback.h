//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSCopying-Protocol.h>

@class NSData;

@interface _CPCustomFeedback : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _feedbackType;
    NSData *_jsonFeedback;
    struct {
        unsigned int feedbackType:1;
    } _has;
}

@property(retain, nonatomic) NSData *jsonFeedback; // @synthesize jsonFeedback=_jsonFeedback;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
- (int)StringAsFeedbackType:(id)arg1;
- (id)feedbackTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedbackType;
@property(nonatomic) int feedbackType; // @synthesize feedbackType=_feedbackType;
@property(readonly, nonatomic) BOOL hasJsonFeedback;

@end

