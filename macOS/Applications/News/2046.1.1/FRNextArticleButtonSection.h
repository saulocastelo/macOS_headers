//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface FRNextArticleButtonSection : NSObject
{
    NSString *_sectionName;
    UIColor *_sectionColor;
}

+ (id)moreNewsSection;
+ (id)discoverMoreSection;
+ (id)nextSection;
@property(retain, nonatomic) UIColor *sectionColor; // @synthesize sectionColor=_sectionColor;
@property(retain, nonatomic) NSString *sectionName; // @synthesize sectionName=_sectionName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initForMoreNewsSection;
- (id)initForDiscoverMoreSection;
- (id)initForNextSection;
- (id)init;

@end

