/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface SHSheetViewModel : NSObject <SHSheetContentViewModel, SHSheetViewModelInterface> {
    NSArray * _actionProxies;
    NSArray * _activities;
    NSDictionary * _activitiesByUUID;
    NSArray * _applicationActivityTypes;
    SLCollaborationFooterViewModel * _collaborationFooterViewModel;
    NSString * _collaborationModeTitle;
    UIColor * _customHeaderButtonColor;
    NSAttributedString * _customHeaderButtonTitle;
    NSString * _customOptionsTitle;
    UIViewController * _customViewController;
    NSNumber * _customViewControllerSectionHeightWrapper;
    NSNumber * _customViewControllerVerticalInsetWrapper;
    bool  _isCollaborative;
    bool  _isLoadingMetadata;
    bool  _isModeSwitchDisabled;
    bool  _isSharingExpanded;
    NSArray * _metadataValues;
    NSNumber * _nearbyCountSlotID;
    NSArray * _peopleSuggestionProxies;
    NSArray * _peopleSuggestions;
    bool  _reloadData;
    NSArray * _restrictedActivityTypes;
    <SHSheetSession> * _session;
    NSArray * _shareProxies;
    bool  _showCustomHeaderButton;
    bool  _showHeaderSpecialization;
    bool  _showOptions;
    bool  _supportsCollaboration;
    bool  _supportsSendCopy;
    bool  _updateProxiesWithAnimation;
    NSArray * _urlRequests;
    NSArray * _urlSandboxExtensions;
}

@property (nonatomic, copy) NSArray *actionProxies;
@property (nonatomic, copy) NSArray *activities;
@property (nonatomic, copy) NSDictionary *activitiesByUUID;
@property (nonatomic, copy) NSArray *applicationActivityTypes;
@property (nonatomic, retain) SLCollaborationFooterViewModel *collaborationFooterViewModel;
@property (nonatomic, retain) NSString *collaborationModeTitle;
@property (nonatomic, retain) UIColor *customHeaderButtonColor;
@property (nonatomic, copy) NSAttributedString *customHeaderButtonTitle;
@property (nonatomic, copy) NSString *customOptionsTitle;
@property (nonatomic, retain) UIViewController *customViewController;
@property (nonatomic, retain) NSNumber *customViewControllerSectionHeightWrapper;
@property (nonatomic, retain) NSNumber *customViewControllerVerticalInsetWrapper;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCollaborative;
@property (nonatomic) bool isLoadingMetadata;
@property (nonatomic) bool isModeSwitchDisabled;
@property (nonatomic) bool isSharingExpanded;
@property (nonatomic, copy) NSArray *metadataValues;
@property (nonatomic, retain) NSNumber *nearbyCountSlotID;
@property (nonatomic, copy) NSArray *peopleSuggestionProxies;
@property (nonatomic, copy) NSArray *peopleSuggestions;
@property (nonatomic) bool reloadData;
@property (nonatomic, copy) NSArray *restrictedActivityTypes;
@property (nonatomic, readonly) <SHSheetSession> *session;
@property (nonatomic, copy) NSArray *shareProxies;
@property (nonatomic) bool showCustomHeaderButton;
@property (nonatomic) bool showHeaderSpecialization;
@property (nonatomic) bool showOptions;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsCollaboration;
@property (nonatomic) bool supportsSendCopy;
@property (nonatomic) bool updateProxiesWithAnimation;
@property (nonatomic, copy) NSArray *urlRequests;
@property (nonatomic, copy) NSArray *urlSandboxExtensions;

- (void).cxx_destruct;
- (id)actionProxies;
- (id)activities;
- (id)activitiesByUUID;
- (id)applicationActivityTypes;
- (id)collaborationFooterViewModel;
- (id)collaborationModeTitle;
- (id)customHeaderButtonColor;
- (id)customHeaderButtonTitle;
- (id)customOptionsTitle;
- (id)customViewController;
- (id)customViewControllerSectionHeightWrapper;
- (id)customViewControllerVerticalInsetWrapper;
- (id)description;
- (id)initWithSession:(id)arg1;
- (bool)isCollaborative;
- (bool)isLoadingMetadata;
- (bool)isModeSwitchDisabled;
- (bool)isSharingExpanded;
- (id)metadataValues;
- (id)nearbyCountSlotID;
- (id)peopleSuggestionProxies;
- (id)peopleSuggestions;
- (bool)reloadData;
- (id)restrictedActivityTypes;
- (id)session;
- (void)setActionProxies:(id)arg1;
- (void)setActivities:(id)arg1;
- (void)setActivitiesByUUID:(id)arg1;
- (void)setApplicationActivityTypes:(id)arg1;
- (void)setCollaborationFooterViewModel:(id)arg1;
- (void)setCollaborationModeTitle:(id)arg1;
- (void)setCustomHeaderButtonColor:(id)arg1;
- (void)setCustomHeaderButtonTitle:(id)arg1;
- (void)setCustomOptionsTitle:(id)arg1;
- (void)setCustomViewController:(id)arg1;
- (void)setCustomViewControllerSectionHeightWrapper:(id)arg1;
- (void)setCustomViewControllerVerticalInsetWrapper:(id)arg1;
- (void)setIsCollaborative:(bool)arg1;
- (void)setIsLoadingMetadata:(bool)arg1;
- (void)setIsModeSwitchDisabled:(bool)arg1;
- (void)setIsSharingExpanded:(bool)arg1;
- (void)setMetadataValues:(id)arg1;
- (void)setNearbyCountSlotID:(id)arg1;
- (void)setPeopleSuggestionProxies:(id)arg1;
- (void)setPeopleSuggestions:(id)arg1;
- (void)setReloadData:(bool)arg1;
- (void)setRestrictedActivityTypes:(id)arg1;
- (void)setShareProxies:(id)arg1;
- (void)setShowCustomHeaderButton:(bool)arg1;
- (void)setShowHeaderSpecialization:(bool)arg1;
- (void)setShowOptions:(bool)arg1;
- (void)setSupportsCollaboration:(bool)arg1;
- (void)setSupportsSendCopy:(bool)arg1;
- (void)setUpdateProxiesWithAnimation:(bool)arg1;
- (void)setUrlRequests:(id)arg1;
- (void)setUrlSandboxExtensions:(id)arg1;
- (id)shareProxies;
- (bool)showCustomHeaderButton;
- (bool)showHeaderSpecialization;
- (bool)showOptions;
- (bool)supportsCollaboration;
- (bool)supportsSendCopy;
- (bool)updateProxiesWithAnimation;
- (id)urlRequests;
- (id)urlSandboxExtensions;

@end
