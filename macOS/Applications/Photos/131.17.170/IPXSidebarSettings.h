//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface IPXSidebarSettings : PXSettings
{
    double _flashInterval;
    double _flashCount;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) double flashCount; // @synthesize flashCount=_flashCount;
@property(nonatomic) double flashInterval; // @synthesize flashInterval=_flashInterval;
- (void)setDefaultValues;
- (id)parentSettings;

@end

