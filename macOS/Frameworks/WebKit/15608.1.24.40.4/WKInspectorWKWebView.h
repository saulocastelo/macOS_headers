//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

@protocol WKInspectorWKWebViewDelegate;

__attribute__((visibility("hidden")))
@interface WKInspectorWKWebView : WKWebView
{
    struct WeakObjCPtr<id<WKInspectorWKWebViewDelegate>> _inspectorWKWebViewDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)reloadFromOrigin:(id)arg1;
- (void)reload:(id)arg1;
@property(nonatomic) __weak id <WKInspectorWKWebViewDelegate> inspectorWKWebViewDelegate;
- (long long)tag;

@end

