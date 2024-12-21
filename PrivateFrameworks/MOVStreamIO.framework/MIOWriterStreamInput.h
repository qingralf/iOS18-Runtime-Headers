/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface MIOWriterStreamInput : NSObject {
    MIOThread * _assignedWritingThread;
    NSMutableArray * _associatedInputs;
    unsigned long long  _avfAppendSignPostID;
    NSObject<OS_dispatch_queue> * _countingQueue;
    NSDictionary * _customMetadata;
    NSArray * _customMetadataItems;
    MIOFifoBuffer * _fifoBuffer;
    unsigned long long  _initFifoCapacity;
    id /* block */  _inputsAvailableHandler;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastAppendTimeStamp;
    int  _mediaTimeScale;
    long long  _mediaType;
    bool  _observingIsReadyStatus;
    long long  _pendingSamples;
    NSObject<OS_os_log> * _perfLogHandle;
    NSObject<OS_dispatch_queue> * _processingQueue;
    unsigned long long  _processingSignPostID;
    NSString * _streamId;
    long long  _threadingOption;
    bool  _useOwnProcessingQueue;
    bool  _useOwnWritingThread;
    NSString * _uuid;
    MIOWriter * _writer;
}

@property MIOThread *assignedWritingThread;
@property (nonatomic, readonly) NSArray *associatedInputs;
@property unsigned long long avfAppendSignPostID;
@property (nonatomic) unsigned long long bufferingCapacity;
@property (readonly) bool canAppend;
@property (readonly) bool canBeConfigured;
@property (readonly) NSObject<OS_dispatch_queue> *countingQueue;
@property (nonatomic, retain) NSDictionary *customMetadata;
@property (nonatomic, retain) NSArray *customMetadataItems;
@property (readonly) MIOFifoBuffer *fifoBuffer;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } lastAppendTimeStamp;
@property (readonly) AVAssetWriterInput *mainAVInput;
@property (nonatomic) int mediaTimeScale;
@property long long mediaType;
@property bool observingIsReadyStatus;
@property (readonly) long long pendingSamples;
@property (retain) NSObject<OS_os_log> *perfLogHandle;
@property (readonly) NSObject<OS_dispatch_queue> *processingQueue;
@property unsigned long long processingSignPostID;
@property (copy) NSString *streamId;
@property (nonatomic) long long threadingOption;
@property (readonly) NSArray *underlyingInputs;
@property (nonatomic) bool useOwnProcessingQueue;
@property (nonatomic) bool useOwnWritingThread;
@property (readonly) NSString *uuid;
@property MIOWriter *writer;

- (void).cxx_destruct;
- (id)allWriterInputs;
- (bool)areAllInputsReady;
- (id)assignedWritingThread;
- (id)associatedInputs;
- (unsigned long long)avfAppendSignPostID;
- (unsigned long long)bufferingCapacity;
- (bool)canAppend;
- (bool)canBeConfigured;
- (id)countingQueue;
- (id)customMetadata;
- (id)customMetadataItems;
- (bool)establishAssociationsWithError:(id*)arg1;
- (id)fifoBuffer;
- (bool)finalizeProcessing;
- (void)finishProcessing;
- (void)finishProcessingInDispatchGroup:(id)arg1;
- (id)init;
- (void)invalidate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastAppendTimeStamp;
- (id)mainAVInput;
- (int)mediaTimeScale;
- (long long)mediaType;
- (void)observeIsReadyStatus;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)observingIsReadyStatus;
- (void)onAVInputsAvailable:(id /* block */)arg1;
- (bool)pendSample;
- (long long)pendingSamples;
- (id)perfLogHandle;
- (bool)prepareForAppendWithTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 error:(id*)arg2;
- (void)prepareInputFinished;
- (bool)prepareInputWithWriter:(id)arg1 error:(id*)arg2;
- (id)processingQueue;
- (unsigned long long)processingSignPostID;
- (bool)registerForAssociating:(id)arg1 trackRelation:(id)arg2;
- (void)resolveSample;
- (void)setAssignedWritingThread:(id)arg1;
- (void)setAvfAppendSignPostID:(unsigned long long)arg1;
- (void)setBufferingCapacity:(unsigned long long)arg1;
- (void)setCustomMetadata:(id)arg1;
- (void)setCustomMetadataItems:(id)arg1;
- (void)setLastAppendTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setObservingIsReadyStatus:(bool)arg1;
- (void)setPerfLogHandle:(id)arg1;
- (void)setProcessingSignPostID:(unsigned long long)arg1;
- (void)setStreamId:(id)arg1;
- (void)setThreadingOption:(long long)arg1;
- (void)setUseOwnProcessingQueue:(bool)arg1;
- (void)setUseOwnWritingThread:(bool)arg1;
- (void)setWriter:(id)arg1;
- (bool)setupInputsWithWriter:(id)arg1 error:(id*)arg2;
- (void)setupSignPost;
- (bool)shutDownOutError:(id*)arg1;
- (id)stats;
- (void)stopObservingIsReadyStatus;
- (id)streamId;
- (bool)strictlyEnforceBufferCapacity;
- (long long)threadingOption;
- (id)underlyingInputs;
- (bool)useOwnProcessingQueue;
- (bool)useOwnWritingThread;
- (id)uuid;
- (bool)verifyNewAppendTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 error:(id*)arg2;
- (bool)writeNextItemFromFifo;
- (id)writer;

@end