/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

@interface AeroMLTracerSpan : NSObject {
    unsigned long long  _intervalId;
    bool  _isEnded;
    bool  _isStarted;
    AeroMLTracerSpanEvent * _spanEvent;
    AeroMLTracerSession * _traceSession;
}

@property (nonatomic) unsigned long long intervalId;
@property (nonatomic) bool isEnded;
@property (nonatomic) bool isStarted;
@property (nonatomic, retain) AeroMLTracerSpanEvent *spanEvent;
@property (nonatomic, retain) AeroMLTracerSession *traceSession;

- (void).cxx_destruct;
- (void)addAttributes:(id)arg1;
- (void)addDeviceIdentifier:(id)arg1;
- (void)addTrialDeploymentId:(id)arg1 trialExperimentId:(id)arg2 trialTreatmentId:(id)arg3;
- (id)createSubEventWithName:(id)arg1 details:(id)arg2 attributes:(id)arg3;
- (id)createSubSpanWithName:(id)arg1;
- (void)emitPETEvent;
- (void)end;
- (unsigned int)getMonotonicTimeInMilliseconds;
- (id)getProcessName;
- (id)getSpanId;
- (id)getSpanIdFromIntervalId:(unsigned long long)arg1;
- (id)initSpanWithSpanName:(id)arg1 traceSession:(id)arg2 parentSpanId:(id)arg3;
- (unsigned long long)intervalId;
- (bool)isEnded;
- (bool)isStarted;
- (void)logDebugEventWithName:(id)arg1 details:(id)arg2 attributes:(id)arg3;
- (void)logErrorEventWithName:(id)arg1 details:(id)arg2 attributes:(id)arg3;
- (void)logErrorMessageWithCA:(id)arg1;
- (void)logInfoEventWithName:(id)arg1 details:(id)arg2 attributes:(id)arg3;
- (void)logInfoMessageWithCA:(id)arg1;
- (void)logSchedulingInformation;
- (id)serializeAttributes:(id)arg1;
- (void)setIntervalId:(unsigned long long)arg1;
- (void)setIsEnded:(bool)arg1;
- (void)setIsStarted:(bool)arg1;
- (void)setSpanEvent:(id)arg1;
- (void)setTraceSession:(id)arg1;
- (id)spanEvent;
- (void)start;
- (id)stringForQoSClass:(unsigned int)arg1;
- (id)traceSession;

@end
