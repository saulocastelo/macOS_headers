//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, SBObject, _AMSystemEventsFile, _AMSystemEventsPrintSettings;

@protocol _AMSystemEventsGenericMethods
- (void)moveTo:(SBObject *)arg1;
- (void)duplicateTo:(SBObject *)arg1 withProperties:(NSDictionary *)arg2;
- (void)delete;
- (void)printWithProperties:(_AMSystemEventsPrintSettings *)arg1 printDialog:(BOOL)arg2;
- (void)saveIn:(_AMSystemEventsFile *)arg1 as:(int)arg2;
- (void)closeSaving:(int)arg1 savingIn:(_AMSystemEventsFile *)arg2;
@end

