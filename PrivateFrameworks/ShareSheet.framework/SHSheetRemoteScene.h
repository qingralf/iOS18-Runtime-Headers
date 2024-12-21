/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface SHSheetRemoteScene : NSObject <SHSheetCollaborationParticipantsPresenter, SHSheetRemoteMutableScene, _SHSheetScene, _UISceneHostingControllerDelegate> {
    SFCollaborationCloudSharingRequest * _cloudShareRequest;
    id /* block */  _collaborationCreateSharingURLCompletionHandler;
    _SWCollaborationShareOptions * _collaborationOptions;
    NSArray * _customizationGroups;
    <SHSheetRemoteSceneDelegate> * _delegate;
    long long  _hostProcessType;
    _UISceneHostingController * _hostingController;
    bool  _isActive;
    long long  _presentationStyle;
    <SHSheetSession> * _session;
    SHSheetUIServiceClientContext * _sessionContext;
}

@property (nonatomic, retain) SFCollaborationCloudSharingRequest *cloudShareRequest;
@property (nonatomic, copy) id /* block */ collaborationCreateSharingURLCompletionHandler;
@property (nonatomic, copy) _SWCollaborationShareOptions *collaborationOptions;
@property (nonatomic, copy) NSArray *customizationGroups;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SHSheetRemoteSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long hostProcessType;
@property (nonatomic, retain) _UISceneHostingController *hostingController;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic) long long presentationStyle;
@property (nonatomic, readonly) <SHSheetSession> *session;
@property (nonatomic, retain) SHSheetUIServiceClientContext *sessionContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dataRepresentationForCollaborationShareOptions:(id)arg1;
- (void)activate;
- (void)clientIsReady;
- (id)cloudShareRequest;
- (id /* block */)collaborationCreateSharingURLCompletionHandler;
- (id)collaborationOptions;
- (id)createSceneSettings;
- (id)customizationGroups;
- (id)delegate;
- (long long)hostProcessType;
- (id)hostingController;
- (id)initWithSession:(id)arg1;
- (void)invalidate;
- (bool)isActive;
- (void)presentCollaborationParticipantsViewControllerForCloudSharingRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)presentationStyle;
- (void)receivedAction:(id)arg1;
- (void)resetContext;
- (void)sendAction:(id)arg1;
- (id)session;
- (id)sessionContext;
- (void)setCloudShareRequest:(id)arg1;
- (void)setCollaborationCreateSharingURLCompletionHandler:(id /* block */)arg1;
- (void)setCollaborationOptions:(id)arg1;
- (void)setCustomizationGroups:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostProcessType:(long long)arg1;
- (void)setHostingController:(id)arg1;
- (void)setPresentationStyle:(long long)arg1;
- (void)setSessionContext:(id)arg1;
- (void)setupSceneHosting;
- (void)updateWithChange:(id /* block */)arg1;
- (void)updateWithSessionContext:(id)arg1;

@end