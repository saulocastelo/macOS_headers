//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@class NSData;

@interface DMFSetWallpaperRequest : CATTaskRequest
{
    NSData *_imageData;
    long long _location;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long location; // @synthesize location=_location;
@property(copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

