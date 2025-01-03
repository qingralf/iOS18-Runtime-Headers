/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleHostViewController : UIViewController <NUArticleViewControllerDelegate, NUBarCompressible, NULoadingDelegate, NUPageable, SXAnalyticsReporting> {
    <NUAnalyticsReporting> * _analyticsReporting;
    FCArticle * _article;
    NUArticleContext * _articleContext;
    <NUArticleViewControllerFactory> * _articleViewControllerFactory;
    FCObservable * _articleViewStyler;
    <NUArticleContentSizeManager> * _contentSizeManager;
    UIViewController * _contentTypeViewController;
    <NUArticleHostViewControllerDelegate> * _delegate;
    <NUErrorMessageFactory> * _errorMessageFactory;
    FCIssue * _issue;
    <NULoadingDelegate> * _loadingDelegate;
    UIView<NULoadingViewProviding> * _loadingView;
    TFMultiDelegate * _multiLoadingDelegate;
    NSString * _pageIdentifier;
    long long  _relativePriority;
    UIResponder * _responder;
    <NUSettings> * _settings;
}

@property (nonatomic, readonly) <NUAnalyticsReporting> *analyticsReporting;
@property (nonatomic, readonly) FCArticle *article;
@property (nonatomic, retain) NUArticleContext *articleContext;
@property (nonatomic, readonly) <NUArticleViewControllerFactory> *articleViewControllerFactory;
@property (nonatomic, readonly) FCObservable *articleViewStyler;
@property (nonatomic) long long contentScale;
@property (nonatomic, retain) NSString *contentSizeCategory;
@property (nonatomic, readonly) <NUArticleContentSizeManager> *contentSizeManager;
@property (nonatomic, retain) UIViewController *contentTypeViewController;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <NUArticleHostViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUErrorMessageFactory> *errorMessageFactory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FCIssue *issue;
@property (nonatomic) <NULoadingDelegate> *loadingDelegate;
@property (nonatomic, readonly) NSHashTable *loadingListeners;
@property (nonatomic, retain) UIView<NULoadingViewProviding> *loadingView;
@property (nonatomic, readonly) TFMultiDelegate *multiLoadingDelegate;
@property (nonatomic, readonly, copy) NSString *pageIdentifier;
@property (nonatomic, readonly) long long relativePriority;
@property (nonatomic, retain) UIResponder *responder;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly, copy) NSString *selectedText;
@property (nonatomic, readonly, copy) <NUSettings> *settings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)analyticsReporting;
- (id)article;
- (id)articleContext;
- (void)articleViewController:(id)arg1 didScrollToPosition:(id)arg2;
- (void)articleViewControllerDidScrollToBottomOfPrimaryContent:(id)arg1;
- (id)articleViewControllerFactory;
- (id)articleViewStyler;
- (bool)becomeFirstResponder;
- (long long)contentScale;
- (id)contentSizeCategory;
- (id)contentSizeManager;
- (id)contentTypeViewController;
- (id)delegate;
- (id)errorMessageFactory;
- (id)initWithArticle:(id)arg1 articleViewControllerFactory:(id)arg2 settings:(id)arg3 errorMessageFactory:(id)arg4 contentSizeManager:(id)arg5;
- (id)initWithArticle:(id)arg1 issue:(id)arg2 articleViewControllerFactory:(id)arg3 settings:(id)arg4 errorMessageFactory:(id)arg5 analyticsReporting:(id)arg6 contentSizeManager:(id)arg7 relativePriority:(long long)arg8;
- (id)issue;
- (void)loadArticleAndEmbedArticleViewController;
- (id)loadingDelegate;
- (void)loadingDidFinishWithError:(id)arg1;
- (void)loadingDidStart;
- (void)loadingDidUpdateProgress:(double)arg1;
- (id)loadingListeners;
- (id)loadingTextForArticle:(id)arg1;
- (id)loadingView;
- (void)loadingWillStart;
- (id)multiLoadingDelegate;
- (id)pageIdentifier;
- (long long)relativePriority;
- (void)reload;
- (void)reportEvent:(id)arg1;
- (bool)resignFirstResponder;
- (id)responder;
- (id)scrollView;
- (id)selectedText;
- (void)setArticleContext:(id)arg1;
- (void)setContentScale:(long long)arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setContentTypeViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoadingDelegate:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setResponder:(id)arg1;
- (id)settings;
- (void)updateContentScaleAndSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
