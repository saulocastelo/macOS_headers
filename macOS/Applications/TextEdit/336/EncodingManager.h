//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMatrix;

@interface EncodingManager : NSObject
{
    NSMatrix *encodingMatrix;
    NSArray *encodings;
}

+ (id)allAvailableStringEncodings;
+ (id)sharedInstance;
- (void)revertToDefault:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)clearAll:(id)arg1;
- (void)encodingListChanged:(id)arg1;
- (void)showPanel:(id)arg1;
- (BOOL)worksWhenModal;
- (void)noteEncodingListChange:(BOOL)arg1 updateList:(BOOL)arg2 postNotification:(BOOL)arg3;
- (id)enabledEncodings;
- (void)setupPopUpCell:(id)arg1 selectedEncoding:(unsigned long long)arg2 withDefaultEntry:(BOOL)arg3;
- (void)setupEncodingsList;
- (void)dealloc;
- (id)init;

@end

