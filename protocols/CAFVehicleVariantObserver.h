/* Generated by RuntimeBrowser.
 */

@protocol CAFVehicleVariantObserver <CAFServiceObserver>

@required

- (void)vehicleVariantService:(CAFVehicleVariant *)arg1 didUpdateAudioLogo:(NSString *)arg2;
- (void)vehicleVariantService:(CAFVehicleVariant *)arg1 didUpdateExteriorStyle:(NSString *)arg2;
- (void)vehicleVariantService:(CAFVehicleVariant *)arg1 didUpdateInteriorStyle:(NSString *)arg2;
- (void)vehicleVariantService:(CAFVehicleVariant *)arg1 didUpdateVehicleLayout:(NSString *)arg2;
- (void)vehicleVariantService:(CAFVehicleVariant *)arg1 didUpdateVehicleLogo:(NSString *)arg2;

@end