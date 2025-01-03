/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACKeyBagMKBAdapter : NSObject <LACDarwinNotificationCenterObserver, LACKeyBag> {
    LACKeyBagStateProviderMKBAdapter * _keyBagStateProvider;
    LACDarwinNotificationCenter * _notificationCenter;
    LACKeyBagObserverCollection * _observers;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addKeybagStatusObserver;
- (void)_removeKeybagStatusObserver;
- (void)_updateKeybagState;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithKeyBagStateProvider:(id)arg1 notificationCenter:(id)arg2;
- (id)initWithUserId:(unsigned int)arg1;
- (void)notificationCenter:(id)arg1 didReceiveNotification:(struct __CFString { }*)arg2;
- (void)removeObserver:(id)arg1;
- (long long)state;

@end
