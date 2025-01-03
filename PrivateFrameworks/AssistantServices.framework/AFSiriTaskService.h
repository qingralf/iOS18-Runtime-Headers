/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriTaskService : NSObject <NSXPCListenerDelegate> {
    AFSiriTaskDeliveryHandler * _deliveryHandler;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_machServiceNameForAppTaskServiceWithBundleIdentifier:(id)arg1;
+ (id)appTaskService;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (void)setDelegate:(id)arg1;

@end
