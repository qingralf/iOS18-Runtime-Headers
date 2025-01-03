/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCBCentralManagerLoader : NSObject <CBCentralManagerDelegate> {
    CBCentralManager * _centralManager;
    NSMutableArray * _pendingHandlers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)getCentralManagerWithCompletion:(id /* block */)arg1;
- (id)init;

@end
