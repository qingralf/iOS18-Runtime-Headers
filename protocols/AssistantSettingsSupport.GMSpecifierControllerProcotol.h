/* Generated by RuntimeBrowser.
 */

@protocol AssistantSettingsSupport.GMSpecifierControllerProcotol <NSObject>

@required

- (void)clearCFUWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<_TtP24AssistantSettingsSupport29GMSpecifierControllerDelegate_> *)delegate;
- (void)enrollWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (bool)featureOptInStatus;
- (void)fetchStatusWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)fetchStatusWithForceDownloadIfNeeded:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (bool)gmFFEnabled;
- (bool)hasEngagedCFU;
- (void)setDelegate:(id <_TtP24AssistantSettingsSupport29GMSpecifierControllerDelegate_>)arg1;
- (void)setFeatureOptInStatusWithEnabled:(bool)arg1;

@end
