/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKDiagnosticContextMock : NSObject <DKResponder>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)allowSessionAccessoryDisconnectForDuration:(id)arg1;
- (void)clearAllowSessionAccessoryDisconnect;
- (void)displayAlertWithHeader:(id)arg1 message:(id)arg2 buttonStrings:(id)arg3 completion:(id /* block */)arg4;
- (void)displayInstructions:(id)arg1 style:(int)arg2 imageLocators:(id)arg3 title:(id)arg4 subtitle:(id)arg5 iconLocator:(id)arg6 options:(id)arg7 completion:(id /* block */)arg8;
- (void)enableVolumeHUD:(bool)arg1;
- (void)getAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)requestPluginReloadOnFinishWithCompletion:(id /* block */)arg1;
- (void)requestSessionAccessoryIdentifierWithCompletion:(id /* block */)arg1;
- (void)setScreenToBrightness:(float)arg1 animate:(bool)arg2;
- (void)showUI:(id)arg1 completion:(id /* block */)arg2;
- (void)unpairSessionAccessoryOnTestCompletion;
- (void)updateProgress:(id)arg1 forTest:(id)arg2;
- (void)uploadAssets:(id)arg1 completion:(id /* block */)arg2;

@end
