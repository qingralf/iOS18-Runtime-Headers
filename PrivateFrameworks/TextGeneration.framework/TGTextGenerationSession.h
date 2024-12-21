/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextGeneration.framework/TextGeneration
 */

@interface TGTextGenerationSession : NSObject <TGTextGenerationOperationDelegate> {
    NSMutableDictionary * _callbackByExecutionUUID;
    TGTextGenerationConfiguration * _configuration;
    <TGTextGenerationSessionDelegate> * _delegate;
    NSMutableDictionary * _operationByExecutionUUID;
    NSMutableDictionary * _outputStreamByExecutionUUID;
    <TGITextGenerationInference> * _textGeneration;
    <TGITextGenerationInferenceSession> * _tgdSession;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) NSMutableDictionary *callbackByExecutionUUID;
@property (readonly, copy) TGTextGenerationConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <TGTextGenerationSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableDictionary *operationByExecutionUUID;
@property (readonly) NSMutableDictionary *outputStreamByExecutionUUID;
@property (readonly) Class superclass;
@property (readonly) <TGITextGenerationInference> *textGeneration;
@property (retain) <TGITextGenerationInferenceSession> *tgdSession;
@property (readonly, copy) NSUUID *uuid;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)defaultTextGeneration;
+ (id)workQueue;

- (void).cxx_destruct;
- (id)callbackByExecutionUUID;
- (void)cancelOperation:(id)arg1;
- (id)configuration;
- (void)createTgdSessionSync;
- (id)delegate;
- (void)didStartOperationWithExecutionUUID:(id)arg1;
- (void)enqueueOperation:(id)arg1;
- (id)enqueueOperationSync:(id)arg1;
- (void)executeOperation:(id)arg1 callback:(id /* block */)arg2;
- (id)executionUUIDForOperation:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 textGeneration:(id)arg2;
- (void)operation:(id)arg1 didUpdateOutputStream:(id)arg2;
- (id)operationByExecutionUUID;
- (void)operationWithExecutionUUID:(id)arg1 didFailWithError:(id)arg2;
- (void)operationWithExecutionUUID:(id)arg1 didFinishWithOutputs:(id)arg2;
- (void)operationWithExecutionUUID:(id)arg1 didStreamOutput:(id)arg2;
- (id)outputStreamByExecutionUUID;
- (void)setDelegate:(id)arg1;
- (void)setTgdSession:(id)arg1;
- (id)textGeneration;
- (id)tgdSession;
- (id)uuid;
- (id)workQueue;

@end