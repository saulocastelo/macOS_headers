//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

__attribute__((visibility("hidden")))
@interface PSProjectIconItem : NSObject
{
    NSString *_imageUID;
    NSImage *_imageRepresentation;
}

@property(retain, nonatomic) id imageRepresentation; // @synthesize imageRepresentation=_imageRepresentation;
@property(copy, nonatomic) NSString *imageUID; // @synthesize imageUID=_imageUID;
- (id)imageRepresentationType;
- (void)dealloc;
- (id)initWithImage:(id)arg1 andImageUID:(id)arg2;

@end

