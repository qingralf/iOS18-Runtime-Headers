/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIStoreButtonItemViewController : SearchUIButtonItemViewController <ASCLockupViewDelegate> {
    NSString * _adamID;
    ASCLockupView * _lockupView;
    bool  _startedInstalling;
}

@property (nonatomic, retain) NSString *adamID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ASCLockupView *lockupView;
@property bool startedInstalling;
@property (readonly) Class superclass;

+ (id)lockupCache;
+ (id)lockupViewGroup;

- (void).cxx_destruct;
- (id)adamID;
- (id)buttonItemView;
- (id)currentStoreButtonIdentifier;
- (int)currentStoreButtonIdentifierType;
- (id)environment;
- (id)init;
- (id)lockupView;
- (void)lockupView:(id)arg1 appStateDidChange:(id)arg2;
- (void)lockupView:(id)arg1 didFailRequestWithError:(id)arg2;
- (void)lockupViewDidFinishRequest:(id)arg1;
- (void)lockupViewDidInvalidateIntrinsicContentSize:(id)arg1;
- (id)metricsActivityForLockupView:(id)arg1 toPerformActionOfOffer:(id)arg2;
- (id)presentingViewControllerForLockupView:(id)arg1;
- (void)setAdamID:(id)arg1;
- (void)setLockupView:(id)arg1;
- (void)setStartedInstalling:(bool)arg1;
- (bool)startedInstalling;
- (id)storeButtonItem;
- (void)updateWithButtonItem:(id)arg1 buttonItemViewType:(unsigned long long)arg2;

@end