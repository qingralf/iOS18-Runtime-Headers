/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFContinuityScanManager : SFXPCClient <SFContinuityScannerClient> {
    NSMutableSet * _foundDevices;
    NSHashTable * _observers;
    unsigned long long  _scanTypes;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (retain) NSMutableSet *foundDevices;
@property (readonly) unsigned long long hash;
@property (retain) NSHashTable *observers;
@property unsigned long long scanTypes;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_getRemoteObjectProxyOnQueue:(id /* block */)arg1;
- (void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)addObserver:(id)arg1;
- (id)exportedInterface;
- (void)foundDeviceWithDevice:(id)arg1;
- (id)foundDevices;
- (id)init;
- (void)lostDeviceWithDevice:(id)arg1;
- (id)machServiceName;
- (id)observers;
- (void)onqueue_connectionEstablished;
- (void)onqueue_connectionInterrupted;
- (void)pairedDevicesChanged:(id)arg1;
- (void)receivedAdvertisement:(id)arg1;
- (id)remoteObjectInterface;
- (void)removeObserver:(id)arg1;
- (void)scanForTypes:(unsigned long long)arg1;
- (unsigned long long)scanTypes;
- (void)setFoundDevices:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setScanTypes:(unsigned long long)arg1;
- (bool)shouldEscapeXpcTryCatch;

@end
