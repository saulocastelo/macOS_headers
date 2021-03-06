//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<EXSNotificationControllerDelegate>;

@interface EXSNotificationController : NSObject
{
    BOOL _hasValidNotificationRegistrationToken;
    int _notificationRegistrationToken;
    NSObject<EXSNotificationControllerDelegate> *_delegate;
}

+ (id)log;
@property(nonatomic) BOOL hasValidNotificationRegistrationToken; // @synthesize hasValidNotificationRegistrationToken=_hasValidNotificationRegistrationToken;
@property(nonatomic) int notificationRegistrationToken; // @synthesize notificationRegistrationToken=_notificationRegistrationToken;
@property(nonatomic) __weak NSObject<EXSNotificationControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopListeningForNotifications;
- (void)startListeningForNotifications;
- (id)init;

@end

