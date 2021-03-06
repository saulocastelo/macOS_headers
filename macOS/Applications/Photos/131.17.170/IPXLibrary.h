//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, PHPhotoLibrary;

__attribute__((visibility("hidden")))
@interface IPXLibrary : NSObject
{
    PHPhotoLibrary *_photoLibrary;
    BOOL _isSystemPhotoLibrary;
    BOOL _isOpen;
    NSURL *_URL;
}

+ (id)libraryImportFileTypes;
+ (id)libraryFileTypes;
+ (BOOL)isValidLibraryAtURL:(id)arg1 inPicturesFolder:(BOOL)arg2;
+ (BOOL)isValidLibraryAtURL:(id)arg1;
+ (id)defaultLibraryLocation;
+ (id)defaultiPhotoLibraryName;
+ (id)defaultLibraryName;
+ (BOOL)supportsSecureCoding;
@property(readonly) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly) BOOL isOpen; // @synthesize isOpen=_isOpen;
@property(readonly) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
@property BOOL isSystemPhotoLibrary;
- (BOOL)requestMakeThisSystemPhotoLibrary:(CDUnknownBlockType)arg1;
@property(readonly) BOOL isCloudPhotoSystemLibrary;
- (id)initWithURL:(id)arg1 photoLibrary:(id)arg2;

@end

