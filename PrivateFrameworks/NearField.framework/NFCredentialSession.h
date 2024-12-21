/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFCredentialSession : NFSession <NFCredentialSessionCallbackInterface> {
    NFCredentialTransceiver * _activeTransceiver;
    <NFCredentialSessionEvents> * _eventDelegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) NFCredentialTransceiver *activeTransceiver;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) <NFCredentialSessionEvents> *eventDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeTransceiver;
- (oneway void)didExpireTransactionForApplet:(id)arg1;
- (id)eventDelegate;
- (oneway void)fieldChanged:(bool)arg1;
- (void)handleSessionSuspended:(id)arg1;
- (id)init;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (oneway void)notifyHCIData:(id)arg1 appletIdentifier:(id)arg2;
- (void)requestSETransceiverWithCompletion:(id /* block */)arg1;
- (void)setActiveTransceiver:(id)arg1;
- (void)setEventDelegate:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)startCardEmulationWithApplets:(id)arg1 externalAuth:(id)arg2 completion:(id /* block */)arg3;
- (void)startWiredModeWithApplets:(id)arg1 externalAuth:(id)arg2 completion:(id /* block */)arg3;
- (void)startWiredModeWithApplets:(id)arg1 selectOnStart:(id)arg2 externalAuth:(id)arg3 completion:(id /* block */)arg4;
- (void)startWiredModeWithIdentifiers:(id)arg1 externalAuth:(id)arg2 completion:(id /* block */)arg3;
- (id)wiredModeTransceive:(id)arg1 outError:(id*)arg2;

@end