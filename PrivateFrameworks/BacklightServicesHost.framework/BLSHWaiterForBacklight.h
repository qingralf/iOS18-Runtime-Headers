/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BacklightServicesHost.framework/BacklightServicesHost
 */

@interface BLSHWaiterForBacklight : NSObject <BLSHBacklightHostObserving, BSInvalidatable> {
    id /* block */  _completion;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_invalidated;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)waitForBacklightDisplayMode:(long long)arg1;
+ (id)waitForBacklightDisplayModePassingTest:(id /* block */)arg1;
+ (id)waitForBacklightState:(long long)arg1;
+ (id)waitForBacklightStatePassingTest:(id /* block */)arg1;
+ (id)waitForBlanked;
+ (id)waitForUnblanked;

- (void).cxx_destruct;
- (void)_main_callCompletion;
- (void)_main_waitWithCompletion:(id /* block */)arg1;
- (void)callCompletion;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (bool)isAlreadyAtDesiredState;
- (bool)isInvalidated;
- (void)waitWithCompletion:(id /* block */)arg1;

@end