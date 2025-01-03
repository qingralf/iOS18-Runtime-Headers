/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CAFCombine.framework/CAFCombine
 */

@interface CAFCombine.CAFDimensionObservable : NSObject <CAFDimensionObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _currentLocale;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _measurementSystem;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _temperatureUnit;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _tirePressureUnit;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _vehicleChargePowerUnit;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _vehicleFuelEfficiencyUnit;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _vehicleRangeUnit;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _vehicleSpeedUnit;
    void observed;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)dimensionManager:(id)arg1 didUpdateLocale:(id)arg2;
- (void)dimensionManager:(id)arg1 didUpdateMeasurementSystem:(unsigned long long)arg2;
- (void)dimensionManager:(id)arg1 didUpdateTemperatureUnit:(id)arg2;
- (void)dimensionManager:(id)arg1 didUpdateTirePressureUnit:(id)arg2;
- (void)dimensionManager:(id)arg1 didUpdateVehicleChargePowerUnit:(id)arg2;
- (void)dimensionManager:(id)arg1 didUpdateVehicleFuelEfficiencyUnit:(id)arg2;
- (void)dimensionManager:(id)arg1 didUpdateVehicleRangeUnit:(id)arg2;
- (void)dimensionManager:(id)arg1 didUpdateVehicleSpeedUnit:(id)arg2;
- (id)init;

@end
