//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSMenuItem, NSTableView, NSTextField, NSUndoManager;

@interface _TtC9Reminders29TTRMListSharingViewController : NSViewController
{
    // Error parsing type: , name: tableView
    // Error parsing type: , name: subheaderTextField
    // Error parsing type: , name: stopSharingButton
    // Error parsing type: , name: stopSharingMenuItem
    // Error parsing type: , name: presenter
    // Error parsing type: , name: style
    // Error parsing type: , name: localUndoManager
    // Error parsing type: , name: allowsEditing
    // Error parsing type: , name: suggestionWindowController
    // Error parsing type: , name: autocompleteResultFormatter
    // Error parsing type: , name: autocompleteResultPartitioner
    // Error parsing type: , name: participantCellIdentifier
    // Error parsing type: , name: addParticipantCellIdentifier
    // Error parsing type: , name: addParticipantCell
    // Error parsing type: , name: userTypedText
    // Error parsing type: , name: autocompleteFetch
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)stopSharingMenuItemPressed:(id)arg1;
- (void)stopSharingButtonPressed:(id)arg1;
- (void)doneButtonPressed:(id)arg1;
@property(nonatomic) __weak NSMenuItem *stopSharingMenuItem; // @synthesize stopSharingMenuItem;
@property(nonatomic) __weak NSButton *stopSharingButton; // @synthesize stopSharingButton;
@property(nonatomic) __weak NSTextField *subheaderTextField; // @synthesize subheaderTextField;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView;
- (void)viewWillAppear;
- (void)viewDidLoad;
@property(nonatomic, readonly) NSUndoManager *undoManager;
- (id)initWithCoder:(id)arg1;

@end

