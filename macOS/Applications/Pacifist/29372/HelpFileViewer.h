//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSAttributedString, NSButton, NSString, NSTextView, WebView;

@interface HelpFileViewer : NSWindowController
{
    NSAttributedString *_attributedStringValue;
    NSString *_windowTitle;
    NSString *_checkBoxTitle;
    NSTextView *_textView;
    NSButton *_checkBox;
    NSButton *_okButton;
    WebView *_webView;
    HelpFileViewer *_selfRetainer;
}

+ (id)viewerForHelpFileAtURL:(id)arg1 windowTitle:(id)arg2 checkBoxTitle:(id)arg3 checkBoxTarget:(id)arg4 checkBoxKeyPath:(id)arg5 fixSize:(BOOL)arg6 drawBorder:(BOOL)arg7;
+ (id)viewerForHelpFileAtURL:(id)arg1 windowTitle:(id)arg2 fixSize:(BOOL)arg3 drawBorder:(BOOL)arg4;
+ (void)displayViewerForHelpFileAtURL:(id)arg1 windowTitle:(id)arg2 checkBoxTitle:(id)arg3 checkBoxTarget:(id)arg4 checkBoxKeyPath:(id)arg5 fixSize:(BOOL)arg6 drawBorder:(BOOL)arg7 modal:(BOOL)arg8;
+ (void)displayViewerForHelpFileAtURL:(id)arg1 windowTitle:(id)arg2 fixSize:(BOOL)arg3 drawBorder:(BOOL)arg4 modal:(BOOL)arg5;
@property(retain, nonatomic) HelpFileViewer *selfRetainer; // @synthesize selfRetainer=_selfRetainer;
@property(nonatomic) __weak WebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak NSButton *okButton; // @synthesize okButton=_okButton;
@property(nonatomic) __weak NSButton *checkBox; // @synthesize checkBox=_checkBox;
@property(nonatomic) NSTextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *checkBoxTitle; // @synthesize checkBoxTitle=_checkBoxTitle;
@property(copy, nonatomic) NSString *windowTitle; // @synthesize windowTitle=_windowTitle;
@property(copy, nonatomic) NSAttributedString *attributedStringValue; // @synthesize attributedStringValue=_attributedStringValue;
- (void).cxx_destruct;
- (void)webViewDidFinishLoading:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowWillLoad;
- (void)fixSize;
- (void)closeWindow:(id)arg1;
- (void)runModal:(id)arg1;
- (void)showWindow:(id)arg1;
@property(readonly, copy, nonatomic) NSString *okButtonTitle;
- (void)setCheckBoxTarget:(id)arg1 keyPath:(id)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1 windowTitle:(id)arg2 checkBoxTitle:(id)arg3 checkBoxTarget:(id)arg4 checkBoxKeyPath:(id)arg5 fixSize:(BOOL)arg6 drawBorder:(BOOL)arg7;
- (id)initWithURL:(id)arg1 windowTitle:(id)arg2 fixSize:(BOOL)arg3 drawBorder:(BOOL)arg4;

@end

