//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSString, NSTextView, NSTimer, NSView, Pop, WebView;

__attribute__((visibility("hidden")))
@interface PopContainerViewController : NSViewController
{
    WebView *iWebView;
    id iDelegate;
    Pop *iPop;
    NSString *iOriginalString;
    NSString *iProperty;
    NSString *iModeIdentifier;
    BOOL iLoaded;
    struct _NSRange iContextRange;
    NSTextView *iEditor;
    NSTimer *iPopValueTimer;
    struct CGRect iPopoverOriginRect;
    NSView *iPopoverOriginView;
}

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
@property(copy) NSString *modeIdentifier; // @synthesize modeIdentifier=iModeIdentifier;
@property NSView *popoverOriginView; // @synthesize popoverOriginView=iPopoverOriginView;
@property struct CGRect popoverOriginRect; // @synthesize popoverOriginRect=iPopoverOriginRect;
@property(retain) NSTextView *editor; // @synthesize editor=iEditor;
@property struct _NSRange contextRange; // @synthesize contextRange=iContextRange;
@property(getter=isLoaded) BOOL loaded; // @synthesize loaded=iLoaded;
@property(copy) NSString *property; // @synthesize property=iProperty;
@property(copy) NSString *originalString; // @synthesize originalString=iOriginalString;
@property(retain, nonatomic) Pop *pop; // @synthesize pop=iPop;
@property(nonatomic) id delegate; // @synthesize delegate=iDelegate;
- (void)setPreference:(id)arg1 forKey:(id)arg2;
- (id)preferenceForKey:(id)arg1;
- (void)logMessage:(id)arg1;
- (void)popValueDidChange:(id)arg1;
- (void)popValueTimerExpired:(id)arg1;
- (void)openPop:(id)arg1 parameters:(id)arg2;
- (void)closePop;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (void)webView:(id)arg1 windowScriptObjectAvailable:(id)arg2;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
@property(readonly, nonatomic) WebView *webView;
- (void)updatePopValueWithEditorString;
@property(readonly) NSString *currentString;
- (void)loadView;
- (void)dealloc;

@end

