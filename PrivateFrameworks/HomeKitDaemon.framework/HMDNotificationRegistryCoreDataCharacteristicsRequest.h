/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDNotificationRegistryCoreDataCharacteristicsRequest : HMFObject {
    NSArray * _characteristicThresholds;
    HMDNotificationRegistryCharacteristicsRequest * _request;
}

@property (readonly) NSArray *characteristicThresholds;
@property (readonly) HMDNotificationRegistryCharacteristicsRequest *request;

- (void).cxx_destruct;
- (id)characteristicThresholds;
- (id)initWithRequest:(id)arg1 characteristicThresholds:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)request;

@end
