//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VideoProcessing/VCPAsset.h>

@class AVURLAsset, NSDictionary, NSURL;

@interface VCPURLAsset : VCPAsset
{
    NSURL *_imageURL;
    AVURLAsset *_movie;
    long long _mediaType;
    unsigned long long _mediaSubtypes;
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    BOOL _onceExif;
    NSDictionary *_cachedExif;
}

+ (id)imageAssetWithURL:(id)arg1;
+ (id)livePhotoAssetWithImageURL:(id)arg1 andMovieURL:(id)arg2;
+ (id)movieAssetWithURL:(id)arg1;
- (void).cxx_destruct;
- (id)mainFileURL;
- (id)modificationDate;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (struct __CVBuffer *)imageWithPreferredDimension:(unsigned long long)arg1;
- (id)exif;
- (id)initWithImageURL:(id)arg1;
- (float)photoOffsetSeconds;
- (id)initWithImageURL:(id)arg1 andMovieURL:(id)arg2;
- (id)originalMovie;
- (id)movie;
- (float)slowmoRate;
- (double)duration;
- (id)initWithMovieURL:(id)arg1;

@end

