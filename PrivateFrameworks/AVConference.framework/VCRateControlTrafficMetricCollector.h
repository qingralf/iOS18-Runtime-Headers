/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCRateControlTrafficMetricCollector : NSObject {
    bool  _isStopped;
    void * _mediaController;
    AVCStatisticsCollector * _statisticsCollector;
    NSObject<OS_dispatch_source> * _trafficMetricSource;
    struct tagVCRateControlTrafficMetrics { 
        unsigned long long bytesInFlights; 
        unsigned long long senderTxBitrate; 
        unsigned long long receiverTxBitrate; 
    }  _trafficMetrics;
}

- (void)calculateTrafficMetrics;
- (void)dealloc;
- (id)initWithMediaController:(void*)arg1 statisticsCollector:(id)arg2;
- (void)startVCRateControlTrafficMetricCollector;
- (void)stopVCRateControlTrafficMetricCollector;

@end
