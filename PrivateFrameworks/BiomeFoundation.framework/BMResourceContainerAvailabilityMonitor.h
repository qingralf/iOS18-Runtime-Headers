/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeFoundation.framework/BiomeFoundation
 */

@interface BMResourceContainerAvailabilityMonitor : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSHashTable *observers;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_startUserVaultMonitoringSession;
- (void)_stopUserVaultMonitoringSession;
- (void)addObserver:(id)arg1 forContainerType:(unsigned char)arg2;
- (id)initWithQueue:(id)arg1;
- (id)observers;
- (void)removeObserver:(id)arg1 forContainerType:(unsigned char)arg2;
- (void)setObservers:(id)arg1;

@end