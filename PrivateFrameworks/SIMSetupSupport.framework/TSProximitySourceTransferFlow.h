/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSProximitySourceTransferFlow : TSSIMSetupFlow <CoreTelephonyClientCellularPlanManagementDelegate, ESIMProxTransferControllerDelegate, TSSIMSetupFlowDelegate> {
    SSProximityDevice * _btClient;
    CoreTelephonyClient * _ctClient;
    bool  _isAuthenticationCompleted;
    bool  _isFlowCompleted;
    bool  _isHiding;
    bool  _isRemotePeerClosed;
    bool  _isResumingAfterPause;
    bool  _isTransferCompleted;
    SSNFCAssertion * _nfcAssertion;
    int  _passcodeType;
    TSCellularPlanProximityTransferController * _proxTransferController;
    unsigned char  _remoteDeviceClass;
    UIViewController<PRXCardContentProviding> * _secureIntentProxCard;
}

@property (retain) SSProximityDevice *btClient;
@property (retain) CoreTelephonyClient *ctClient;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isAuthenticationCompleted;
@property bool isFlowCompleted;
@property bool isHiding;
@property bool isRemotePeerClosed;
@property bool isResumingAfterPause;
@property bool isTransferCompleted;
@property (retain) SSNFCAssertion *nfcAssertion;
@property int passcodeType;
@property (retain) TSCellularPlanProximityTransferController *proxTransferController;
@property unsigned char remoteDeviceClass;
@property (retain) UIViewController<PRXCardContentProviding> *secureIntentProxCard;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_assertNFC;
- (void)_bootstrapTransfer;
- (void)_deassertNFC;
- (void)_handleSKEvent:(id)arg1;
- (void)_proxCardFlowDidDismiss;
- (void)_resetExtension:(id /* block */)arg1;
- (void)_setupClient:(id)arg1;
- (id)btClient;
- (id)ctClient;
- (void)dealloc;
- (void)didComplete;
- (void)didRequestPresentationForProxCard:(id)arg1;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (id)initForResumption;
- (id)initWithPeerDevice:(id)arg1;
- (bool)isAuthenticationCompleted;
- (bool)isFlowCompleted;
- (bool)isHiding;
- (bool)isRemotePeerClosed;
- (bool)isResumingAfterPause;
- (bool)isTransferCompleted;
- (id)nextViewControllerFrom:(id)arg1;
- (id)nfcAssertion;
- (int)passcodeType;
- (id)proxTransferController;
- (unsigned char)remoteDeviceClass;
- (id)secureIntentProxCard;
- (void)setBtClient:(id)arg1;
- (void)setCtClient:(id)arg1;
- (void)setIsAuthenticationCompleted:(bool)arg1;
- (void)setIsFlowCompleted:(bool)arg1;
- (void)setIsHiding:(bool)arg1;
- (void)setIsRemotePeerClosed:(bool)arg1;
- (void)setIsResumingAfterPause:(bool)arg1;
- (void)setIsTransferCompleted:(bool)arg1;
- (void)setNfcAssertion:(id)arg1;
- (void)setPasscodeType:(int)arg1;
- (void)setProxTransferController:(id)arg1;
- (void)setRemoteDeviceClass:(unsigned char)arg1;
- (void)setSecureIntentProxCard:(id)arg1;
- (void)transferEventUpdate:(id)arg1;
- (void)viewControllerDidComplete:(id)arg1;

@end