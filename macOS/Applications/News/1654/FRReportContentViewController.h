//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class FRArticleViewHeadlineContext, FRFeedHeadlineViewRendererProvider, FRReportConcernObject, NFLFeedSettings, NFLHeadlineCollectionViewLayoutAttributes, NSArray, NSDictionary;
@protocol FRFeldsparContext, FRReportContentViewControllerDelegate;

@interface FRReportContentViewController : UITableViewController
{
    FRReportConcernObject *_contentReport;
    id <FRFeldsparContext> _feldsparContext;
    id <FRReportContentViewControllerDelegate> _reportSubmissionDelegate;
    NSArray *_reportReasons;
    NSDictionary *_reportReasonsDictionary;
    NSDictionary *_reportReasonsCommentsDictionary;
    FRReportConcernObject *_reportObject;
    NFLHeadlineCollectionViewLayoutAttributes *_noImageLayoutAttributes;
    NFLFeedSettings *_feedSettings;
    FRArticleViewHeadlineContext *_headlineContext;
    FRFeedHeadlineViewRendererProvider *_renderProvider;
}

+ (id)storyboardIdentifier;
+ (id)reportContentNavigationControllerWithReportConcernObject:(id)arg1 feldsparContext:(id)arg2 headlineContext:(id)arg3 presentingViewController:(id)arg4 delegate:(id)arg5;
@property(retain, nonatomic) FRFeedHeadlineViewRendererProvider *renderProvider; // @synthesize renderProvider=_renderProvider;
@property(retain, nonatomic) FRArticleViewHeadlineContext *headlineContext; // @synthesize headlineContext=_headlineContext;
@property(retain, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(retain, nonatomic) NFLHeadlineCollectionViewLayoutAttributes *noImageLayoutAttributes; // @synthesize noImageLayoutAttributes=_noImageLayoutAttributes;
@property(retain, nonatomic) FRReportConcernObject *reportObject; // @synthesize reportObject=_reportObject;
@property(retain, nonatomic) NSDictionary *reportReasonsCommentsDictionary; // @synthesize reportReasonsCommentsDictionary=_reportReasonsCommentsDictionary;
@property(retain, nonatomic) NSDictionary *reportReasonsDictionary; // @synthesize reportReasonsDictionary=_reportReasonsDictionary;
@property(retain, nonatomic) NSArray *reportReasons; // @synthesize reportReasons=_reportReasons;
@property(nonatomic) __weak id <FRReportContentViewControllerDelegate> reportSubmissionDelegate; // @synthesize reportSubmissionDelegate=_reportSubmissionDelegate;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(retain, nonatomic) FRReportConcernObject *contentReport; // @synthesize contentReport=_contentReport;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)cancel;
- (void)setupLayoutAttributes;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLoad;
- (id)targetViewControllerForAction:(SEL)arg1 sender:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

