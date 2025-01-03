/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
 */

@interface SVXRemoraVirtualDeviceManager : NSObject {
    SVXQueuePerformer * _mainQueuePerformer;
    SVXDaemonRunningObserver * _runningObserver;
    SVXVirtualDeviceFactory * _virtualDeviceFactory;
}

- (void).cxx_destruct;
- (id)initWithRunningObserver:(id)arg1;
- (id)initWithRunningObserver:(id)arg1 mainQueuePerformer:(id)arg2 virtualDeviceFactory:(id)arg3;

@end
