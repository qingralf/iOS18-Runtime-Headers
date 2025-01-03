/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceTrace.framework/PerformanceTrace
 */

@interface PTTraceConfig : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _callstackSamplingRateMS;
    bool  _compressWhenFinished;
    NSXPCConnection * _connection;
    bool  _enableSwiftUITracing;
    bool  _includeKernelStacks;
    bool  _includeOSLogs;
    bool  _includeOSSignposts;
    unsigned int  _kernelBufferDrainQoS;
    unsigned long long  _kernelBufferDrainRateMS;
    unsigned long long  _kernelBufferSizeMB;
    bool  _overrideIncludeOSLogs;
    bool  _overrideIncludeOSSignposts;
    bool  _overrideSymbolicate;
    NSString * _ownerName;
    int  _ownerPID;
    NSString * _planNameOrPath;
    bool  _skipNotification;
    unsigned long long  _source;
    bool  _symbolicate;
    NSURL * _traceDirectoryURL;
    unsigned long long  _traceDurationSecs;
    NSMutableArray * _traceGroups;
    NSString * _traceName;
    unsigned long long  _traceTimeoutS;
    unsigned long long  _traceType;
    NSObject<OS_os_transaction> * _tracingActiveTransaction;
    bool  _useTraceRecord;
}

@property (nonatomic) unsigned long long callstackSamplingRateMS;
@property (nonatomic) bool compressWhenFinished;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) bool enableSwiftUITracing;
@property (nonatomic) bool includeKernelStacks;
@property (nonatomic) bool includeOSLogs;
@property (nonatomic) bool includeOSSignposts;
@property (nonatomic) unsigned int kernelBufferDrainQoS;
@property (nonatomic) unsigned long long kernelBufferDrainRateMS;
@property (nonatomic) unsigned long long kernelBufferSizeMB;
@property (nonatomic) bool overrideIncludeOSLogs;
@property (nonatomic) bool overrideIncludeOSSignposts;
@property (nonatomic) bool overrideSymbolicate;
@property (nonatomic, retain) NSString *ownerName;
@property (nonatomic) int ownerPID;
@property (nonatomic, retain) NSString *planNameOrPath;
@property (nonatomic) bool skipNotification;
@property (nonatomic) unsigned long long source;
@property (nonatomic) bool symbolicate;
@property (nonatomic, retain) NSURL *traceDirectoryURL;
@property (nonatomic) unsigned long long traceDurationSecs;
@property (nonatomic, retain) NSMutableArray *traceGroups;
@property (nonatomic, retain) NSString *traceName;
@property (nonatomic) unsigned long long traceTimeoutS;
@property (nonatomic) unsigned long long traceType;
@property (nonatomic, retain) NSObject<OS_os_transaction> *tracingActiveTransaction;
@property (nonatomic) bool useTraceRecord;

+ (id)_defaultTraceRecordConfig;
+ (id)configWithDictionary:(id)arg1;
+ (id)configWithTemplate:(unsigned long long)arg1;
+ (id)configWithTracePlanName:(id)arg1;
+ (id)configWithTracePlanURL:(id)arg1;
+ (id)getCurrentConfig;
+ (bool)resetConfig;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_getRemoteObjectProxy;
- (void)_initConnection;
- (void)_invalidateSession;
- (unsigned long long)callstackSamplingRateMS;
- (bool)compressWhenFinished;
- (id)connection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enableSwiftUITracing;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeKernelStacks;
- (bool)includeOSLogs;
- (bool)includeOSSignposts;
- (id)initWithCoder:(id)arg1;
- (unsigned int)kernelBufferDrainQoS;
- (unsigned long long)kernelBufferDrainRateMS;
- (unsigned long long)kernelBufferSizeMB;
- (bool)overrideIncludeOSLogs;
- (bool)overrideIncludeOSSignposts;
- (bool)overrideSymbolicate;
- (id)ownerName;
- (int)ownerPID;
- (id)planNameOrPath;
- (void)setCallstackSamplingRateMS:(unsigned long long)arg1;
- (void)setCompressWhenFinished:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setEnableSwiftUITracing:(bool)arg1;
- (void)setIncludeKernelStacks:(bool)arg1;
- (void)setIncludeOSLogs:(bool)arg1;
- (void)setIncludeOSSignposts:(bool)arg1;
- (void)setKernelBufferDrainQoS:(unsigned int)arg1;
- (void)setKernelBufferDrainRateMS:(unsigned long long)arg1;
- (void)setKernelBufferSizeMB:(unsigned long long)arg1;
- (void)setOverrideIncludeOSLogs:(bool)arg1;
- (void)setOverrideIncludeOSSignposts:(bool)arg1;
- (void)setOverrideSymbolicate:(bool)arg1;
- (void)setOwnerName:(id)arg1;
- (void)setOwnerPID:(int)arg1;
- (void)setPlanNameOrPath:(id)arg1;
- (void)setSkipNotification:(bool)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setSymbolicate:(bool)arg1;
- (void)setTraceDirectoryURL:(id)arg1;
- (void)setTraceDurationSecs:(unsigned long long)arg1;
- (void)setTraceGroups:(id)arg1;
- (void)setTraceName:(id)arg1;
- (void)setTraceTimeoutS:(unsigned long long)arg1;
- (void)setTraceType:(unsigned long long)arg1;
- (void)setTracingActiveTransaction:(id)arg1;
- (void)setUseTraceRecord:(bool)arg1;
- (bool)skipNotification;
- (unsigned long long)source;
- (bool)storeConfig;
- (bool)symbolicate;
- (id)traceDirectoryURL;
- (unsigned long long)traceDurationSecs;
- (id)traceGroups;
- (id)traceName;
- (unsigned long long)traceTimeoutS;
- (unsigned long long)traceType;
- (id)tracingActiveTransaction;
- (bool)useTraceRecord;
- (bool)validateConfig;

@end
