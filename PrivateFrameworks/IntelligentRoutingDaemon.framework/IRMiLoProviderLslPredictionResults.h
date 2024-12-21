/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligentRoutingDaemon.framework/IntelligentRoutingDaemon
 */

@interface IRMiLoProviderLslPredictionResults : NSObject {
    long long  _confidence;
    long long  _confidenceReasonBitmap;
    long long  _miLoServiceQuality;
    long long  _miLoServiceQualityReasonBitmap;
    NSArray * _predictedEvents;
    NSUUID * _predictionId;
    NSDate * _predictionTime;
}

@property (nonatomic) long long confidence;
@property (nonatomic) long long confidenceReasonBitmap;
@property (nonatomic) long long miLoServiceQuality;
@property (nonatomic) long long miLoServiceQualityReasonBitmap;
@property (nonatomic, retain) NSArray *predictedEvents;
@property (nonatomic, retain) NSUUID *predictionId;
@property (nonatomic, retain) NSDate *predictionTime;

- (void).cxx_destruct;
- (long long)_bitmapFromConfidenceReasonArray:(id)arg1;
- (long long)confidence;
- (long long)confidenceReasonBitmap;
- (id)initWithMiloPrediction:(id)arg1 withMiLoServiceQuality:(long long)arg2 withMiLoServiceQualityReasonBitmap:(long long)arg3;
- (long long)miLoServiceQuality;
- (long long)miLoServiceQualityReasonBitmap;
- (id)predictedEvents;
- (id)predictionId;
- (id)predictionTime;
- (void)setConfidence:(long long)arg1;
- (void)setConfidenceReasonBitmap:(long long)arg1;
- (void)setMiLoServiceQuality:(long long)arg1;
- (void)setMiLoServiceQualityReasonBitmap:(long long)arg1;
- (void)setPredictedEvents:(id)arg1;
- (void)setPredictionId:(id)arg1;
- (void)setPredictionTime:(id)arg1;

@end