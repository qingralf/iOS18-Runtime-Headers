/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation
 */

@interface APMetricDaemonDelivery : APXPCActionRequester <APMetricDaemonDeliverer, APMetricNotificationRegisterOwner, APMetricReceiving> {
    <APMetricNotificationRegister><APMetricReceiving> * _notificationRegistrar;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <APMetricNotificationRegister><APMetricReceiving> *notificationRegistrar;
@property (readonly) Class superclass;

+ (bool)canShareConnection;
+ (id)daemonDelivery;
+ (id)machService;
+ (void)setDaemonDelivery:(id)arg1;

- (void).cxx_destruct;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)extendCollectionClassesForRemoteInterface:(id)arg1;
- (id)init;
- (id)notificationRegistrar;
- (void)receivedMetric:(id)arg1;
- (id)remoteObjectInterface;

@end