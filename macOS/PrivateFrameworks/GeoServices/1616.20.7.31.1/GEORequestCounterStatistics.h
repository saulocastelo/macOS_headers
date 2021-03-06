//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GEORequestCounterStatistics : NSObject <NSSecureCoding>
{
    unsigned long long _bytesTransmitted;
    unsigned long long _bytesReceived;
    NSMutableDictionary *_resultCounts;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(readonly, nonatomic) unsigned long long bytesTransmitted; // @synthesize bytesTransmitted=_bytesTransmitted;
- (void).cxx_destruct;
- (unsigned long long)countForResult:(unsigned char)arg1;
- (void)incrementCount:(unsigned long long)arg1 forResult:(unsigned char)arg2;
- (void)incrementBytesReceived:(unsigned long long)arg1;
- (void)incrementBytesTransmitted:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

