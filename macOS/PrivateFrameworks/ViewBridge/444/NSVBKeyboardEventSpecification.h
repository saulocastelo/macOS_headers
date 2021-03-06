//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ViewBridge/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSVBKeyboardEventSpecification : NSObject <NSSecureCoding>
{
    int _modifierFlagsCriterion;
    NSString *_charactersIgnoringModifiers;
    unsigned long long _modifierFlags;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) int modifierFlagsCriterion; // @synthesize modifierFlagsCriterion=_modifierFlagsCriterion;
@property(readonly) unsigned long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(readonly) NSString *charactersIgnoringModifiers; // @synthesize charactersIgnoringModifiers=_charactersIgnoringModifiers;
- (id)initWithKeyCode:(unsigned short)arg1;
- (id)initWithKeyCode:(unsigned short)arg1 modifierFlags:(unsigned long long)arg2;
- (id)initWithKeyCode:(unsigned short)arg1 modifierFlags:(unsigned long long)arg2 modifierFlagsCriterion:(int)arg3;
- (id)initWithCharactersIgnoringModifiers:(id)arg1;
- (id)initWithCharactersIgnoringModifiers:(id)arg1 modifierFlags:(unsigned long long)arg2;
- (id)initWithCharactersIgnoringModifiers:(id)arg1 modifierFlags:(unsigned long long)arg2 modifierFlagsCriterion:(int)arg3;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end

