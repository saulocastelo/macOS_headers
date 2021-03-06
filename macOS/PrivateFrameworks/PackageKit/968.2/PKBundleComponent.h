//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PackageKit/PKComponent.h>

@class NSString, PKBundleComponentVersion;

@interface PKBundleComponent : PKComponent
{
    NSString *_storageType;
    NSString *_bundlePath;
    BOOL _onDisk;
    PKBundleComponentVersion *_bundleVersion;
    int _overwriteAction;
}

+ (void)enumerateBundleComponentsUnderRoot:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (BOOL)_enumerateBundleComponentsUnderURL:(id)arg1 relativeToRoot:(id)arg2 parentComponent:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
@property int overwriteAction; // @synthesize overwriteAction=_overwriteAction;
@property(readonly) NSString *bundleName;
@property(readonly) NSString *bundlePath;
@property(readonly) NSString *storageType;
- (id)subpaths;
- (id)prefixPath;
- (long long)versionCompare:(id)arg1;
@property(readonly) PKBundleComponentVersion *bundleVersion;
- (void)dealloc;
- (id)initWithBundleAtPath:(id)arg1 relativeToDestination:(id)arg2;
- (id)initWithIdentifier:(id)arg1 versionAttributes:(id)arg2 bundlePath:(id)arg3 storageType:(id)arg4;
- (id)initWithIdentifier:(id)arg1 versionAttributes:(id)arg2 bundlePath:(id)arg3;
- (id)_bundle;

@end

