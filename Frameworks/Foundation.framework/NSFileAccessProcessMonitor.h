/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileAccessProcessMonitor : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    RBSProcessMonitor * _monitor;
    NSMutableDictionary * _pidToProcessManagers;
}

+ (id)sharedInstance;

- (id)_init;
- (void)addProcessManager:(id)arg1 forPID:(int)arg2;
- (void)dealloc;
- (void)process:(id)arg1 receivedUpdate:(id)arg2;
- (bool)processWithPIDIsSuspended:(int)arg1;
- (void)removeProcessManager:(id)arg1 forPID:(int)arg2;
- (void)updateMonitorPredicate;

@end