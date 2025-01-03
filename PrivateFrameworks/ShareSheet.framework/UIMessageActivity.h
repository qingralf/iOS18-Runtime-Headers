/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface UIMessageActivity : UIActivity <UICollaborationActivity, UIManagedConfigurationRestrictableActivity, UIPeopleSuggestionRecipientActivity, UIRecipientsPassthroughActivity> {
    <SFCollaborationItem> * _collaborationItem;
    bool  _isCollaborative;
    bool  _isContentManaged;
    LPLinkMetadata * _linkMetadata;
    MFMessageComposeViewController * _messageComposeViewController;
    <SFPeopleSuggestion> * _peopleSuggestion;
    NSString * _sourceApplicationBundleID;
}

@property (nonatomic, retain) <SFCollaborationItem> *collaborationItem;
@property (nonatomic) <SFCollaborationService> *collaborationService; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCollaborative; /* unknown property attribute: ? */
@property (nonatomic) bool isContentManaged;
@property (nonatomic, retain) LPLinkMetadata *linkMetadata;
@property (nonatomic, retain) MFMessageComposeViewController *messageComposeViewController;
@property (nonatomic, retain) <SFPeopleSuggestion> *peopleSuggestion;
@property (nonatomic, copy) NSString *sessionID;
@property (nonatomic, copy) NSString *sourceApplicationBundleID;
@property (readonly) Class superclass;

+ (void)_preheatAsyncIfNeeded;
+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;
+ (id)applicationBundleID;

- (void).cxx_destruct;
- (id /* block */)_backgroundPreheatBlock;
- (id)_bundleIdentifierForActivityImageCreation;
- (void)_cleanup;
- (void)_prepareWithActivityItems:(id)arg1 completion:(id /* block */)arg2;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)collaborationItem;
- (void)dealloc;
- (bool)isCollaborative;
- (bool)isContentManaged;
- (id)linkMetadata;
- (id)messageComposeViewController;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)peopleSuggestion;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setCollaborationItem:(id)arg1;
- (void)setIsCollaborative:(bool)arg1;
- (void)setIsContentManaged:(bool)arg1;
- (void)setLinkMetadata:(id)arg1;
- (void)setMessageComposeViewController:(id)arg1;
- (void)setPeopleSuggestion:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSourceApplicationBundleID:(id)arg1;
- (id)sourceApplicationBundleID;

@end
