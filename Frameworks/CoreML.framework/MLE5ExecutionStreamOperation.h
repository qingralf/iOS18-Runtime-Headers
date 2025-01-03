/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLE5ExecutionStreamOperation : NSObject {
    NSError * _asyncSubmissionError;
    struct unique_ptr<e5rt_async_event, MLE5ObjectDeleter<e5rt_async_event>> { 
        struct __compressed_pair<e5rt_async_event *, MLE5ObjectDeleter<e5rt_async_event>> { 
            struct e5rt_async_event {} *__value_; 
        } __ptr_; 
    }  _cachedWaitEvent;
    <MTLSharedEvent> * _completionSharedEventBoundToESOP;
    NSString * _debugLabel;
    NSString * _functionName;
    NSArray * _inputPorts;
    MLModelConfiguration * _modelConfiguration;
    MLModelDescription * _modelDescription;
    unsigned long long  _modelSignpostId;
    struct e5rt_execution_stream_operation { } * _operationHandle;
    NSArray * _outputPorts;
    MLPixelBufferPool * _pixelBufferPool;
    MLE5ProgramLibrary * _programLibrary;
    NSString * _shapeHash;
    long long  _state;
    NSArray * _statePorts;
    IOSurfaceSharedEventListener * _waitEventListener;
    NSArray * _waitSharedEventsBoundToESOP;
}

@property (nonatomic, retain) NSError *asyncSubmissionError;
@property (nonatomic, retain) <MTLSharedEvent> *completionSharedEventBoundToESOP;
@property (nonatomic, readonly, copy) NSString *debugLabel;
@property (nonatomic, readonly, copy) NSArray *directlyBoundInputFeatureNames;
@property (nonatomic, readonly, copy) NSArray *directlyBoundOutputFeatureNames;
@property (readonly, copy) NSString *functionName;
@property (nonatomic, copy) NSArray *inputPorts;
@property (nonatomic, readonly) MLModelConfiguration *modelConfiguration;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, readonly) unsigned long long modelSignpostId;
@property (nonatomic) struct e5rt_execution_stream_operation { }*operationHandle;
@property (nonatomic, readonly) <MLFeatureProvider> *outputFeatures;
@property (nonatomic, copy) NSArray *outputPorts;
@property (nonatomic, retain) MLPixelBufferPool *pixelBufferPool;
@property (nonatomic, readonly) MLE5ProgramLibrary *programLibrary;
@property (copy) NSString *shapeHash;
@property (nonatomic) long long state;
@property (nonatomic, copy) NSArray *statePorts;
@property (nonatomic, readonly) IOSurfaceSharedEventListener *waitEventListener;
@property (nonatomic, copy) NSArray *waitSharedEventsBoundToESOP;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_bindCompletionSyncPointDirectlyIfPossile:(id)arg1;
- (void)_bindEventToWaitForCopyingInputFeatures:(id)arg1 afterSyncPoints:(id)arg2;
- (bool)_bindInputFeaturesAndWaitEvents:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)_bindNewCompletionEventsDirectlyWithCompletionSyncPoint:(id)arg1;
- (void)_bindNewWaitEventsDirectlyWithWaitSyncPoints:(id)arg1;
- (bool)_bindOutputPortsWithOptions:(id)arg1 error:(id*)arg2;
- (void)_bindWaitEventsDirectly:(id)arg1;
- (bool)_copyInputFeatures:(id)arg1 error:(id*)arg2;
- (struct e5rt_execution_stream_operation { }*)_createOperationAndReturnError:(id*)arg1;
- (struct e5rt_execution_stream_operation { }*)_createOperationWithRetryCount:(long long)arg1 error:(id*)arg2;
- (id)_directlyBoundFeatureNamesForPorts:(id)arg1;
- (id)_inoutPortNames;
- (id)_inputPortNames;
- (id)_multiArrayFeatureFromStateFeature:(id)arg1;
- (id)_newArrayOfInoutPorts:(id)arg1 featureDescriptionsByName:(id)arg2 error:(id*)arg3;
- (id)_newArrayOfInputPorts:(id)arg1 featureDescriptionsByName:(id)arg2 error:(id*)arg3;
- (id)_newArrayOfOutputPorts:(id)arg1 featureDescriptionsByName:(id)arg2 error:(id*)arg3;
- (id)_outputPortNames;
- (bool)_prepareInputPortsForFeatures:(id)arg1 error:(id*)arg2;
- (bool)_reusableForCompletionSyncPoint:(id)arg1 allOutputBackingsUseDirectBinding:(bool)arg2;
- (bool)_reusableForWaitSyncPoints:(id)arg1 allInputsUseDirectBinding:(bool)arg2;
- (void)_updateCompletionEventFutureValuesWithCompletionSyncPoint:(id)arg1;
- (void)_updateWaitEventFutureValuesWithWaitSyncPoints:(id)arg1;
- (id)asyncSubmissionError;
- (id)completionSharedEventBoundToESOP;
- (void)dealloc;
- (id)debugLabel;
- (id)directlyBoundInputFeatureNames;
- (id)directlyBoundOutputFeatureNames;
- (id)functionName;
- (id)initWithProgramLibrary:(id)arg1 functionName:(id)arg2 modelDescription:(id)arg3 configuration:(id)arg4 debugLabel:(id)arg5 modelSignpostId:(unsigned long long)arg6;
- (id)inputPorts;
- (id)modelConfiguration;
- (id)modelDescription;
- (unsigned long long)modelSignpostId;
- (struct e5rt_execution_stream_operation { }*)operationHandle;
- (id)outputFeatures;
- (id)outputPorts;
- (id)pixelBufferPool;
- (bool)preloadAndReturnError:(id*)arg1;
- (bool)prepareAsyncSubmissionForInputFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)prepareForInputFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)programLibrary;
- (void)reset;
- (bool)reusableForInputFeatures:(id)arg1 options:(id)arg2;
- (void)setAsyncSubmissionError:(id)arg1;
- (void)setCompletionSharedEventBoundToESOP:(id)arg1;
- (void)setInputPorts:(id)arg1;
- (void)setOperationHandle:(struct e5rt_execution_stream_operation { }*)arg1;
- (void)setOutputPorts:(id)arg1;
- (void)setPixelBufferPool:(id)arg1;
- (void)setShapeHash:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStatePorts:(id)arg1;
- (void)setWaitSharedEventsBoundToESOP:(id)arg1;
- (id)shapeHash;
- (long long)state;
- (id)statePorts;
- (id)waitEventListener;
- (id)waitSharedEventsBoundToESOP;

@end
