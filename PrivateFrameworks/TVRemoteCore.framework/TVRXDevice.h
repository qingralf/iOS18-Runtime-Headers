/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRXDevice : NSObject <_TVRCDeviceImplDelegate> {
    NSDictionary * _alternateIdentifiers;
    long long  _classification;
    long long  _connectionState;
    <_TVRXDeviceDelegate> * _delegate;
    NSMutableSet * _deviceImplSet;
    NSString * _identifier;
    <_TVRCDeviceImpl> * _impl;
    NSString * _model;
    NSString * _name;
    NSSet * _supportedButtons;
}

@property (nonatomic, copy) NSDictionary *alternateIdentifiers;
@property (nonatomic, readonly) long long attentionState;
@property (nonatomic) long long classification;
@property (nonatomic, readonly) NSString *conciseDescription;
@property (nonatomic, readonly) long long connectionState;
@property (nonatomic, readonly) long long connectionType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <_TVRXDeviceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *deviceImplSet;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSString *idsIdentifier;
@property (getter=_impl, setter=_setImpl:, nonatomic) <_TVRCDeviceImpl> *impl;
@property (nonatomic, readonly) TVRXKeyboardController *keyboardController;
@property (nonatomic, readonly) long long linkType;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) TVRCNowPlayingInfo *nowPlayingInfo;
@property (nonatomic, readonly) bool paired;
@property (nonatomic, readonly) TVRCSiriRemoteInfo *pairedRemoteInfo;
@property (nonatomic, readonly) unsigned long long pairingCapability;
@property (nonatomic, readonly) long long siriRemoteFindingState;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSSet *supportedButtons;
@property (nonatomic, readonly) bool supportsDirectCaptionQueries;
@property (nonatomic, readonly) bool supportsFindMyRemote;
@property (nonatomic, readonly) bool supportsTouchEvents;

- (void).cxx_destruct;
- (bool)_authenticationIsSupported;
- (void)_connectionAttemptSucceeded;
- (void)_deviceUpdateAttentionState;
- (void)_deviceUpdateSiriRemoteFindingState;
- (void)_disconnected:(long long)arg1 error:(id)arg2;
- (void)_enableFindingSession:(bool)arg1;
- (void)_encounteredAuthenticationChallenge:(id)arg1;
- (id)_impl;
- (id)_init;
- (void)_reevaluate;
- (void)_setActiveEndpoint;
- (void)_setDeviceName:(id)arg1;
- (void)_setDeviceSupportsFindMyRemote:(bool)arg1;
- (void)_setIdentifier:(id)arg1 alternateIdentifiers:(id)arg2 name:(id)arg3 model:(id)arg4 supportedButtons:(id)arg5;
- (void)_setImpl:(id)arg1;
- (void)_setNowPlayingInfo:(id)arg1;
- (void)_setPairedRemoteInfo:(id)arg1;
- (void)_setSupportedButtons:(id)arg1;
- (void)addDeviceImpl:(id)arg1;
- (void)addItemWithMediaIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)allIdentifiers;
- (id)alternateIdentifiers;
- (long long)attentionState;
- (long long)classification;
- (id)conciseDescription;
- (void)connect;
- (long long)connectionState;
- (long long)connectionType;
- (bool)containsIdentifier:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)device:(id)arg1 didDisconnectWithReason:(long long)arg2 error:(id)arg3;
- (void)device:(id)arg1 didEncounterAuthenticationChallenge:(id)arg2;
- (void)device:(id)arg1 didUpdateFindMyRemoteSupported:(bool)arg2;
- (void)device:(id)arg1 didUpdateName:(id)arg2;
- (void)device:(id)arg1 didUpdateNowPlayingInfo:(id)arg2;
- (void)device:(id)arg1 didUpdatePairedRemoteInfo:(id)arg2;
- (void)device:(id)arg1 didUpdateSupportedButtons:(id)arg2;
- (id)deviceImplSet;
- (void)didConnectWithDevice:(id)arg1;
- (void)didUpdateAttentionStateWithDevice:(id)arg1;
- (void)didUpdateSiriRemoteFindingStateWithDevice:(id)arg1;
- (void)disconnect;
- (void)fetchUpNextInfoWithPaginationToken:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)identifier;
- (id)idsIdentifier;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTVRXDevice:(id)arg1;
- (id)keyboardController;
- (long long)linkType;
- (void)markAsWatchedWithMediaIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)model;
- (id)name;
- (id)nowPlayingInfo;
- (bool)paired;
- (id)pairedRemoteInfo;
- (unsigned long long)pairingCapability;
- (void)playItem:(id)arg1 completion:(id /* block */)arg2;
- (id)preferredImpl;
- (void)removeDeviceImpl:(id)arg1;
- (void)removeItemWithMediaIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)sendButtonEvent:(id)arg1;
- (void)sendEvent:(id)arg1 options:(id)arg2 response:(id /* block */)arg3;
- (void)sendGameControllerEvent:(id)arg1;
- (void)sendTouchEvent:(id)arg1;
- (void)setAlternateIdentifiers:(id)arg1;
- (void)setClassification:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceImplSet:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSupportedButtons:(id)arg1;
- (long long)siriRemoteFindingState;
- (id)stateDictionary;
- (id)supportedButtons;
- (bool)supportsDirectCaptionQueries;
- (bool)supportsFindMyRemote;
- (bool)supportsTouchEvents;

@end
