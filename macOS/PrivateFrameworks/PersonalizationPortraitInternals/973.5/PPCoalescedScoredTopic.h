//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PPScoredItem;

@interface PPCoalescedScoredTopic : NSObject
{
    unsigned short _occurrencesInSource;
    struct PPScoredItem *_scoredTopic;
}

@property(readonly, nonatomic) unsigned short occurrencesInSource; // @synthesize occurrencesInSource=_occurrencesInSource;
@property(readonly, nonatomic) PPScoredItem *scoredTopic; // @synthesize scoredTopic=_scoredTopic;
- (void).cxx_destruct;
- (id)init;
- (id)initWithScoredTopic:(struct PPScoredItem *)arg1 occurrencesInSource:(unsigned short)arg2;

@end

