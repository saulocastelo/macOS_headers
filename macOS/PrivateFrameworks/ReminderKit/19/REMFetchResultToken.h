//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary;

@interface REMFetchResultToken : NSObject <NSSecureCoding>
{
    NSDictionary *_persistentHistoryTokens;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *persistentHistoryTokens; // @synthesize persistentHistoryTokens=_persistentHistoryTokens;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentHistoryTokens:(id)arg1;

@end

