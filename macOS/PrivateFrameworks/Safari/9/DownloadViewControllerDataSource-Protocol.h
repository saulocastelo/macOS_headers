//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DownloadProgressEntry, DownloadViewController, NSArray, NSString;

@protocol DownloadViewControllerDataSource <NSObject>
- (unsigned long long)downloadViewController:(DownloadViewController *)arg1 indexForEntry:(DownloadProgressEntry *)arg2;
- (NSArray *)downloadViewController:(DownloadViewController *)arg1 validEntriesFromEntries:(NSArray *)arg2 withBooleanKey:(NSString *)arg3;
- (NSArray *)downloadViewControllerGetEntries:(DownloadViewController *)arg1;
@end

