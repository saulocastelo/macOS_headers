//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FREditorialItemDownloader-Protocol.h"

@class FCTagController;
@protocol FREditorialItemEntryManager;

@interface FRTagEditorialItemDownloader : NSObject <FREditorialItemDownloader>
{
    FCTagController *_tagController;
    id <FREditorialItemEntryManager> _editorialItemEntryManager;
}

@property(readonly, nonatomic) id <FREditorialItemEntryManager> editorialItemEntryManager; // @synthesize editorialItemEntryManager=_editorialItemEntryManager;
@property(readonly, nonatomic) FCTagController *tagController; // @synthesize tagController=_tagController;
- (void).cxx_destruct;
- (void)downloadEditorialItemWithIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithTagController:(id)arg1 editorialItemEntryManager:(id)arg2;

@end

