/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitMetrics.framework/HomeKitMetrics
 */

@interface HMMEphemeralStatisticsContainer : NSObject {
    bool  _active;
    NSMutableDictionary * _statistics;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly, copy) NSDictionary *statistics;

- (void).cxx_destruct;
- (bool)active;
- (void)addValue:(long long)arg1 toStatistics:(id)arg2;
- (id)init;
- (bool)isActive;
- (bool)isEmpty;
- (void)setActive:(bool)arg1;
- (id)statistics;
- (id)statistics:(id)arg1;

@end
