/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BacklightServicesHost.framework/BacklightServicesHost
 */

@interface BLSHWaiterForBacklightState : BLSHWaiterForBacklight {
    long long  _backlightState;
    id /* block */  _predicate;
}

- (void).cxx_destruct;
- (void)backlight:(id)arg1 didCompleteUpdateToState:(long long)arg2 forEvents:(id)arg3 abortedEvents:(id)arg4;
- (id)initWithBacklightState:(long long)arg1;
- (id)initWithPredicate:(id /* block */)arg1;
- (bool)isAlreadyAtDesiredState;
- (bool)isDesiredState:(long long)arg1;

@end
