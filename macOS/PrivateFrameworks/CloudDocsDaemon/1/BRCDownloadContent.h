//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCDownload.h>

@class BRCProgress, BRCServerZone, NSIndexSet;

__attribute__((visibility("hidden")))
@interface BRCDownloadContent : BRCDownload
{
    unsigned long long _liveFileID;
    unsigned int _liveDocumentID;
    BOOL _liveItemIsPackage;
    BRCServerZone *_zone;
    BOOL _isFinderBookmark;
    BOOL _requiresTwoPhase;
    NSIndexSet *_desiredIndices;
}

@property(readonly, nonatomic) unsigned long long liveFileID; // @synthesize liveFileID=_liveFileID;
@property(readonly, nonatomic) NSIndexSet *desiredIndices; // @synthesize desiredIndices=_desiredIndices;
@property(readonly, nonatomic) unsigned int liveDocumentID; // @synthesize liveDocumentID=_liveDocumentID;
@property(readonly, nonatomic) BOOL liveItemIsPackage; // @synthesize liveItemIsPackage=_liveItemIsPackage;
@property(readonly, nonatomic) BOOL requiresTwoPhase; // @synthesize requiresTwoPhase=_requiresTwoPhase;
- (void).cxx_destruct;
- (BOOL)_stageWithSession:(id)arg1 error:(id *)arg2;
- (BOOL)_stageWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 xattrsPackage:(id)arg4 error:(id *)arg5;
- (BOOL)_prepareSecondStageWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 error:(id *)arg4;
- (id)description;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2;
- (int)kind;
@property(retain, nonatomic) BRCProgress *progress; // @dynamic progress;

@end

