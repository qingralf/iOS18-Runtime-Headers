/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreEmbeddedSpeechRecognition.framework/CoreEmbeddedSpeechRecognition
 */

@interface CESRSpeechProfileAdminXPCServiceWrapper : NSObject <CESRSpeechProfileAdminService, CESRSpeechProfileAdminServiceProvider> {
    CESRSpeechProfileAdminXPCServiceBridge * _xpcServiceBridge;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adminService;
- (oneway void)beginEvaluation:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)beginEvaluationWithSerializedSets:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)endEvaluation:(id /* block */)arg1;
- (id)init;
- (oneway void)rebuildSpeechProfileForUserId:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)triggerMaintenance:(bool)arg1 completion:(id /* block */)arg2;

@end
