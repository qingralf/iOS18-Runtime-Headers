/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerfPowerMetricMonitor.framework/PerfPowerMetricMonitor
 */

@interface PPSMetricCollection : NSObject <NSCopying, NSSecureCoding> {
    PPSMetricSample * _aneDCSBytes;
    PPSMetricSample * _aneEnergy;
    PPSMetricSample * _aneFabricBytes;
    PPSMetricSample * _anePower;
    PPSMetricSample * _batteryPower;
    PPSMetricSample * _batteryTemperature;
    PPSMetricSample * _cellularPower;
    PPSMetricSample * _chargingRate;
    PPSMetricSample * _cpuEnergy;
    PPSMetricSample * _cpuPower;
    PPSMetricSample * _dcInputPower;
    PPSMetricSample * _dcsEnergy;
    PPSMetricSample * _displayAPL;
    PPSMetricSample * _displayCost;
    PPSMetricSample * _displayFPS;
    PPSMetricSample * _displayPower;
    PPSMetricSample * _dramBytes;
    PPSMetricSample * _dramEnergy;
    PPSMetricSample * _dramPower;
    PPSMetricSample * _gpuEnergy;
    PPSMetricSample * _gpuPower;
    PPSMetricSample * _gpuSRAMEnergy;
    long long  _inducedThermalPressure;
    bool  _isSystemPowerAvailableWhileCharging;
    PPSMetricSample * _otherSocPower;
    PPSMetricSample * _pcieEnergy;
    NSMutableDictionary * _processMetrics;
    NSNumber * _sampleTime;
    PPSMetricSample * _skinTemperature;
    PPSMetricSample * _systemLoadPower;
    long long  _thermalPressure;
    PPSMetricSample * _wifiAWDLRange;
    PPSMetricSample * _wifiAWDLStatus;
    PPSMetricSample * _wifiPower;
}

@property (nonatomic, retain) PPSMetricSample *aneDCSBytes;
@property (nonatomic, retain) PPSMetricSample *aneEnergy;
@property (nonatomic, retain) PPSMetricSample *aneFabricBytes;
@property (nonatomic, retain) PPSMetricSample *anePower;
@property (nonatomic, retain) PPSMetricSample *batteryPower;
@property (nonatomic, retain) PPSMetricSample *batteryTemperature;
@property (nonatomic, retain) PPSMetricSample *cellularPower;
@property (nonatomic, retain) PPSMetricSample *chargingRate;
@property (nonatomic, retain) PPSMetricSample *cpuEnergy;
@property (nonatomic, retain) PPSMetricSample *cpuPower;
@property (nonatomic, retain) PPSMetricSample *dcInputPower;
@property (nonatomic, retain) PPSMetricSample *dcsEnergy;
@property (nonatomic, retain) PPSMetricSample *displayAPL;
@property (nonatomic, retain) PPSMetricSample *displayCost;
@property (nonatomic, retain) PPSMetricSample *displayFPS;
@property (nonatomic, retain) PPSMetricSample *displayPower;
@property (nonatomic, retain) PPSMetricSample *dramBytes;
@property (nonatomic, retain) PPSMetricSample *dramEnergy;
@property (nonatomic, retain) PPSMetricSample *dramPower;
@property (nonatomic, retain) PPSMetricSample *gpuEnergy;
@property (nonatomic, retain) PPSMetricSample *gpuPower;
@property (nonatomic, retain) PPSMetricSample *gpuSRAMEnergy;
@property (nonatomic) long long inducedThermalPressure;
@property (nonatomic) bool isSystemPowerAvailableWhileCharging;
@property (nonatomic, retain) PPSMetricSample *otherSocPower;
@property (nonatomic, retain) PPSMetricSample *pcieEnergy;
@property (nonatomic, retain) NSMutableDictionary *processMetrics;
@property (nonatomic, retain) NSNumber *sampleTime;
@property (nonatomic, retain) PPSMetricSample *skinTemperature;
@property (nonatomic, retain) PPSMetricSample *systemLoadPower;
@property (nonatomic) long long thermalPressure;
@property (nonatomic, retain) PPSMetricSample *wifiAWDLRange;
@property (nonatomic, retain) PPSMetricSample *wifiAWDLStatus;
@property (nonatomic, retain) PPSMetricSample *wifiPower;

+ (id)_metricSamplePropertyKeys;
+ (id)allPropertyKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_stringFromInducedThermalPressure:(long long)arg1;
- (id)_stringFromThermalPressure:(long long)arg1;
- (id)aneDCSBytes;
- (id)aneEnergy;
- (id)aneFabricBytes;
- (id)anePower;
- (id)batteryPower;
- (id)batteryTemperature;
- (id)cellularPower;
- (id)chargingRate;
- (void)combineWithMetricCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cpuEnergy;
- (id)cpuPower;
- (id)dcInputPower;
- (id)dcsEnergy;
- (id)description;
- (id)displayAPL;
- (id)displayCost;
- (id)displayFPS;
- (id)displayPower;
- (id)dramBytes;
- (id)dramEnergy;
- (id)dramPower;
- (void)encodeWithCoder:(id)arg1;
- (id)gpuEnergy;
- (id)gpuPower;
- (id)gpuSRAMEnergy;
- (long long)inducedThermalPressure;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isSystemPowerAvailableWhileCharging;
- (id)otherSocPower;
- (id)pcieEnergy;
- (id)processMetrics;
- (id)sampleTime;
- (void)setAneDCSBytes:(id)arg1;
- (void)setAneEnergy:(id)arg1;
- (void)setAneFabricBytes:(id)arg1;
- (void)setAnePower:(id)arg1;
- (void)setBatteryPower:(id)arg1;
- (void)setBatteryTemperature:(id)arg1;
- (void)setCellularPower:(id)arg1;
- (void)setChargingRate:(id)arg1;
- (void)setCpuEnergy:(id)arg1;
- (void)setCpuPower:(id)arg1;
- (void)setDcInputPower:(id)arg1;
- (void)setDcsEnergy:(id)arg1;
- (void)setDisplayAPL:(id)arg1;
- (void)setDisplayCost:(id)arg1;
- (void)setDisplayFPS:(id)arg1;
- (void)setDisplayPower:(id)arg1;
- (void)setDramBytes:(id)arg1;
- (void)setDramEnergy:(id)arg1;
- (void)setDramPower:(id)arg1;
- (void)setGpuEnergy:(id)arg1;
- (void)setGpuPower:(id)arg1;
- (void)setGpuSRAMEnergy:(id)arg1;
- (void)setInducedThermalPressure:(long long)arg1;
- (void)setIsSystemPowerAvailableWhileCharging:(bool)arg1;
- (void)setOtherSocPower:(id)arg1;
- (void)setPcieEnergy:(id)arg1;
- (void)setProcessMetrics:(id)arg1;
- (void)setSampleTime:(id)arg1;
- (void)setSkinTemperature:(id)arg1;
- (void)setSystemLoadPower:(id)arg1;
- (void)setThermalPressure:(long long)arg1;
- (void)setWifiAWDLRange:(id)arg1;
- (void)setWifiAWDLStatus:(id)arg1;
- (void)setWifiPower:(id)arg1;
- (id)skinTemperature;
- (id)systemLoadPower;
- (long long)thermalPressure;
- (void)updateMetrics:(id)arg1 forPid:(id)arg2;
- (id)wifiAWDLRange;
- (id)wifiAWDLStatus;
- (id)wifiPower;

@end