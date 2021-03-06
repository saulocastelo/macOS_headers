//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, OSPDevice, OSPSecureBootBundle;

@interface OSPRequest : NSObject
{
    BOOL _userAuth;
    BOOL _globalSignature;
    BOOL _useTDMDeviceIdentity;
    BOOL _useRunningDeviceIdentity;
    BOOL _skipPersonalizationForTesting;
    BOOL _useDummyDeviceIdentity;
    NSURL *_volumeURL;
    NSURL *_bundleURL;
    NSArray *_packageSpecifiers;
    NSURL *_outputURL;
    NSURL *_signingServerURL;
    NSString *_variant;
    OSPDevice *_device;
    OSPSecureBootBundle *_bundle;
    NSURL *_personalizedOutputURL;
}

@property BOOL useDummyDeviceIdentity; // @synthesize useDummyDeviceIdentity=_useDummyDeviceIdentity;
@property BOOL skipPersonalizationForTesting; // @synthesize skipPersonalizationForTesting=_skipPersonalizationForTesting;
@property(retain) NSURL *personalizedOutputURL; // @synthesize personalizedOutputURL=_personalizedOutputURL;
@property(retain) OSPSecureBootBundle *bundle; // @synthesize bundle=_bundle;
@property(retain) OSPDevice *device; // @synthesize device=_device;
@property BOOL useRunningDeviceIdentity; // @synthesize useRunningDeviceIdentity=_useRunningDeviceIdentity;
@property BOOL useTDMDeviceIdentity; // @synthesize useTDMDeviceIdentity=_useTDMDeviceIdentity;
@property BOOL globalSignature; // @synthesize globalSignature=_globalSignature;
@property BOOL userAuth; // @synthesize userAuth=_userAuth;
@property(retain) NSString *variant; // @synthesize variant=_variant;
@property(retain) NSURL *signingServerURL; // @synthesize signingServerURL=_signingServerURL;
@property(retain) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(retain) NSArray *packageSpecifiers; // @synthesize packageSpecifiers=_packageSpecifiers;
@property(retain) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(retain) NSURL *volumeURL; // @synthesize volumeURL=_volumeURL;
- (void).cxx_destruct;
- (void)_printUsageForExecutableNamed:(id)arg1;
- (void)_setPropertiesFromOptions:(id)arg1;
- (BOOL)_parsePRDocument:(id)arg1;
- (BOOL)_parseArugments:(const char **)arg1 length:(int)arg2;
- (id)initWithArgs:(const char **)arg1 length:(int)arg2;
- (id)initWithOptions:(id)arg1;

@end

