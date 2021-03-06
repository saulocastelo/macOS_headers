//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SWCRedactedDescription.h"

@class NSString, _SWCApplicationIdentifier, _SWCDomain;

@interface _SWCServiceSpecifier : NSObject <SWCRedactedDescription, NSSecureCoding, NSCopying>
{
    _SWCApplicationIdentifier *_applicationIdentifier;
    _SWCDomain *_domain;
    NSString *_serviceType;
}

+ (BOOL)supportsSecureCoding;
+ (id)serviceSpecifiersWithEntitlementValue:(id)arg1 serviceType:(id)arg2 error:(id *)arg3;
+ (id)serviceSpecifiersWithEntitlementValue:(id)arg1 error:(id *)arg2;
+ (id)_serviceSpecifiersWithEntitlementValue:(id)arg1 serviceType:(id)arg2 error:(id *)arg3;
@property(readonly) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly) _SWCDomain *SWCDomain; // @synthesize SWCDomain=_domain;
@property(readonly) _SWCApplicationIdentifier *SWCApplicationIdentifier; // @synthesize SWCApplicationIdentifier=_applicationIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)redactedDescription;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, getter=isFullySpecified) BOOL fullySpecified;
- (id)_initWithServiceType:(id)arg1 applicationIdentifier:(id)arg2 domain:(id)arg3;
@property(readonly) NSString *domain; // @dynamic domain;
@property(readonly) NSString *applicationIdentifier; // @dynamic applicationIdentifier;
- (id)init;
- (id)initWithServiceType:(id)arg1 applicationIdentifier:(id)arg2 domain:(id)arg3;
@property(readonly, getter=isValid) BOOL valid;
@property(readonly, getter=isDomainWildcard) BOOL domainWildcard;
@property(readonly) NSString *applicationIdentifierPrefix;
@property(readonly) NSString *bundleIdentifier;

@end

