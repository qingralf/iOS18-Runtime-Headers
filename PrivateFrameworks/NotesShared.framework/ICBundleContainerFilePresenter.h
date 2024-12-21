/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICBundleContainerFilePresenter : NSObject <NSFilePresenter> {
    NSOperationQueue * _operationQueue;
    id /* block */  _subitemBundleDidChange;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes; /* unknown property attribute: ? */
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL; /* unknown property attribute: ? */
@property (nonatomic, copy) id /* block */ subitemBundleDidChange;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *url;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (id)operationQueue;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setSubitemBundleDidChange:(id /* block */)arg1;
- (void)setUrl:(id)arg1;
- (id /* block */)subitemBundleDidChange;
- (id)url;

@end