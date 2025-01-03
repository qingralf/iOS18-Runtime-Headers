/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
 */

@interface MPSGraphExecutionDescriptor : MPSGraphObject {
    NSMutableArray * _anePowerWaitEvents;
    bool  _breakUpMetalEncoders;
    bool  _briefProfilingOpNames;
    MPSGraphCompilationDescriptor * _compilationDescriptor;
    id /* block */  _completionHandler;
    bool  _disableANECaching;
    bool  _disableANEFallback;
    bool  _disableSynchronizeResults;
    bool  _enableCommitAndContinue;
    bool  _enableProfilingOpNames;
    NSDictionary * _fileSymbolMap;
    bool  _generateRuntimeExecutionReport;
    unsigned long long  _maximumNumberOfEncodingThreads;
    id /* block */  _scheduledHandler;
    NSMutableArray * _signalEvents;
    bool  _simulateANECompileFailure;
    bool  _simulateANELoadModelFailure;
    NSMutableArray * _waitEvents;
    bool  _waitUntilCompleted;
}

@property bool breakUpMetalEncoders;
@property bool briefProfilingOpNames;
@property (copy) MPSGraphCompilationDescriptor *compilationDescriptor;
@property (copy) id /* block */ completionHandler;
@property bool disableANECaching;
@property bool disableANEFallback;
@property bool disableSynchronizeResults;
@property bool enableCommitAndContinue;
@property bool enableProfilingOpNames;
@property (retain) NSDictionary *fileSymbolMap;
@property bool generateRuntimeExecutionReport;
@property unsigned long long maximumNumberOfEncodingThreads;
@property (copy) id /* block */ scheduledHandler;
@property bool simulateANECompileFailure;
@property bool simulateANELoadModelFailure;
@property bool waitUntilCompleted;

- (void).cxx_destruct;
- (bool)breakUpMetalEncoders;
- (bool)briefProfilingOpNames;
- (id)compilationDescriptor;
- (id /* block */)completionHandler;
- (bool)disableANECaching;
- (bool)disableANEFallback;
- (bool)disableSynchronizeResults;
- (bool)enableCommitAndContinue;
- (bool)enableProfilingOpNames;
- (id)fileSymbolMap;
- (bool)generateRuntimeExecutionReport;
- (id)init;
- (unsigned long long)maximumNumberOfEncodingThreads;
- (id /* block */)scheduledHandler;
- (void)setBreakUpMetalEncoders:(bool)arg1;
- (void)setBriefProfilingOpNames:(bool)arg1;
- (void)setCompilationDescriptor:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDisableANECaching:(bool)arg1;
- (void)setDisableANEFallback:(bool)arg1;
- (void)setDisableSynchronizeResults:(bool)arg1;
- (void)setEnableCommitAndContinue:(bool)arg1;
- (void)setEnableProfilingOpNames:(bool)arg1;
- (void)setFileSymbolMap:(id)arg1;
- (void)setGenerateRuntimeExecutionReport:(bool)arg1;
- (void)setMaximumNumberOfEncodingThreads:(unsigned long long)arg1;
- (void)setScheduledHandler:(id /* block */)arg1;
- (void)setSimulateANECompileFailure:(bool)arg1;
- (void)setSimulateANELoadModelFailure:(bool)arg1;
- (void)setWaitUntilCompleted:(bool)arg1;
- (void)signalEvent:(id)arg1 atExecutionEvent:(unsigned long long)arg2 value:(unsigned long long)arg3;
- (bool)simulateANECompileFailure;
- (bool)simulateANELoadModelFailure;
- (void)waitForANEPrePowerUpEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)waitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (bool)waitUntilCompleted;

@end
