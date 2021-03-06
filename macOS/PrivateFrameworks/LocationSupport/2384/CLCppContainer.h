//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LocationSupport/NSSecureCoding-Protocol.h>

@interface CLCppContainer : NSObject <NSSecureCoding>
{
    const void *_cppObjectPtr;
    CDUnknownBlockType _destructor;
}

+ (BOOL)supportsSecureCoding;
+ (id)containerWithObject:(void *)arg1 destructor:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType destructor; // @synthesize destructor=_destructor;
@property(nonatomic) const void *cppObjectPtr; // @synthesize cppObjectPtr=_cppObjectPtr;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithObject:(void *)arg1 destructor:(CDUnknownBlockType)arg2;

@end

