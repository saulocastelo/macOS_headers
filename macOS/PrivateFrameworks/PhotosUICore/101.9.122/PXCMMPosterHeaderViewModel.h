//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class NSString;
@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXCMMPosterHeaderViewModel : PXObservable
{
    BOOL _showStatusCheckmark;
    BOOL _highlighted;
    NSString *_title;
    NSString *_subtitle;
    NSString *_statusString;
    id <PXDisplayAsset> _asset;
    id <PXUIImageProvider> _mediaProvider;
}

@property(readonly, nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, nonatomic) id <PXUIImageProvider> mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) BOOL showStatusCheckmark; // @synthesize showStatusCheckmark=_showStatusCheckmark;
@property(readonly, copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setShowStatusCheckmark:(BOOL)arg1;
- (void)setStatusString:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)init;

@end

