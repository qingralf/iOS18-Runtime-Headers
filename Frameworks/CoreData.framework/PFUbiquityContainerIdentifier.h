/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityContainerIdentifier : NSObject <NSFilePresenter> {
    NSString * _localPeerID;
    NSURL * _presentedItemURL;
    NSString * _storeName;
    PFUbiquityLocation * _ubiquityRootLocation;
    bool  _usedExistingUUIDFile;
    PFUbiquityLocation * _uuidFileLocation;
    NSString * _uuidString;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes; /* unknown property attribute: ? */
@property (readonly) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL; /* unknown property attribute: ? */
@property (readonly) Class superclass;

- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;

@end
