/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostEvent : SignpostObject <SignpostSupportLoggingSupportArchiveEvent> {
    bool  __hasTotalSkyLightCompositeCount;
    unsigned long long  __machContinuousTimestamp;
    unsigned long long  __totalSkyLightCompositeCount;
    unsigned long long  _animationType;
    unsigned long long  _eventType;
    bool  _isAnimationStart;
    NSString * _metadata;
    NSArray * _metadataSegments;
    SignpostMetrics * _metrics;
    unsigned long long  _overridingBeginMachContinuousTime;
    unsigned long long  _overridingEmitMachContinuousTime;
    unsigned long long  _overridingEndMachContinuousTime;
    int  _processID;
    NSString * _processImagePath;
    NSUUID * _processImageUUID;
    NSString * _processName;
    unsigned long long  _processUniqueID;
    NSString * _senderImagePath;
    NSUUID * _senderImageUUID;
    NSArray * _stackFrames;
    unsigned long long  _threadID;
    long long  _tv_sec;
    int  _tv_usec;
    int  _tz_dsttime;
    int  _tz_minuteswest;
}

@property (nonatomic) bool _hasTotalSkyLightCompositeCount;
@property (nonatomic, readonly) NSString *_key;
@property (nonatomic) unsigned long long _machContinuousTimestamp;
@property (nonatomic, readonly) bool _overridesOwnTime;
@property (nonatomic, readonly) unsigned long long _resolvedEventType;
@property (nonatomic) unsigned long long _totalSkyLightCompositeCount;
@property (nonatomic) unsigned long long animationType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAnimationStart;
@property (nonatomic, readonly) bool isGenerator;
@property (nonatomic, readonly) bool isSyntheticIntervalEvent;
@property (nonatomic, retain) NSString *metadata;
@property (nonatomic, retain) NSArray *metadataSegments;
@property (nonatomic, readonly) SignpostMetrics *metrics;
@property (nonatomic, readonly) bool overridesBeginTime;
@property (nonatomic, readonly) bool overridesEmitTime;
@property (nonatomic, readonly) bool overridesEndTime;
@property (nonatomic, readonly) bool overridesTime;
@property (nonatomic) unsigned long long overridingBeginMachContinuousTime;
@property (nonatomic, readonly) unsigned long long overridingBeginNanoseconds;
@property (nonatomic) unsigned long long overridingEmitMachContinuousTime;
@property (nonatomic, readonly) unsigned long long overridingEmitNanoseconds;
@property (nonatomic) unsigned long long overridingEndMachContinuousTime;
@property (nonatomic, readonly) unsigned long long overridingEndNanoseconds;
@property (nonatomic) int processID;
@property (nonatomic, retain) NSString *processImagePath;
@property (nonatomic, retain) NSUUID *processImageUUID;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic) unsigned long long processUniqueID;
@property (nonatomic, retain) NSString *senderImagePath;
@property (nonatomic, retain) NSUUID *senderImageUUID;
@property (nonatomic, retain) NSArray *stackFrames;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long threadID;
@property (nonatomic, readonly) unsigned long long timeRecordedMachContinuousTime;
@property (nonatomic, readonly) unsigned long long timeRecordedNanoseconds;
@property (nonatomic) long long tv_sec;
@property (nonatomic) int tv_usec;
@property (nonatomic) int tz_dsttime;
@property (nonatomic) int tz_minuteswest;

// Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport

