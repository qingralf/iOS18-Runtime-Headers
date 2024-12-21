/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AUDeveloperSettings.framework/AUDeveloperSettings
 */

@interface AUObserverXPC : NSObject <AUObserverXPCClient, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _internalQueue;
    <AUObserverXPCClient> * _registeredClient;
    NSUUID * _uuid;
    NSXPCConnection * _xpcConnection;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)xpcConnectionToDaemon;

- (void).cxx_destruct;
- (void)addAccessoryID:(id)arg1 assetID:(id)arg2;
- (void)clearDropboxForModelNumber:(id)arg1 withFusing:(id)arg2;
- (void)dealloc;
- (void)firmwareUpdateProgressForAccessoryID:(id)arg1 assetID:(id)arg2 bytesSent:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)registerClient:(id)arg1;
- (id)remoteObject;
- (void)removeAccessoryID:(id)arg1;
- (void)removeObserver;
- (void)settingsChangedForSerialNumber:(id)arg1;
- (void)stagingCompleteForAccessoryID:(id)arg1 assetID:(id)arg2 status:(unsigned long long)arg3;
- (void)stopMonitoring;
- (void)unregisterClient;

@end