//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXGridKitSettings : PXSettings
{
    BOOL _pauseWhenIdle;
    BOOL _enableMetalRenderer;
    BOOL _enableViewRenderer;
    BOOL _enableAccessibilityRenderer;
    BOOL _lowLatency;
    BOOL _enableRoundedCorners;
    BOOL _enableColorMatching;
    BOOL _debugExtendedColorRange;
    BOOL _debugOpaque;
    BOOL _colorCopiedImages;
    BOOL _requestThumbnailsOnly;
    BOOL _requestMasterThumbsOnly;
    BOOL _allowBlockingDuringScrolling;
    BOOL _allowBlockingDueToFences;
    BOOL _wantsOrthogonalProjection;
    BOOL _wantsStatsDebugHUD;
    BOOL _wantsRectDiagnosticsDebugHUD;
    BOOL _enableAnchoringRectDiagnostics;
    BOOL _enableAssetsRectDiagnostics;
    BOOL _enableRectDiagnosticsForUndefinedSprites;
    BOOL _enableRectDiagnosticsForNamedImageSprites;
    BOOL _enableRectDiagnosticsForDisplayAssetSprites;
    BOOL _enableRectDiagnosticsForTextSprites;
    BOOL _enableRectDiagnosticsForTitleSubtitleSprites;
    BOOL _enableRectDiagnosticsForSolidColorSprites;
    BOOL _enableRectDiagnosticsForGradientSprites;
    BOOL _enableRectDiagnosticsForShadowSprites;
    BOOL _enableRectDiagnosticsForDecorationSprites;
    BOOL _enableRectDiagnosticsForViewSprites;
    BOOL _wantsPerspectiveDebug;
    long long _sampleCount;
    long long _blockOnMissingThumbnailsAtSpeedRegime;
    long long _allowVideoRequestsAtOrBelowScrollRegime;
    double _slowAnimationsSpeed;
    double _maxCornerRadius;
    double _cameraZoomFactor;
    double _perspectiveAngle;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) double perspectiveAngle; // @synthesize perspectiveAngle=_perspectiveAngle;
