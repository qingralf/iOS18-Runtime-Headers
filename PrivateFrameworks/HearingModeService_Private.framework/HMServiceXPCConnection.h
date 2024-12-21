/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HearingModeService_Private.framework/HearingModeService_Private
 */

@interface HMServiceXPCConnection : NSObject <HMServiceXPCDaemonInterface> {
    bool  _audiogramsReported;
    HMServiceDaemon * _daemon;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _entitled;
    HMServiceClient * _hearingModeClient;
    NSMutableDictionary * _records;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic) bool audiogramsReported;
@property (nonatomic, retain) HMServiceDaemon *daemon;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) bool entitled;
@property (nonatomic, retain) HMServiceClient *hearingModeClient;
@property (retain) NSMutableDictionary *records;
@property (nonatomic, retain) NSXPCConnection *xpcCnx;

- (void).cxx_destruct;
- (bool)_entitledAndReturnError:(id*)arg1;
- (bool)audiogramsReported;
- (void)clientActivate:(id)arg1 completion:(id /* block */)arg2;
- (void)clientFetchOcclusionResultForDeviceIdentifier:(id)arg1 featureID:(int)arg2 completion:(id /* block */)arg3;
- (void)clientModifyDeviceConfig:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)clientReportDiagnosticRecord:(id)arg1;
- (void)clientReportHMDeviceRecordChanged:(id)arg1;
- (void)clientReportHMDeviceRecordLost:(id)arg1;
- (void)clientReportValidAudiograms:(id)arg1 invalidAudiograms:(id)arg2 error:(id)arg3;
- (void)clientSetOcclusionIndicationShownForDeviceAddress:(id)arg1 featureID:(int)arg2 type:(int)arg3 action:(int)arg4;
- (void)clientTriggerFetchAudiograms:(id)arg1 completion:(id /* block */)arg2;
- (void)clientTriggerOnDemandDiagnosticCheckForDeviceIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)daemon;
- (id)dispatchQueue;
- (bool)entitled;
- (id)hearingModeClient;
- (id)records;
- (void)setAudiogramsReported:(bool)arg1;
- (void)setDaemon:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEntitled:(bool)arg1;
- (void)setHearingModeClient:(id)arg1;
- (void)setRecords:(id)arg1;
- (void)setXpcCnx:(id)arg1;
- (id)xpcCnx;
- (void)xpcConnectionInvalidated;

@end