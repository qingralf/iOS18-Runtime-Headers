/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFVehicleVariant : CAFService

@property (nonatomic, readonly) NSString *audioLogo;
@property (nonatomic, readonly) CAFStringCharacteristic *audioLogoCharacteristic;
@property (nonatomic, readonly) NSString *exteriorStyle;
@property (nonatomic, readonly) CAFStringCharacteristic *exteriorStyleCharacteristic;
@property (nonatomic, readonly) bool hasAudioLogo;
@property (nonatomic, readonly) bool hasVehicleLayout;
@property (nonatomic, readonly) bool hasVehicleLogo;
@property (nonatomic, readonly) NSString *interiorStyle;
@property (nonatomic, readonly) CAFStringCharacteristic *interiorStyleCharacteristic;
@property (nonatomic, readonly) NSString *vehicleLayout;
@property (nonatomic, readonly) CAFStringCharacteristic *vehicleLayoutCharacteristic;
@property (nonatomic, readonly) NSString *vehicleLogo;
@property (nonatomic, readonly) CAFStringCharacteristic *vehicleLogoCharacteristic;

+ (void)load;
+ (id)observerProtocol;
+ (id)serviceIdentifier;

- (void)_characteristicDidUpdate:(id)arg1 fromGroupUpdate:(bool)arg2;
- (void)addObserver:(id)arg1;
- (id)audioLogo;
- (id)audioLogoCharacteristic;
- (id)exteriorStyle;
- (id)exteriorStyleCharacteristic;
- (bool)hasAudioLogo;
- (bool)hasVehicleLayout;
- (bool)hasVehicleLogo;
- (id)interiorStyle;
- (id)interiorStyleCharacteristic;
- (id)name;
- (void)registerObserver:(id)arg1;
- (bool)registeredForAudioLogo;
- (bool)registeredForExteriorStyle;
- (bool)registeredForInteriorStyle;
- (bool)registeredForVehicleLayout;
- (bool)registeredForVehicleLogo;
- (void)removeObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (id)vehicleLayout;
- (id)vehicleLayoutCharacteristic;
- (id)vehicleLogo;
- (id)vehicleLogoCharacteristic;

@end
