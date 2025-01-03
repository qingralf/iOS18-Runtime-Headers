/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioAccessoryServices.framework/AudioAccessoryServices
 */

@interface HMDeviceCloudRecordInfo : NSObject <NSSecureCoding> {
    NSString * _bluetoothAddress;
    NSNumber * _bottomMicFaultCountLeft;
    NSNumber * _bottomMicFaultCountRight;
    NSNumber * _diagnosticMeasurementsCount;
    NSNumber * _freqAccuracyFaultCountLeft;
    NSNumber * _freqAccuracyFaultCountRight;
    NSNumber * _frontVentFaultCountLeft;
    NSNumber * _frontVentFaultCountRight;
    unsigned char  _haRegionStatus;
    unsigned char  _hpRegionStatus;
    NSNumber * _innerMicFaultCountLeft;
    NSNumber * _innerMicFaultCountRight;
    NSDate * _latestDiagnosticTimestampLeft;
    NSDate * _latestDiagnosticTimestampRight;
    BOOL  _mediaAssistEnabled;
    BOOL  _pmeMediaEnabled;
    BOOL  _pmeVoiceEnabled;
    NSNumber * _rearVentFaultCountLeft;
    NSNumber * _rearVentFaultCountRight;
    NSNumber * _speakerFaultCountLeft;
    NSNumber * _speakerFaultCountRight;
    BOOL  _swipeGainEnabled;
    NSNumber * _topMicFaultCountLeft;
    NSNumber * _topMicFaultCountRight;
    NSNumber * _totalHarmonicDistortionFaultCountLeft;
    NSNumber * _totalHarmonicDistortionFaultCountRight;
}

@property (nonatomic, readonly) NSString *bluetoothAddress;
@property (nonatomic, retain) NSNumber *bottomMicFaultCountLeft;
@property (nonatomic, retain) NSNumber *bottomMicFaultCountRight;
@property (nonatomic, retain) NSNumber *diagnosticMeasurementsCount;
@property (nonatomic, retain) NSNumber *freqAccuracyFaultCountLeft;
@property (nonatomic, retain) NSNumber *freqAccuracyFaultCountRight;
@property (nonatomic, retain) NSNumber *frontVentFaultCountLeft;
@property (nonatomic, retain) NSNumber *frontVentFaultCountRight;
@property unsigned char haRegionStatus;
@property unsigned char hpRegionStatus;
@property (nonatomic, retain) NSNumber *innerMicFaultCountLeft;
@property (nonatomic, retain) NSNumber *innerMicFaultCountRight;
@property (nonatomic, retain) NSDate *latestDiagnosticTimestampLeft;
@property (nonatomic, retain) NSDate *latestDiagnosticTimestampRight;
@property BOOL mediaAssistEnabled;
@property BOOL pmeMediaEnabled;
@property BOOL pmeVoiceEnabled;
@property (nonatomic, retain) NSNumber *rearVentFaultCountLeft;
@property (nonatomic, retain) NSNumber *rearVentFaultCountRight;
@property (nonatomic, retain) NSNumber *speakerFaultCountLeft;
@property (nonatomic, retain) NSNumber *speakerFaultCountRight;
@property BOOL swipeGainEnabled;
@property (nonatomic, retain) NSNumber *topMicFaultCountLeft;
@property (nonatomic, retain) NSNumber *topMicFaultCountRight;
@property (nonatomic, retain) NSNumber *totalHarmonicDistortionFaultCountLeft;
@property (nonatomic, retain) NSNumber *totalHarmonicDistortionFaultCountRight;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bluetoothAddress;
- (id)bottomMicFaultCountLeft;
- (id)bottomMicFaultCountRight;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)diagnosticMeasurementsCount;
- (void)encodeWithCoder:(id)arg1;
- (id)freqAccuracyFaultCountLeft;
- (id)freqAccuracyFaultCountRight;
- (id)frontVentFaultCountLeft;
- (id)frontVentFaultCountRight;
- (unsigned char)haRegionStatus;
- (unsigned char)hpRegionStatus;
- (id)initWithBluetoothAddress:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)innerMicFaultCountLeft;
- (id)innerMicFaultCountRight;
- (id)latestDiagnosticTimestampLeft;
- (id)latestDiagnosticTimestampRight;
- (BOOL)mediaAssistEnabled;
- (BOOL)pmeMediaEnabled;
- (BOOL)pmeVoiceEnabled;
- (id)rearVentFaultCountLeft;
- (id)rearVentFaultCountRight;
- (void)setBottomMicFaultCountLeft:(id)arg1;
- (void)setBottomMicFaultCountRight:(id)arg1;
- (void)setDiagnosticMeasurementsCount:(id)arg1;
- (void)setFreqAccuracyFaultCountLeft:(id)arg1;
- (void)setFreqAccuracyFaultCountRight:(id)arg1;
- (void)setFrontVentFaultCountLeft:(id)arg1;
- (void)setFrontVentFaultCountRight:(id)arg1;
- (void)setHaRegionStatus:(unsigned char)arg1;
- (void)setHpRegionStatus:(unsigned char)arg1;
- (void)setInnerMicFaultCountLeft:(id)arg1;
- (void)setInnerMicFaultCountRight:(id)arg1;
- (void)setLatestDiagnosticTimestampLeft:(id)arg1;
- (void)setLatestDiagnosticTimestampRight:(id)arg1;
- (void)setMediaAssistEnabled:(BOOL)arg1;
- (void)setPmeMediaEnabled:(BOOL)arg1;
- (void)setPmeVoiceEnabled:(BOOL)arg1;
- (void)setRearVentFaultCountLeft:(id)arg1;
- (void)setRearVentFaultCountRight:(id)arg1;
- (void)setSpeakerFaultCountLeft:(id)arg1;
- (void)setSpeakerFaultCountRight:(id)arg1;
- (void)setSwipeGainEnabled:(BOOL)arg1;
- (void)setTopMicFaultCountLeft:(id)arg1;
- (void)setTopMicFaultCountRight:(id)arg1;
- (void)setTotalHarmonicDistortionFaultCountLeft:(id)arg1;
- (void)setTotalHarmonicDistortionFaultCountRight:(id)arg1;
- (id)speakerFaultCountLeft;
- (id)speakerFaultCountRight;
- (BOOL)swipeGainEnabled;
- (id)topMicFaultCountLeft;
- (id)topMicFaultCountRight;
- (id)totalHarmonicDistortionFaultCountLeft;
- (id)totalHarmonicDistortionFaultCountRight;

@end
