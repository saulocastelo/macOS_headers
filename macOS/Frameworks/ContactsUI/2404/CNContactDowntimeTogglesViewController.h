//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@protocol CNContactDowntimeTogglesViewControllerDelegate;

@interface CNContactDowntimeTogglesViewController : NSViewController
{
    id <CNContactDowntimeTogglesViewControllerDelegate> _delegate;
}

+ (id)allowContactEditingButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)removeFromDowntimeButtonWithTarget:(id)arg1 action:(SEL)arg2;
@property(nonatomic) __weak id <CNContactDowntimeTogglesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)allowContactEditingButtonPressed:(id)arg1;
- (void)removeFromDowntimeButtonPressed:(id)arg1;
- (void)loadView;

@end

