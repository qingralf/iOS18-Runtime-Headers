/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebPDFViewPlaceholder : WAKView <WebPDFDocumentRepresentation, WebPDFDocumentView> {
    struct CGSize { 
        double width; 
        double height; 
    }  _containerSize;
    WebDataSource * _dataSource;
    NSObject<WebPDFViewPlaceholderDelegate> * _delegate;
    bool  _didCompleteLayout;
    bool  _didFinishLoad;
    struct CGPDFDocument { } * _document;
    NSArray * _pageRects;
    NSArray * _pageYOrigins;
    NSString * _title;
}

@property struct CGSize { double x1; double x2; } containerSize;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property NSObject<WebPDFViewPlaceholderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didCompleteLayout;
@property (readonly) struct CGPDFDocument { }*doc;
@property (readonly) struct CGPDFDocument { }*document;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *pageRects;
@property (retain) NSArray *pageYOrigins;
@property (readonly) Class superclass;
@property (retain) NSString *title;
@property (readonly) unsigned long long totalPages;

+ (Class)_representationClassForWebFrame:(id)arg1;
+ (void)setAsPDFDocRepAndView;
+ (id)supportedMIMETypes;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_computePageRects:(struct CGPDFDocument { }*)arg1;
- (void)_doPostLoadOrUnlockTasks;
- (void)_evaluateJSForDocument:(struct CGPDFDocument { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_getPDFPageBounds:(struct CGPDFPage { }*)arg1;
- (void)_notifyDidCompleteLayout;
- (void)_updateTitleForDocumentIfAvailable;
- (void)_updateTitleForURL:(id)arg1;
- (bool)canProvideDocumentSource;
- (void)clearDocument;
- (struct CGSize { double x1; double x2; })containerSize;
- (void)dataSourceUpdated:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)didCompleteLayout;
- (void)didUnlockDocument;
- (struct CGPDFDocument { }*)doc;
- (struct CGPDFDocument { }*)document;
- (id)documentSource;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (void)layout;
- (id)pageRects;
- (id)pageYOrigins;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPageNumber:(unsigned long long)arg1;
- (void)setContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocument:(struct CGPDFDocument { }*)arg1;
- (void)setPageRects:(id)arg1;
- (void)setPageYOrigins:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)simulateClickOnLinkToURL:(id)arg1;
- (id)title;
- (unsigned long long)totalPages;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;

@end