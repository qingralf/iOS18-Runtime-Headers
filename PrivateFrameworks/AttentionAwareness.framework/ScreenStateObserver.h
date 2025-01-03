/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface ScreenStateObserver : NSObject <BLSBacklightStateObserving> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _displayState;
    <ScreenStateObserving> * _observer;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)backlight:(id)arg1 performingEvent:(id)arg2;
- (id)initWithCallbackQueue:(id)arg1 observer:(id)arg2;

@end
