/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULClientProcessConnection : NSObject <ULXPCRequestProtocol> {
    NSUUID * _connectionToken;
    <ULClientProcessConnectionDelegate> * _delegate;
    <ULLogicDiagnosticsHandling> * _diagnosticsHandling;
    <ULLogicLegacyServiceHandling> * _legacyServiceHandling;
    NSObject<OS_dispatch_queue> * _queue;
    <ULXPCResponseProtocol> * _remoteObjectProxy;
    <ULLogicServiceHandling> * _serviceHandling;
    NSUUID * _serviceIdentifier;
    NSString * _signingIdentity;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSUUID *connectionToken;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <ULClientProcessConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <ULLogicDiagnosticsHandling> *diagnosticsHandling;
@property (readonly) unsigned long long hash;
@property (nonatomic) <ULLogicLegacyServiceHandling> *legacyServiceHandling;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) <ULXPCResponseProtocol> *remoteObjectProxy;
@property (nonatomic) <ULLogicServiceHandling> *serviceHandling;
@property (nonatomic, retain) NSUUID *serviceIdentifier;
@property (nonatomic, retain) NSString *signingIdentity;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)connectWithServiceIdentifier:(id)arg1 legacyServiceIdentifier:(id)arg2 andRequestIdentifier:(id)arg3;
- (id)connectionToken;
- (void)createCustomLocationOfInterestAtCurrentLocationWithConfiguration:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteServiceWithIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (id)description;
- (id)diagnosticsHandling;
- (void)disconnectWithRequestIdentifier:(id)arg1;
- (void)donateMicroLocationTruthTagWithTagUUID:(id)arg1 correspondingToTriggerUUID:(id)arg2 handler:(id /* block */)arg3;
- (void)donateMicroLocationTruthTagWithTagUUID:(id)arg1 forRecordingEventsBetweenDate:(id)arg2 andDate:(id)arg3 handler:(id /* block */)arg4;
- (void)exportDatabaseWithReply:(id /* block */)arg1;
- (void)getMicroLocationInternalVersionWithReply:(id /* block */)arg1;
- (void)getRecordingTriggerUUIDAndRequestMicroLocationRecordingScanWithAdditionalInformation:(id)arg1 shouldForceRecording:(bool)arg2 handler:(id /* block */)arg3;
- (id)initWithXPCConnection:(id)arg1 delegate:(id)arg2 serviceHandling:(id)arg3 legacyServiceHandling:(id)arg4 diagnosticsHandling:(id)arg5 queue:(id)arg6;
- (void)labelRequestIdentifier:(id)arg1 withPlaceIdentifier:(id)arg2 withReturnIdentifier:(id)arg3;
- (id)legacyServiceHandling;
- (void)purgeDatabaseWithReply:(id /* block */)arg1;
- (void)queryServicesWithReply:(id /* block */)arg1;
- (id)queue;
- (id)remoteObjectProxy;
- (void)removeCustomLocationOfInterestWithIdentifier:(id)arg1;
- (void)requestAllModelsLearningWithRequestIdentifier:(id)arg1;
- (void)requestCurrentMicroLocationWithAdditionalInformation:(id)arg1;
- (void)requestMicroLocationRecordingScanWithAdditionalInformation:(id)arg1;
- (void)requestObservationWithRequestIdentifier:(id)arg1;
- (void)requestPredictionWithRequestIdentifier:(id)arg1;
- (id)serviceHandling;
- (id)serviceIdentifier;
- (void)setConnectionToken:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiagnosticsHandling:(id)arg1;
- (void)setLegacyServiceHandling:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)setServiceHandling:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setSigningIdentity:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)signingIdentity;
- (void)startUpdatingWithConfiguration:(id)arg1 withRequestIdentifier:(id)arg2;
- (void)stopUpdatingWithRequestIdentifier:(id)arg1;
- (id)xpcConnection;

@end
