//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface UserStyleSheetGenerator : NSObject
{
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)archiveStyleSheet;
- (id)userStyleSheetStringWithTopMargin:(double)arg1 bottomMargin:(double)arg2;
- (id)userStyleSheetWithTopMargin:(double)arg1 bottomMargin:(double)arg2;
@property(readonly, nonatomic) NSURL *userStyleSheetURLForSingleNoteWindow;
@property(readonly, nonatomic) NSURL *userStyleSheetURLForMainWindow;
@property(readonly, nonatomic) NSString *userStyleSheetStringForMainWindow;
- (void)dealloc;
- (id)init;

@end

