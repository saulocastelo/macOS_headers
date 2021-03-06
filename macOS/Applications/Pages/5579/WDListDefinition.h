//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString, WDDocument;

@interface WDListDefinition : NSObject <NSCopying>
{
    WDDocument *mDocument;
    int mListDefinitionId;
    NSString *mStyleId;
    NSString *mStyleRefId;
    int mType;
    NSMutableArray *mLevels;
}

@property(copy, nonatomic) NSString *styleRefId; // @synthesize styleRefId=mStyleRefId;
@property(readonly, nonatomic) NSString *styleId; // @synthesize styleId=mStyleId;
@property(readonly, nonatomic) int listDefinitionId; // @synthesize listDefinitionId=mListDefinitionId;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDocument:(id)arg1 listDefinitionId:(int)arg2 styleId:(id)arg3;
- (void)removeLastLevel;
- (id)addLevel;
- (id)levelAt:(int)arg1;
- (int)levelCount;
- (void)setType:(int)arg1;
- (int)type;

@end

