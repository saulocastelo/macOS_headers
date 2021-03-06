//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PUDevice;

__attribute__((visibility("hidden")))
@interface SysInfo : NSObject
{
    PUDevice *_device;
    NSMutableDictionary *_sysInfo;
}

- (id)valueForKey:(id)arg1;
- (id)userVisibleFirmwareVersion;
- (unsigned int)firmwareVersion;
- (int)updaterFamilyID;
- (int)podFamilyID;
- (id)serialNumber;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)parseSysInfoData:(id)arg1;
- (void)readSysInfoFile;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

@end

