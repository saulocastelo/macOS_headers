//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContactPhotoView, CNContactViewCache, CNMutableContact, UIViewController;

@protocol CNContactPhotoViewDelegate <NSObject>
- (CNContactViewCache *)contactViewCache;
- (UIViewController *)viewControllerForPhotoView:(CNContactPhotoView *)arg1;
- (void)photoView:(CNContactPhotoView *)arg1 didSaveImageDropToContact:(CNMutableContact *)arg2;
- (void)photoViewDidUpdate:(CNContactPhotoView *)arg1;
@end

