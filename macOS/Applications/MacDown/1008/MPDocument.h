//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDocument.h"

#import "MPAutosaving.h"
#import "MPRendererDataSource.h"
#import "MPRendererDelegate.h"
#import "NSSplitViewDelegate.h"
#import "NSTextViewDelegate.h"
#import "WebEditingDelegate.h"
#import "WebFrameLoadDelegate.h"
#import "WebPolicyDelegate.h"
#import "WebResourceLoadDelegate.h"

@class HGMarkdownHighlighter, MPDocumentSplitView, MPEditorView, MPPreferences, MPRenderer, MPToolbarController, NSArray, NSLayoutConstraint, NSMenuItem, NSPopUpButton, NSString, NSToolbar, NSURL, NSView, WebView;

@interface MPDocument : NSDocument <NSSplitViewDelegate, NSTextViewDelegate, WebEditingDelegate, WebFrameLoadDelegate, WebPolicyDelegate, WebResourceLoadDelegate, MPAutosaving, MPRendererDataSource, MPRendererDelegate>
{
    BOOL _manualRender;
    BOOL _copying;
    BOOL _printing;
    BOOL _shouldHandleBoundsChange;
    BOOL _isPreviewReady;
    BOOL _needsToUnregister;
    BOOL _alreadyRenderingInWeb;
    BOOL _renderToWebPending;
    BOOL _inLiveScroll;
    NSToolbar *_toolbar;
    MPDocumentSplitView *_splitView;
    NSView *_editorContainer;
    MPEditorView *_editor;
    NSLayoutConstraint *_editorPaddingBottom;
    WebView *_preview;
    NSPopUpButton *_wordCountWidget;
    MPToolbarController *_toolbarController;
    NSString *_autosaveName;
    HGMarkdownHighlighter *_highlighter;
    MPRenderer *_renderer;
    double _previousSplitRatio;
    NSURL *_currentBaseUrl;
    double _lastPreviewScrollTop;
    unsigned long long _totalWords;
    unsigned long long _totalCharacters;
    unsigned long long _totalCharactersNoSpaces;
    NSMenuItem *_wordsMenuItem;
    NSMenuItem *_charMenuItem;
    NSMenuItem *_charNoSpacesMenuItem;
    NSArray *_webViewHeaderLocations;
    NSArray *_editorHeaderLocations;
    NSString *_loadedString;
}

