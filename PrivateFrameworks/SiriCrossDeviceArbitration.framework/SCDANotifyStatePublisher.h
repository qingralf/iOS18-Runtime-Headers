/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriCrossDeviceArbitration.framework/SiriCrossDeviceArbitration
 */

@interface SCDANotifyStatePublisher : NSObject {
    char * _name;
    NSObject<OS_dispatch_queue> * _queue;
    int  _registrationToken;
}

- (void).cxx_destruct;
- (bool)_getState:(unsigned long long*)arg1 withToken:(int)arg2;
- (void)_notifyWithState:(unsigned long long)arg1;
- (void)_register;
- (bool)_setState:(unsigned long long)arg1 withToken:(int)arg2;
- (void)_unregister;
- (void)dealloc;
- (id)initWithName:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)publishState:(unsigned long long)arg1;
- (void)publishStateWithBlock:(id /* block */)arg1;

@end
