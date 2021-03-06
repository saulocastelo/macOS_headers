//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CallHistory/NSObject-Protocol.h>

@class NSString;

@protocol CHPhoneBookManagerProtocol <NSObject>
- (void)releaseCachedRecord;
- (BOOL)isABContactASuggestion;
- (void)setABRecordMultiValueId:(NSString *)arg1;
- (void)setABRecordId:(NSString *)arg1;
- (void)setABRecordRef:(const void *)arg1;
- (const void *)getABRecordRef;
- (NSString *)getLocalizedCallerIdLabelForRecordId:(NSString *)arg1;
- (NSString *)getPersonsNameForRecordId:(NSString *)arg1;
- (NSString *)getCallerIdPropertyMultiValueId:(NSString *)arg1 andISOCountryCode:(NSString *)arg2 isEmail:(BOOL)arg3;
- (NSString *)getRecordId:(NSString *)arg1 andISOCountryCode:(NSString *)arg2 isEmail:(BOOL)arg3;
@end