+ (id)writableTypes;
+ (BOOL)autosavesInPlace;
@property(copy) NSString *loadedString; // @synthesize loadedString=_loadedString;
@property(nonatomic) BOOL inLiveScroll; // @synthesize inLiveScroll=_inLiveScroll;
@property(retain) NSArray *editorHeaderLocations; // @synthesize editorHeaderLocations=_editorHeaderLocations;
@property(retain) NSArray *webViewHeaderLocations; // @synthesize webViewHeaderLocations=_webViewHeaderLocations;
@property(nonatomic) BOOL renderToWebPending; // @synthesize renderToWebPending=_renderToWebPending;
@property(nonatomic) BOOL alreadyRenderingInWeb; // @synthesize alreadyRenderingInWeb=_alreadyRenderingInWeb;
@property(nonatomic) BOOL needsToUnregister; // @synthesize needsToUnregister=_needsToUnregister;
@property(retain) NSMenuItem *charNoSpacesMenuItem; // @synthesize charNoSpacesMenuItem=_charNoSpacesMenuItem;
@property(retain) NSMenuItem *charMenuItem; // @synthesize charMenuItem=_charMenuItem;
@property(retain) NSMenuItem *wordsMenuItem; // @synthesize wordsMenuItem=_wordsMenuItem;
@property(nonatomic) unsigned long long totalCharactersNoSpaces; // @synthesize totalCharactersNoSpaces=_totalCharactersNoSpaces;
@property(nonatomic) unsigned long long totalCharacters; // @synthesize totalCharacters=_totalCharacters;
@property(nonatomic) unsigned long long totalWords; // @synthesize totalWords=_totalWords;
@property double lastPreviewScrollTop; // @synthesize lastPreviewScrollTop=_lastPreviewScrollTop;
@property(retain) NSURL *currentBaseUrl; // @synthesize currentBaseUrl=_currentBaseUrl;
@property BOOL isPreviewReady; // @synthesize isPreviewReady=_isPreviewReady;
@property BOOL shouldHandleBoundsChange; // @synthesize shouldHandleBoundsChange=_shouldHandleBoundsChange;
@property BOOL printing; // @synthesize printing=_printing;
@property BOOL copying; // @synthesize copying=_copying;
@property BOOL manualRender; // @synthesize manualRender=_manualRender;
@property double previousSplitRatio; // @synthesize previousSplitRatio=_previousSplitRatio;
@property(retain) MPRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain) HGMarkdownHighlighter *highlighter; // @synthesize highlighter=_highlighter;
@property(copy, nonatomic) NSString *autosaveName; // @synthesize autosaveName=_autosaveName;
@property(retain) MPToolbarController *toolbarController; // @synthesize toolbarController=_toolbarController;
@property __weak NSPopUpButton *wordCountWidget; // @synthesize wordCountWidget=_wordCountWidget;
@property __weak WebView *preview; // @synthesize preview=_preview;
@property __weak NSLayoutConstraint *editorPaddingBottom; // @synthesize editorPaddingBottom=_editorPaddingBottom;
@property MPEditorView *editor; // @synthesize editor=_editor;
@property __weak NSView *editorContainer; // @synthesize editorContainer=_editorContainer;
@property __weak MPDocumentSplitView *splitView; // @synthesize splitView=_splitView;
@property __weak NSToolbar *toolbar; // @synthesize toolbar=_toolbar;
- (void).cxx_destruct;
- (void)document:(id)arg1 didPrint:(BOOL)arg2 context:(void *)arg3;
- (void)openOrCreateFileForUrl:(id)arg1;
- (BOOL)isCurrentBaseUrl:(id)arg1;
- (void)updateWordCount;
- (id)presumedFileName;
- (void)setSplitViewDividerLocation:(double)arg1;
- (void)syncScrollers;
- (void)updateHeaderLocations;
- (void)scaleWebview;
- (void)redrawDivider;
- (void)adjustEditorInsets;
- (void)setupEditor:(id)arg1;
- (void)toggleSplitterCollapsingEditorPane:(BOOL)arg1;
- (void)render:(id)arg1;
- (void)toggleEditorPane:(id)arg1;
- (void)togglePreviewPane:(id)arg1;
- (void)toggleToolbar:(id)arg1;
- (void)setEqualSplit:(id)arg1;
- (void)setEditorThreeQuarters:(id)arg1;
- (void)setEditorOneQuarter:(id)arg1;
- (void)insertNewParagraph:(id)arg1;
- (void)unindent:(id)arg1;
- (void)indent:(id)arg1;
- (void)toggleBlockquote:(id)arg1;
- (void)toggleUnorderedList:(id)arg1;
- (void)toggleOrderedList:(id)arg1;
- (void)toggleImage:(id)arg1;
- (void)toggleLink:(id)arg1;
- (void)toggleComment:(id)arg1;
- (void)toggleHighlight:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleStrikethrough:(id)arg1;
- (void)toggleInlineCode:(id)arg1;
- (void)toggleEmphasis:(id)arg1;
- (void)toggleStrong:(id)arg1;
- (void)convertToParagraph:(id)arg1;
- (void)convertToH6:(id)arg1;
- (void)convertToH5:(id)arg1;
- (void)convertToH4:(id)arg1;
- (void)convertToH3:(id)arg1;
- (void)convertToH2:(id)arg1;
- (void)convertToH1:(id)arg1;
- (void)exportPdf:(id)arg1;
- (void)exportHtml:(id)arg1;
- (void)copyHtml:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)previewDidLiveScroll:(id)arg1;
- (void)didRequestPreviewReload:(id)arg1;
- (void)didRequestEditorReload:(id)arg1;
- (void)editorBoundsDidChange:(id)arg1;
- (void)didEndLiveScroll:(id)arg1;
- (void)willStartLiveScroll:(id)arg1;
- (void)editorFrameDidChange:(id)arg1;
- (void)userDefaultsDidChange:(id)arg1;
- (void)editorTextDidChange:(id)arg1;
- (void)renderer:(id)arg1 didProduceHTMLOutput:(id)arg2;
- (id)rendererHighlightingThemeName:(id)arg1;
- (BOOL)rendererHasMathJax:(id)arg1;
- (unsigned long long)rendererCodeBlockAccesory:(id)arg1;
- (BOOL)rendererHasGraphviz:(id)arg1;
- (BOOL)rendererHasMermaid:(id)arg1;
- (BOOL)rendererHasSyntaxHighlighting:(id)arg1;
- (BOOL)rendererDetectsFrontMatter:(id)arg1;
- (id)rendererStyleName:(id)arg1;
- (BOOL)rendererRendersTOC:(id)arg1;
- (BOOL)rendererHasSmartyPants:(id)arg1;
- (int)rendererExtensions:(id)arg1;
- (id)rendererHTMLTitle:(id)arg1;
- (id)rendererMarkdown:(id)arg1;
- (BOOL)rendererLoading;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
- (BOOL)webView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (BOOL)textViewShouldMoveToLeftEndOfLine:(id)arg1;
- (BOOL)textViewShouldDeleteBackward:(id)arg1;
- (BOOL)textViewShouldInsertNewline:(id)arg1;
- (BOOL)textViewShouldInsertBacktab:(id)arg1;
- (BOOL)textViewShouldInsertTab:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)printDocumentWithSettings:(id)arg1 showPrintPanel:(BOOL)arg2 delegate:(id)arg3 didPrintSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (id)printInfo;
- (BOOL)prepareSavePanel:(id)arg1;
- (BOOL)readFromData:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)isDocumentEdited;
- (void)close;
- (void)reloadFromLoadedString;
- (void)windowControllerDidLoadNib:(id)arg1;
- (id)windowNibName;
- (id)init;
@property(readonly, nonatomic) BOOL needsHtml;
@property(readonly) BOOL editorVisible;
@property(readonly) BOOL previewVisible;
- (BOOL)toolbarVisible;
@property(readonly, nonatomic) NSString *html;
@property(retain, nonatomic) NSString *markdown;
@property(readonly, nonatomic) MPPreferences *preferences;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

