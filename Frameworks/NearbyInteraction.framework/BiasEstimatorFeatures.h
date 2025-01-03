/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
 */

@interface BiasEstimatorFeatures : NSObject <NSCopying, NSSecureCoding> {
    int  _antennaMask;
    NSArray * _cirPacket1;
    NSArray * _cirPacket2;
    double  _firstPathIndexPacket1;
    double  _firstPathIndexPacket2;
    double  _leadingEdgePacket1;
    double  _leadingEdgePacket2;
    double  _rssiDbm;
    double  _rttInitiator;
    double  _rttResponder;
    int  _rxAntennaPacket1;
    int  _rxAntennaPacket2;
    double  _soiRssiDbm;
    double  _tatInitiator;
    double  _tatResponder;
    double  _timestamp;
    double  _toaNoiseRms;
    double  _toaPpwinPeak;
    double  _toaPpwinRms;
    double  _tofPicSecond;
    double  _uwbTime;
}

@property (nonatomic) int antennaMask;
@property (nonatomic, copy) NSArray *cirPacket1;
@property (nonatomic, copy) NSArray *cirPacket2;
@property (nonatomic) double firstPathIndexPacket1;
@property (nonatomic) double firstPathIndexPacket2;
@property (nonatomic) double leadingEdgePacket1;
@property (nonatomic) double leadingEdgePacket2;
@property (nonatomic) double rssiDbm;
@property (nonatomic) double rttInitiator;
@property (nonatomic) double rttResponder;
@property (nonatomic) int rxAntennaPacket1;
@property (nonatomic) int rxAntennaPacket2;
@property (nonatomic) double soiRssiDbm;
@property (nonatomic) double tatInitiator;
@property (nonatomic) double tatResponder;
@property (nonatomic) double timestamp;
@property (nonatomic) double toaNoiseRms;
@property (nonatomic) double toaPpwinPeak;
@property (nonatomic) double toaPpwinRms;
@property (nonatomic) double tofPicSecond;
@property (nonatomic) double uwbTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)antennaMask;
- (id)cirPacket1;
- (id)cirPacket2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)firstPathIndexPacket1;
- (double)firstPathIndexPacket2;
- (unsigned long long)hash;
- (id)initWithBiasEstimatorFeatures:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)leadingEdgePacket1;
- (double)leadingEdgePacket2;
- (id)populateOrderedInputFeature;
- (double)rssiDbm;
- (double)rttInitiator;
- (double)rttResponder;
- (int)rxAntennaPacket1;
- (int)rxAntennaPacket2;
- (void)setAntennaMask:(int)arg1;
- (void)setCirPacket1:(id)arg1;
- (void)setCirPacket2:(id)arg1;
- (void)setFirstPathIndexPacket1:(double)arg1;
- (void)setFirstPathIndexPacket2:(double)arg1;
- (void)setLeadingEdgePacket1:(double)arg1;
- (void)setLeadingEdgePacket2:(double)arg1;
- (void)setRssiDbm:(double)arg1;
- (void)setRttInitiator:(double)arg1;
- (void)setRttResponder:(double)arg1;
- (void)setRxAntennaPacket1:(int)arg1;
- (void)setRxAntennaPacket2:(int)arg1;
- (void)setSoiRssiDbm:(double)arg1;
- (void)setTatInitiator:(double)arg1;
- (void)setTatResponder:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setToaNoiseRms:(double)arg1;
- (void)setToaPpwinPeak:(double)arg1;
- (void)setToaPpwinRms:(double)arg1;
- (void)setTofPicSecond:(double)arg1;
- (void)setUwbTime:(double)arg1;
- (double)soiRssiDbm;
- (double)tatInitiator;
- (double)tatResponder;
- (double)timestamp;
- (double)toaNoiseRms;
- (double)toaPpwinPeak;
- (double)toaPpwinRms;
- (double)tofPicSecond;
- (double)uwbTime;

@end
