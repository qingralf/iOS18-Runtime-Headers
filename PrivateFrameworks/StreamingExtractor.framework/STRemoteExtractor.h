/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StreamingExtractor.framework/StreamingExtractor
 */

@interface STRemoteExtractor : NSObject <NSCopying, STExtractionOriginatorProtocol, STExtractor> {
    bool  _dataStreamStarted;
    NSError * _error;
    NSXPCConnection * _extractionServiceConnection;
    ExtractionServiceInfo * _extractionServiceInfo;
    <STExtractorDelegate> * _extractorDelegate;
    bool  _finalBytesSent;
    STExtractionOriginator * _internalExtractionOriginator;
    NSObject<OS_dispatch_queue> * _ioQueue;
    bool  _isInvalid;
    bool  _isPrepared;
    unsigned long long  _lastResumptionOffset;
    NSMutableDictionary * _options;
    bool  _privileged;
    unsigned long long  _requiredExtractionMemory;
    NSObject<OS_dispatch_queue> * _reservationQueue;
    unsigned long long  _reservedExtractionMemory;
}

@property (nonatomic, retain) NSData *archiveID;
@property (nonatomic, retain) NSData *asymmetricDecryptionKey;
@property (nonatomic) bool dataStreamStarted;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool doesConsumeExtractedData;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) NSXPCConnection *extractionServiceConnection;
@property (nonatomic, readonly) ExtractionServiceInfo *extractionServiceInfo;
@property (nonatomic) <STExtractorDelegate> *extractorDelegate;
@property (nonatomic) bool finalBytesSent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) STExtractionOriginator *internalExtractionOriginator;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *ioQueue;
@property (nonatomic) bool isInvalid;
@property (nonatomic) bool isPrepared;
@property (nonatomic) unsigned long long lastResumptionOffset;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, retain) NSString *pluginBundlePath;
@property (nonatomic, retain) NSString *pluginDirectory;
@property (nonatomic) bool privileged;
@property (nonatomic) unsigned long long requiredExtractionMemory;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *reservationQueue;
@property (nonatomic) unsigned long long reservedExtractionMemory;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic, retain) NSData *signingPublicKey;
@property (nonatomic, retain) NSString *sourceDirectory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suppressCompletionsDuringShutdown;
@property (nonatomic, retain) NSData *symmetricDecryptionKey;

+ (id)STAEAExtractorWithOptions:(id)arg1;
+ (id)fullReplacementSTAEAExtractor:(id)arg1;
+ (id)incrementalPatchSTAEAExtractor:(id)arg1 srcDirectory:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_checkForInvalidExtractionMemoryReservation;
- (void)_invalidate;
- (void)_releaseExtractionMemory;
- (id)_reserveExtractionMemory;
- (void)_sendData:(id)arg1 completion:(id /* block */)arg2;
- (id)archiveID;
- (id)asymmetricDecryptionKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createOutputDir:(id)arg1;
- (bool)dataStreamStarted;
- (void)dealloc;
- (bool)doesConsumeExtractedData;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)extractionServiceConnection;
- (id)extractionServiceInfo;
- (id)extractorDelegate;
- (bool)finalBytesSent;
- (void)finishStreamWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (id)internalExtractionOriginator;
- (id)ioQueue;
- (bool)isInvalid;
- (bool)isPrepared;
- (unsigned long long)lastResumptionOffset;
- (id)options;
- (id)pluginBundlePath;
- (id)pluginDirectory;
- (void)prepareForExtractionToPath:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)privileged;
- (void)remote_extractionCompleteAtArchivePath:(id)arg1;
- (void)remote_extractionEnteredPassthroughMode;
- (void)remote_setExtractionProgress:(double)arg1;
- (unsigned long long)requiredExtractionMemory;
- (id)reservationQueue;
- (unsigned long long)reservedExtractionMemory;
- (id)sessionID;
- (void)setArchiveID:(id)arg1;
- (void)setAsymmetricDecryptionKey:(id)arg1;
- (void)setDataStreamStarted:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setExtractorDelegate:(id)arg1;
- (void)setFinalBytesSent:(bool)arg1;
- (void)setIsInvalid:(bool)arg1;
- (void)setIsPrepared:(bool)arg1;
- (void)setLastResumptionOffset:(unsigned long long)arg1;
- (void)setOption:(id)arg1 forKey:(id)arg2;
- (void)setPluginBundlePath:(id)arg1;
- (void)setPluginDirectory:(id)arg1;
- (void)setPrivileged:(bool)arg1;
- (void)setRequiredExtractionMemory:(unsigned long long)arg1;
- (void)setReservedExtractionMemory:(unsigned long long)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSigningPublicKey:(id)arg1;
- (void)setSourceDirectory:(id)arg1;
- (bool)setSourceDirectory:(id)arg1 sandboxExtension:(id)arg2;
- (void)setSymmetricDecryptionKey:(id)arg1;
- (id)signingPublicKey;
- (id)sourceDirectory;
- (void)supplyBytes:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (bool)suppressCompletionsDuringShutdown;
- (void)suspendStreamWithCompletionBlock:(id /* block */)arg1;
- (id)symmetricDecryptionKey;
- (void)terminateStreamWithError:(id)arg1 completionBlock:(id /* block */)arg2;

@end