+ (id)_generatedEventArrayForEvent:(id)arg1;
+ (id)_generatedEventFromMetadata:(id)arg1 generatorEvent:(id)arg2;
+ (id)_nameStringFromFormatPrefix:(id)arg1;
+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (void)_adjustBeginTimeVal:(struct timeval { long long x1; int x2; }*)arg1;
- (void)_adjustEndTimeVal:(struct timeval { long long x1; int x2; }*)arg1;
- (void)_adjustTimeStruct:(struct timeval { long long x1; int x2; }*)arg1 asBegin:(bool)arg2;
- (id)_argumentObjectWithName:(id)arg1;
- (id)_argumentObjectWithName:(id)arg1 expectedClass:(Class)arg2;
- (id)_dataArgumentWithName:(id)arg1;
- (id)_debugDescription:(bool)arg1;
- (id)_descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 asBegin:(bool)arg3;
- (id)_dictionaryRepresentationWithIsHumanReadable:(bool)arg1 shouldRedact:(bool)arg2;
- (bool)_hasTotalSkyLightCompositeCount;
- (id)_key;
- (unsigned long long)_machContinuousTimestamp;
- (id)_nameStringFromSegment:(id)arg1;
- (id)_numberArgumentWithName:(id)arg1;
- (bool)_overridesOwnTime;
- (void)_populateMetrics;
- (unsigned long long)_resolvedBeginTime;
- (unsigned long long)_resolvedEndTime;
- (unsigned long long)_resolvedEventType;
- (id)_stringArgumentWithName:(id)arg1;
- (unsigned long long)_totalSkyLightCompositeCount;
- (unsigned long long)animationType;
- (id)debugDescription;
- (unsigned long long)durationMachContinuousTime;
- (float)durationSeconds;
- (unsigned long long)endMachContinuousTime;
- (unsigned long long)eventType;
- (id)humanReadableType;
- (id)initWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1 beginMct:(unsigned long long)arg2 endMct:(unsigned long long)arg3 emitMct:(unsigned long long)arg4 signpostId:(unsigned long long)arg5 generatorEvent:(id)arg6;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 timebaseRatio:(double)arg3 unixDate:(struct timeval { long long x1; int x2; }*)arg4 unixTimeZone:(struct timezone { int x1; int x2; }*)arg5 stackFrames:(id)arg6;
- (bool)isAnimationStart;
- (bool)isEqual:(id)arg1;
- (bool)isGenerator;
- (bool)isSyntheticIntervalEvent;
- (id)metadata;
- (id)metadataSegments;
- (id)metadataSegmentsWithPlaceholderToken:(id)arg1;
- (id)metadataSegmentsWithPlaceholderTokenKey:(id)arg1 value:(id)arg2;
- (id)metrics;
- (bool)overridesBeginTime;
- (bool)overridesEmitTime;
- (bool)overridesEndTime;
- (bool)overridesTime;
- (unsigned long long)overridingBeginMachContinuousTime;
- (unsigned long long)overridingBeginNanoseconds;
- (unsigned long long)overridingEmitMachContinuousTime;
- (unsigned long long)overridingEmitNanoseconds;
- (unsigned long long)overridingEndMachContinuousTime;
- (unsigned long long)overridingEndNanoseconds;
- (id)placeholderTokenValueDictForTokenKey:(id)arg1;
- (int)processID;
- (id)processImagePath;
- (id)processImageUUID;
- (id)processName;
- (unsigned long long)processUniqueID;
- (id)senderImagePath;
- (id)senderImageUUID;
- (void)setAnimationType:(unsigned long long)arg1;
- (void)setAnimationTypeFromRawMetadata:(id)arg1;
- (void)setEventType:(unsigned long long)arg1;
- (void)setIsAnimationStart:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadataSegments:(id)arg1;
- (void)setOverridingBeginMachContinuousTime:(unsigned long long)arg1;
- (void)setOverridingEmitMachContinuousTime:(unsigned long long)arg1;
- (void)setOverridingEndMachContinuousTime:(unsigned long long)arg1;
- (void)setProcessID:(int)arg1;
- (void)setProcessImagePath:(id)arg1;
- (void)setProcessImageUUID:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setProcessUniqueID:(unsigned long long)arg1;
- (void)setSenderImagePath:(id)arg1;
- (void)setSenderImageUUID:(id)arg1;
- (void)setStackFrames:(id)arg1;
- (void)setThreadID:(unsigned long long)arg1;
- (void)setTv_sec:(long long)arg1;
- (void)setTv_usec:(int)arg1;
- (void)setTz_dsttime:(int)arg1;
- (void)setTz_minuteswest:(int)arg1;
- (void)set_hasTotalSkyLightCompositeCount:(bool)arg1;
- (void)set_machContinuousTimestamp:(unsigned long long)arg1;
- (void)set_totalSkyLightCompositeCount:(unsigned long long)arg1;
- (id)stackFrames;
- (unsigned long long)startMachContinuousTime;
- (unsigned long long)threadID;
- (unsigned long long)timeRecordedMachContinuousTime;
- (unsigned long long)timeRecordedNanoseconds;
- (long long)tv_sec;
- (int)tv_usec;
- (int)tz_dsttime;
- (int)tz_minuteswest;

// Image: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection

- (void)_checkForFormatStringFlags:(id)arg1 shouldCompose:(bool)arg2;
- (void)_handleSignpostDescriptionPlaceholder:(id)arg1;
- (void)_handleSignpostTelemetryPlaceholder:(id)arg1;
- (void)_parseMetadataSegments:(bool)arg1;
- (id)initWithOSLogEventProxy:(id)arg1 timebaseRatio:(double)arg2 shouldCompose:(bool)arg3;

@end