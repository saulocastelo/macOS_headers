//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitServices/NSObject-Protocol.h>

@class NSArray, NSNumber;
@protocol __NSString__;

@protocol UISApplicationSupportXPCServerInterface <NSObject>
- (void)destroyScenesPersistentIdentifiers:(NSArray<__NSString__> *)arg1 animationType:(NSNumber *)arg2 destroySessions:(NSNumber *)arg3 completion:(void (^)(NSNumber *, NSError *))arg4;
- (oneway void)requestPasscodeUnlockUIWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)initializeClientWithCompletion:(void (^)(UISApplicationInitializationContext *, NSError *))arg1;
@end

