/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DockKitCore.framework/DockKitCore
 */

@interface DockKitCore.SensorBattery : DockKitCore.Sensor {
    void state;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) _TtC11DockKitCore21AccessoryBatteryState *state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end