//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

@class UISearchController;

@interface UISearchContainerViewController : UIViewController
{
    UISearchController *_searchController;
}

@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)_transitionsChildViewControllers;
- (void)_prepareForContainerTransition:(id)arg1;
- (void)_updateSearchControllerIfNecessary;
- (void)_presentSearchControllerIfNecessary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchController:(id)arg1;

@end

