/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitMetrics.framework/HomeKitMetrics
 */

@interface HMMEphemeralCounterContainer : NSObject {
    bool  _active;
    NSMutableDictionary * _counters;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly, copy) NSDictionary *counters;
@property (nonatomic, readonly) bool isEmpty;

- (void).cxx_destruct;
- (bool)active;
- (id)counters;
- (void)incrementCounter:(id)arg1 by:(long long)arg2;
- (id)init;
- (bool)isActive;
- (bool)isEmpty;
- (void)setActive:(bool)arg1;
- (id)valueForCounter:(id)arg1;

@end