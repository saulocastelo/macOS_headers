//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface _DUIImageComponentWithoutSlot : NSObject <NSSecureCoding>
{
    BOOL _ignoresAccessibilityFilters;
    NSString *_key;
    struct CGRect _frame;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL ignoresAccessibilityFilters; // @synthesize ignoresAccessibilityFilters=_ignoresAccessibilityFilters;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

