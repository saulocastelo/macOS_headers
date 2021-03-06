//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDMediaCompatibilityConverterWithPreset-Protocol.h"

@class AVAssetExportSession, NSError, NSMutableArray, NSString, QTMovieModernizer, TSDMovieCompatibilityChecker, TSPData, TSPDataBookmarkContext, TSUBasicProgress, TSUProgress, TSUProgressGroup;
@protocol OS_dispatch_source, OS_xpc_object;

@interface TSDMovieCompatibilityConverter : NSObject <TSDMediaCompatibilityConverterWithPreset>
{
    TSPData *mMovieData;
    TSPData *mAuxiliaryMovieData;
    NSString *mAuxiliaryMovieDataFilename;
    TSPDataBookmarkContext *mMovieDataBookmarkContext;
    long long mInitialCompatibilityLevel;
    long long mDesiredCompatibilityLevel;
    QTMovieModernizer *mModernizer;
    NSObject<OS_xpc_object> *mConnection;
    NSObject<OS_xpc_object> *mProgressConnection;
    AVAssetExportSession *mExportSession;
    TSDMovieCompatibilityChecker *mCompatibilityChecker;
    TSUBasicProgress *mMovieDataBookmarkPreloadProgress;
    TSUBasicProgress *mAuxiliaryMovieDataBookmarkPreloadProgress;
    TSUBasicProgress *mMakePlayableProgress;
    TSUBasicProgress *mAllDevicesProgress;
    NSObject<OS_dispatch_source> *mAllDevicesProgressTimer;
    TSUProgressGroup *mProgress;
    NSMutableArray *mBookmarkPreloadProgressObjects;
    TSPData *mConvertedMovieData;
    NSError *mError;
    long long mPlayableOnAllDevicesPreset;
    // Error parsing type: Ai, name: mIsCancelled
}

+ (id)p_uniquePathForConvertingData:(id)arg1 toType:(id)arg2;
+ (id)progressStringForUpgradingMoviesWithPreset:(long long)arg1 dataCount:(unsigned long long)arg2 filename:(id)arg3;
+ (id)descriptionStringForPreset:(long long)arg1;
+ (id)exportSessionPresetNameForConverterPreset:(long long)arg1;
+ (void)initialize;
@property(nonatomic) long long playableOnAllDevicesPreset; // @synthesize playableOnAllDevicesPreset=mPlayableOnAllDevicesPreset;
@property(readonly, nonatomic) NSError *error; // @synthesize error=mError;
@property(readonly, nonatomic) TSPData *convertedMediaData; // @synthesize convertedMediaData=mConvertedMovieData;
@property(readonly, nonatomic) TSUProgress *progress; // @synthesize progress=mProgress;
- (void)p_checkInitialCompatibilityLevelWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)p_preloadBookmarkDataForMovieData:(id)arg1 filename:(id)arg2 bookmarkContext:(id)arg3 reportingToProgress:(id)arg4;
- (void)cancel;
- (void)p_finishConvertingWithConvertedMovieData:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)p_errorFromMessageReply:(id)arg1;
- (id)p_convertedMovieDataFromMessageReply:(id)arg1 error:(id *)arg2;
- (void)p_handleProgressEvent:(id)arg1;
- (id)p_newCancelMessage;
- (id)p_newBeginConvertingMessageForData:(id)arg1 bookmarkContext:(id)arg2 returningError:(id *)arg3;
- (void)p_convertMovieData:(id)arg1 bookmarkContext:(id)arg2 usingXPCServiceWithCompletionHandler:(CDUnknownBlockType)arg3;
- (id)p_exportSessionForAsset:(id)arg1 presetName:(id)arg2 data:(id)arg3 outputURL:(id)arg4 preserveFrameDuration:(BOOL)arg5;
- (void)p_convertMovieData:(id)arg1 bookmarkContext:(id)arg2 withPresetName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)p_convertMovieData:(id)arg1 bookmarkContext:(id)arg2 fromPlayableByAVFoundationToAllDevicesWithCompletionHandler:(CDUnknownBlockType)arg3;
- (void)p_convertMovieData:(id)arg1 bookmarkContext:(id)arg2 fromPlayableByAVFoundationToThisDeviceWithCompletionHandler:(CDUnknownBlockType)arg3;
- (void)p_convertMovieData:(id)arg1 bookmarkContext:(id)arg2 fromInspectableToPlayableOnThisDeviceWithCompletionHandler:(CDUnknownBlockType)arg3;
- (void)convertMediaWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long mediaType;
- (void)dealloc;
- (id)init;
- (id)initWithMovieData:(id)arg1 desiredCompatibilityLevel:(long long)arg2 initialCompatibilityLevel:(long long)arg3;
- (id)initWithMovieData:(id)arg1 auxiliaryMovieData:(id)arg2 auxiliaryMovieDataFilename:(id)arg3 desiredCompatibilityLevel:(long long)arg4 initialCompatibilityLevel:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

