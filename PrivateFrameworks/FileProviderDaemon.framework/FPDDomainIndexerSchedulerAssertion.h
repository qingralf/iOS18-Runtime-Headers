/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDDomainIndexerSchedulerAssertion : NSObject <FPDProcessMonitorDelegate, FPIndexingAssertion> {
    bool  _forceForeground;
    FPDProcessMonitor * _monitor;
    int  _pid;
    id /* block */  _unregisterForceRunning;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPID:(int)arg1 forceForeground:(bool)arg2;
- (void)processMonitor:(id)arg1 didBecomeForeground:(bool)arg2;
- (void)start;
- (void)stop;

@end
