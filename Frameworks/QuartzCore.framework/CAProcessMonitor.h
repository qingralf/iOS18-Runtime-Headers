/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAProcessMonitor : NSObject {
    id /* block */  _callback;
    NSMutableSet * _processIdentifiers;
    RBSProcessMonitor * _processMonitor;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void)addMonitoringProcess:(int)arg1;
- (void)dealloc;
- (id)initWithCallback:(id /* block */)arg1;
- (void)removeMonitoringProcess:(int)arg1;
- (void)updateConfiguration;

@end
