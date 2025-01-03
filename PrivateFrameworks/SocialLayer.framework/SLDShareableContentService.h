/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SocialLayer.framework/SocialLayer
 */

@interface SLDShareableContentService : NSObject <SLDService, SLDShareableContentServiceProtocol> {
    NSUserActivity * _activity;
    bool  _isLayoutMonitorReady;
    FBSDisplayLayoutMonitor * _layoutMonitor;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _retrieveShareableContentBlock;
}

@property (nonatomic, retain) NSUserActivity *activity;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLayoutMonitorReady;
@property (nonatomic, readonly) FBSDisplayLayoutMonitor *layoutMonitor;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) id /* block */ retrieveShareableContentBlock;
@property (readonly) Class superclass;

+ (id)remoteObjectProtocol;
+ (void)setupInterface:(id)arg1;
+ (id)sharedService;

- (void).cxx_destruct;
- (id)_applicationIdentifierForConnection:(id)arg1;
- (bool)_connShouldAllowBackgroundCollaboration:(id)arg1;
- (id)activity;
- (bool)allowsConnection:(id)arg1;
- (void)dealloc;
- (void)fetchAsynchronousLPMetadataFromBundleIdentifier:(id)arg1 sceneIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchShareableContentFromBundleIdentifier:(id)arg1 sceneIdentifier:(id)arg2 requestedTypeIdentifier:(id)arg3 requestedItemProviderIndex:(long long)arg4 responseHandler:(id /* block */)arg5;
- (void)fetchShareableContentMetadataFromBundleIdentifier:(id)arg1 sceneIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (bool)isLayoutMonitorReady;
- (void)launchApplicationWithBundleIdentifier:(id)arg1 forActions:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)layoutMonitor;
- (void)loadRepresentationFromBundleIdentifier:(id)arg1 sceneIdentifier:(id)arg2 requestedTypeIdentifier:(id)arg3 requestedItemProviderIndex:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)performAction:(id)arg1 onApplicationWithBundleIdentifier:(id)arg2;
- (bool)populateInitiatorMetadata:(id)arg1 name:(id)arg2 email:(id)arg3;
- (void)populateInitiatorMetadata:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)presentMessageComposeSheetForSceneIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)queue;
- (void)retrieveAsynchronousLPMetadataMatchingBundleIdentifier:(id)arg1 sceneIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)retrieveShareableContentBlock;
- (void)retrieveShareableContentMetadataMatchingBundleIdentifier:(id)arg1 sceneIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setActivity:(id)arg1;
- (void)setIsLayoutMonitorReady:(bool)arg1;
- (void)setRetrieveShareableContentBlock:(id /* block */)arg1;
- (void)shareCollaborationData:(id)arg1 faceTimeConversationUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)visibleApplicationForSceneIdentifier:(id)arg1;
- (id)visibleApplications;

@end
