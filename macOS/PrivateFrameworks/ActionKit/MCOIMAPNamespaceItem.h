//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCopying-Protocol.h>

@class NSString;

@interface MCOIMAPNamespaceItem : NSObject <NSCopying>
{
    struct IMAPNamespaceItem *_nativeItem;
}

+ (id)mco_objectWithMCObject:(struct Object *)arg1;
- (BOOL)containsFolder:(id)arg1;
- (id)componentsForPath:(id)arg1;
- (id)pathForComponents:(id)arg1;
@property(nonatomic) BOOL delimiter;
@property(copy, nonatomic) NSString *prefix;
- (id)description;
- (struct Object *)mco_mcObject;
- (void)dealloc;
- (id)initWithMCNamespaceItem:(struct IMAPNamespaceItem *)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

