//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSProgress, NSString;

@protocol AMPDeviceDiscoveryProtocol
- (void)cancelOperationForDeviceWithIdentifier:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (NSProgress *)registerForOperationProgressForDeviceWithIdentifier:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)ejectDeviceWithIdentifier:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)pairDeviceWithIdentifier:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)startListeningForDevicesWithReply:(void (^)(unsigned int, int))arg1;
@end

