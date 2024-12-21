/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCMicrosoftXboxControllerProfile : NSObject <_GCControllerProfile>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)deviceManager;
+ (void)deviceManager:(id)arg1 prepareLogicalDevice:(id)arg2;
+ (void)deviceManager:(id)arg1 willPublishPhysicalDevice:(id)arg2;
+ (id)logicalDevice:(id)arg1 makeControllerInputDescriptionWithIdentifier:(id)arg2 bindings:(id)arg3;
+ (id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2;
+ (id)logicalDeviceControllerDetailedProductCategory:(id)arg1;
+ (id)logicalDeviceControllerProductCategory:(id)arg1;
+ (long long)logicalDeviceDeterminePhysicalInputType:(id)arg1;
+ (void)physicalDevice:(id)arg1 getBatteryWithReply:(id /* block */)arg2;
+ (void)physicalDevice:(id)arg1 setIndicatedPlayerIndex:(long long)arg2;
+ (id)physicalDeviceGetHapticCapabilities:(id)arg1;
+ (id)physicalDeviceGetHapticCapabilityGraph:(id)arg1;
+ (long long)physicalDeviceGetIndicatedPlayerIndex:(id)arg1;
+ (bool)physicalDeviceSupportsBattery:(id)arg1;

@end