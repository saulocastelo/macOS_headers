//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString;

@interface UICollectionViewPlaceholder : NSObject
{
    NSIndexPath *_insertionIndexPath;
    NSString *_cellReuseIdentifier;
    CDUnknownBlockType _cellUpdateHandler;
}

@property(copy, nonatomic) CDUnknownBlockType cellUpdateHandler; // @synthesize cellUpdateHandler=_cellUpdateHandler;
@property(copy, nonatomic) NSString *cellReuseIdentifier; // @synthesize cellReuseIdentifier=_cellReuseIdentifier;
@property(retain, nonatomic) NSIndexPath *insertionIndexPath; // @synthesize insertionIndexPath=_insertionIndexPath;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInsertionIndexPath:(id)arg1 reuseIdentifier:(id)arg2;

@end

