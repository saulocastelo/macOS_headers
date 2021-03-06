//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, NSURL, VCPFingerprint;

@interface VCPAsset : NSObject
{
}

+ (void)unimplementedExceptionForMethodName:(id)arg1;
@property(readonly, nonatomic) NSURL *mainFileURL;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) BOOL isMovie;
@property(readonly, nonatomic) BOOL isImage;
@property(readonly, nonatomic) VCPFingerprint *fingerprint;
@property(readonly, nonatomic) NSDate *modificationDate;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
- (struct __CVBuffer *)imageWithPreferredDimension:(unsigned long long)arg1;
@property(readonly, nonatomic) NSDictionary *exif;
@property(readonly, nonatomic) BOOL isSDOF;
@property(readonly, nonatomic) BOOL isHDR;
@property(readonly, nonatomic) BOOL isScreenshot;
@property(readonly, nonatomic) BOOL isLivePhoto;
@property(readonly, nonatomic) BOOL isPano;
@property(readonly, nonatomic) float photoOffsetSeconds;
@property(readonly, nonatomic) float exposureTimeSeconds;
@property(readonly, nonatomic) BOOL hadFlash;
- (id)originalMovie;
- (id)streamedMovie;
- (id)movie;
@property(readonly, nonatomic) float timelapseRate;
@property(readonly, nonatomic) float slowmoRate;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) BOOL isTimelapse;
@property(readonly, nonatomic) BOOL isSlowmo;

@end

