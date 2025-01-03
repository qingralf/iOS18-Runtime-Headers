/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KoaMapper.framework/KoaMapper
 */

@interface CarPlayConnectionManager : NSObject <CAFCarManagerObserver> {
    void $__lazy_storage_$_carRadioListener;
    void cancellables;
    void carManager;
    void carManagerObservable;
    void car_queue;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)carManager:(id)arg1 didUpdateCurrentCar:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)radioStore;
- (void)registerUpdateHandler:(id /* block */)arg1;

@end
