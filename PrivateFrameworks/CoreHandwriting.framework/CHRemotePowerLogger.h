/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHRemotePowerLogger : NSObject <CHPowerLogging> {
    NSXPCConnection * __connection;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_teardownXPCConnection;
- (id)connection;
- (void)dealloc;
- (void)executeLoggingRequest:(id)arg1;
- (void)logModelInference:(unsigned long long)arg1 startTimestamp:(double)arg2 endTimestamp:(double)arg3 data:(id)arg4;
- (void)logModelLoaded:(unsigned long long)arg1;
- (void)logModelUnloaded:(unsigned long long)arg1;
- (void)setupXPCConnectionIfNeeded;

@end