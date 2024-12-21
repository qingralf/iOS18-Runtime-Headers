/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Moments.framework/Moments
 */

@interface MOSuggestionSheetController : NSObject {
    BSServiceConnection<BSServiceConnectionClient> * _angelConnection;
    NSObject<OS_dispatch_queue> * _angelConnectionQueue;
    <MOSuggestionSheetControllerDelegate> * _delegate;
    bool  _disableAssetUnwrapping;
    FBSSceneIdentityToken * _instanceSceneIdentityToken;
    <MOSuggestionsUIClient> * _localTarget;
    <MOSuggestionsUIServer> * _remoteTarget;
    NSMutableArray * _sandboxTokenHandles;
}

@property (nonatomic) <MOSuggestionSheetControllerDelegate> *delegate;
@property (nonatomic) bool disableAssetUnwrapping;

+ (id)processedAssets:(id)arg1;

- (void).cxx_destruct;
- (void)activate;
- (void)addSandboxHandle:(id)arg1;
- (id)delegate;
- (void)didActivateConnection;
- (void)didDropConnection;
- (bool)disableAssetUnwrapping;
- (void)getAssetsForSuggestion:(id)arg1 withTypes:(id)arg2 completion:(id /* block */)arg3;
- (void)getAssetsForSuggestion:(id)arg1 withTypes:(id)arg2 onAssetsCallback:(id /* block */)arg3;
- (id)initForScene:(id)arg1;
- (void)reconnectIfNecessary;
- (void)releaseSandboxHandles;
- (void)requestPickerWithOptions:(id)arg1;
- (id)server;
- (void)setDelegate:(id)arg1;
- (void)setDisableAssetUnwrapping:(bool)arg1;
- (void)terminate;
- (void)updatePickerState:(unsigned long long)arg1 animated:(bool)arg2;

@end