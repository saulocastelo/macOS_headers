//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXViewController.h>

#import "PHPhotoLibraryChangeObserver-Protocol.h"

@class NSButton, NSImageView, NSString, PHPerson;
@protocol IPXEditorialPeopleTitleViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface IPXEditorialPeopleTitleViewController : UXViewController <PHPhotoLibraryChangeObserver>
{
    id <IPXEditorialPeopleTitleViewControllerDelegate> _delegate;
    PHPerson *_person;
    NSImageView *_thumbnail;
    NSButton *_nameButton;
}

@property(retain, nonatomic) NSButton *nameButton; // @synthesize nameButton=_nameButton;
@property(retain, nonatomic) NSImageView *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(nonatomic) __weak id <IPXEditorialPeopleTitleViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)arg1;
- (void)_bootstrapDidFinish:(id)arg1;
- (void)nameClicked:(id)arg1;
- (void)_updateTextFieldWithString:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPerson:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

