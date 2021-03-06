//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSParsecSearchGenericResult-Protocol.h>
#import <SafariShared/WBSParsecSearchMapsResult-Protocol.h>
#import <SafariShared/WBSParsecSearchResult-Protocol.h>
#import <SafariShared/WBSParsecSearchSimpleResult-Protocol.h>
#import <SafariShared/WBSParsecSearchSportsResult-Protocol.h>

@class MKMapItem, NSArray, NSNumber, NSString, NSURL, SFSearchResult, WBSParsecActionButton, WBSParsecAuxiliaryInfo, WBSParsecFlightFetcher, WBSParsecImageRepresentation, WBSParsecSearchMapsResultFeedbackSender, WBSParsecSearchSportsAttributionExtraCompletionItem, WBSParsecSportsScoreSummary, WBSQuerySuggestion;
@protocol WBSParsecSearchSession;

@interface WBSSFSearchResultAdapter : NSObject <WBSParsecSearchResult, WBSParsecSearchGenericResult, WBSParsecSearchMapsResult, WBSParsecSearchSimpleResult, WBSParsecSearchSportsResult>
{
    WBSParsecFlightFetcher *_flightFetcher;
    WBSParsecSportsScoreSummary *_sportsScoreSummary;
    id <WBSParsecSearchSession> _parsecSearchSession;
    WBSParsecSearchMapsResultFeedbackSender *_mapsFeedbackSender;
    SFSearchResult *_searchResult;
}

@property(readonly, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(retain, nonatomic) WBSParsecSearchMapsResultFeedbackSender *mapsFeedbackSender; // @synthesize mapsFeedbackSender=_mapsFeedbackSender;
@property(retain, nonatomic) id <WBSParsecSearchSession> parsecSearchSession; // @synthesize parsecSearchSession=_parsecSearchSession;
- (void).cxx_destruct;
@property(readonly, nonatomic) WBSParsecSearchSportsAttributionExtraCompletionItem *extraCompletionItem;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSArray *individualScores;
@property(readonly, copy, nonatomic) NSArray *images;
@property(readonly, nonatomic) unsigned long long descriptionAlignment;
@property(readonly, nonatomic) BOOL hasSingleLineDescriptionAndTitle;
- (id)titleGlyphWithSession:(id)arg1;
@property(readonly, nonatomic) BOOL descriptionTextCanWrap;
@property(readonly, nonatomic) NSNumber *descriptionMaximumNumberOfLines;
@property(readonly, nonatomic) NSNumber *titleMaximumNumberOfLines;
@property(readonly, nonatomic) NSString *descriptionLeadInText;
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
- (id)thumbnailWithSession:(id)arg1;
@property(readonly, nonatomic) WBSParsecImageRepresentation *thumbnail;
@property(readonly, nonatomic) WBSParsecAuxiliaryInfo *auxiliaryInfo;
@property(readonly, nonatomic) WBSParsecImageRepresentation *secondaryTitleGlyph;
@property(readonly, copy, nonatomic) NSString *secondaryTitle;
@property(readonly, copy, nonatomic) NSString *footnote;
@property(readonly, copy, nonatomic) NSArray *descriptionRichTexts;
@property(readonly, nonatomic) NSNumber *titleMaximumLines;
- (void)getFlight:(id *)arg1 selectedLegIndex:(unsigned long long *)arg2;
- (void)setSelectedLegIndex:(unsigned long long)arg1;
- (unsigned long long)selectedLegIndex;
- (id)sfFlight;
- (id)completionIconWithSession:(id)arg1;
- (id)iconWithSession:(id)arg1;
@property(readonly, nonatomic) WBSParsecImageRepresentation *completionIcon;
@property(readonly, nonatomic) WBSParsecImageRepresentation *icon;
@property(readonly, copy, nonatomic) NSString *sectionBundleIdentifier;
- (BOOL)canBecomeTopHitForQuery:(id)arg1;
@property(readonly, nonatomic) unsigned long long displayOptions;
@property(readonly, nonatomic) long long placementHint;
@property(readonly, copy, nonatomic) NSString *alternateSectionHeader;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) WBSParsecActionButton *actionButton;
@property(readonly, copy, nonatomic) NSString *referrerForLoadingResult;
@property(readonly, copy, nonatomic) NSString *mediaKind;
@property(readonly, nonatomic) NSURL *appPunchoutURL;
@property(readonly, nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property(readonly, copy, nonatomic) NSString *query;
@property(readonly, nonatomic) NSString *completion;
@property(readonly, nonatomic) NSString *sectionHeader;
@property(readonly, nonatomic) NSString *urlString;
@property(readonly, nonatomic) NSString *feedbackIdentifier;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) NSString *title;
- (id)_sportsScoreSummary;
- (id)initWithSFSearchResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property(readonly) Class superclass;

@end

