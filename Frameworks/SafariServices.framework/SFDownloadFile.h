/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFDownloadFile : NSObject <NSFilePresenter> {
    NSURL * _URL;
    NSData * _bookmarkData;
    <SFDownloadFileDelegate> * _delegate;
    bool  _hasPendingResume;
    bool  _invalidated;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _suspended;
    bool  _usingSecurityScopedURL;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSData *bookmarkData;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SFDownloadFileDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes; /* unknown property attribute: ? */
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL; /* unknown property attribute: ? */
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (void)_resumeWithCurrentURL:(id)arg1 previousURL:(id)arg2;
- (void)_startResuming;
- (void)_suspend;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)arg1;
- (id)bookmarkData;
- (void)dealloc;
- (id)delegate;
- (id)initWithBookmarkData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 bookmarkData:(id)arg2;
- (void)invalidate;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)setDelegate:(id)arg1;

@end
