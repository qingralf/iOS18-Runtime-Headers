/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMSensorMonitorSimulatorProxy : NSObject {
    id /* block */  fHandler;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> { 
        struct __compressed_pair<CLConnectionClient *, std::default_delete<CLConnectionClient>> { 
            struct CLConnectionClient {} *__value_; 
        } __ptr_; 
    }  fLocationdConnection;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_simulateMotionSensorDataForType:(unsigned long long)arg1 payload:(id)arg2 withHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)initWithSensorMonitorTests;

@end