@property(nonatomic) BOOL wantsPerspectiveDebug; // @synthesize wantsPerspectiveDebug=_wantsPerspectiveDebug;
@property(nonatomic) BOOL enableRectDiagnosticsForViewSprites; // @synthesize enableRectDiagnosticsForViewSprites=_enableRectDiagnosticsForViewSprites;
@property(nonatomic) BOOL enableRectDiagnosticsForDecorationSprites; // @synthesize enableRectDiagnosticsForDecorationSprites=_enableRectDiagnosticsForDecorationSprites;
@property(nonatomic) BOOL enableRectDiagnosticsForShadowSprites; // @synthesize enableRectDiagnosticsForShadowSprites=_enableRectDiagnosticsForShadowSprites;
@property(nonatomic) BOOL enableRectDiagnosticsForGradientSprites; // @synthesize enableRectDiagnosticsForGradientSprites=_enableRectDiagnosticsForGradientSprites;
@property(nonatomic) BOOL enableRectDiagnosticsForSolidColorSprites; // @synthesize enableRectDiagnosticsForSolidColorSprites=_enableRectDiagnosticsForSolidColorSprites;
@property(nonatomic) BOOL enableRectDiagnosticsForTitleSubtitleSprites; // @synthesize enableRectDiagnosticsForTitleSubtitleSprites=_enableRectDiagnosticsForTitleSubtitleSprites;
@property(nonatomic) BOOL enableRectDiagnosticsForTextSprites; // @synthesize enableRectDiagnosticsForTextSprites=_enableRectDiagnosticsForTextSprites;
@property(nonatomic) BOOL enableRectDiagnosticsForDisplayAssetSprites; // @synthesize enableRectDiagnosticsForDisplayAssetSprites=_enableRectDiagnosticsForDisplayAssetSprites;
@property(nonatomic) BOOL enableRectDiagnosticsForNamedImageSprites; // @synthesize enableRectDiagnosticsForNamedImageSprites=_enableRectDiagnosticsForNamedImageSprites;
@property(nonatomic) BOOL enableRectDiagnosticsForUndefinedSprites; // @synthesize enableRectDiagnosticsForUndefinedSprites=_enableRectDiagnosticsForUndefinedSprites;
@property(nonatomic) BOOL enableAssetsRectDiagnostics; // @synthesize enableAssetsRectDiagnostics=_enableAssetsRectDiagnostics;
@property(nonatomic) BOOL enableAnchoringRectDiagnostics; // @synthesize enableAnchoringRectDiagnostics=_enableAnchoringRectDiagnostics;
@property(nonatomic) BOOL wantsRectDiagnosticsDebugHUD; // @synthesize wantsRectDiagnosticsDebugHUD=_wantsRectDiagnosticsDebugHUD;
@property(nonatomic) BOOL wantsStatsDebugHUD; // @synthesize wantsStatsDebugHUD=_wantsStatsDebugHUD;
@property(nonatomic) BOOL wantsOrthogonalProjection; // @synthesize wantsOrthogonalProjection=_wantsOrthogonalProjection;
@property(nonatomic) double cameraZoomFactor; // @synthesize cameraZoomFactor=_cameraZoomFactor;
@property(nonatomic) double maxCornerRadius; // @synthesize maxCornerRadius=_maxCornerRadius;
@property(nonatomic) double slowAnimationsSpeed; // @synthesize slowAnimationsSpeed=_slowAnimationsSpeed;
@property(nonatomic) BOOL allowBlockingDueToFences; // @synthesize allowBlockingDueToFences=_allowBlockingDueToFences;
@property(nonatomic) long long allowVideoRequestsAtOrBelowScrollRegime; // @synthesize allowVideoRequestsAtOrBelowScrollRegime=_allowVideoRequestsAtOrBelowScrollRegime;
@property(nonatomic) long long blockOnMissingThumbnailsAtSpeedRegime; // @synthesize blockOnMissingThumbnailsAtSpeedRegime=_blockOnMissingThumbnailsAtSpeedRegime;
@property(nonatomic) BOOL allowBlockingDuringScrolling; // @synthesize allowBlockingDuringScrolling=_allowBlockingDuringScrolling;
@property(nonatomic) BOOL requestMasterThumbsOnly; // @synthesize requestMasterThumbsOnly=_requestMasterThumbsOnly;
@property(nonatomic) BOOL requestThumbnailsOnly; // @synthesize requestThumbnailsOnly=_requestThumbnailsOnly;
@property(nonatomic) BOOL colorCopiedImages; // @synthesize colorCopiedImages=_colorCopiedImages;
@property(nonatomic) BOOL debugOpaque; // @synthesize debugOpaque=_debugOpaque;
@property(nonatomic) BOOL debugExtendedColorRange; // @synthesize debugExtendedColorRange=_debugExtendedColorRange;
@property(nonatomic) long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) BOOL enableColorMatching; // @synthesize enableColorMatching=_enableColorMatching;
@property(nonatomic) BOOL enableRoundedCorners; // @synthesize enableRoundedCorners=_enableRoundedCorners;
@property(nonatomic) BOOL lowLatency; // @synthesize lowLatency=_lowLatency;
@property(nonatomic) BOOL enableAccessibilityRenderer; // @synthesize enableAccessibilityRenderer=_enableAccessibilityRenderer;
@property(nonatomic) BOOL enableViewRenderer; // @synthesize enableViewRenderer=_enableViewRenderer;
@property(nonatomic) BOOL enableMetalRenderer; // @synthesize enableMetalRenderer=_enableMetalRenderer;
@property(nonatomic) BOOL pauseWhenIdle; // @synthesize pauseWhenIdle=_pauseWhenIdle;
- (void)setDefaultValues;
- (BOOL)anySpritesRectDiagnosticsEnabled;
- (id)parentSettings;

@end

