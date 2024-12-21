/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HearingModeService_Private.framework/HearingModeService_Private
 */

@interface HMServiceDaemon : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableSet * _xpcConnections;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedHMServiceDaemon;

- (void).cxx_destruct;
- (void)_activate;
- (void)_fetchOcclusionResultForDeviceIdentifier:(id)arg1 featureID:(int)arg2 completion:(id /* block */)arg3;
- (void)_modifyDeviceConfig:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)_reportDeviceRecordChange:(id)arg1;
- (void)_reportDeviceRecordLost:(id)arg1;
- (void)_reportValidAudiograms:(id)arg1 invalidAudiograms:(id)arg2 error:(id)arg3;
- (void)_triggerDiagnosticCheckForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_update;
- (void)_xpcConnectionInvalidated:(id)arg1;
- (void)activate;
- (id)init;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)reportDeviceRecordChange:(id)arg1;
- (void)reportDeviceRecordLost:(id)arg1;
- (void)reportDiagnosticRecordChange:(id)arg1;
- (void)reportValidAudiograms:(id)arg1 invalidAudiograms:(id)arg2 error:(id)arg3;

@end