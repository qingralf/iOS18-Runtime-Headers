/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ComputeSafeguards.framework/ComputeSafeguards
 */

@interface CSCPUTimeRestriction : NSObject <CSRestriction> {
    NSNumber * _cpuThreshold;
    NSNumber * _timeWindow;
}

@property (nonatomic, readonly) NSNumber *cpuThreshold;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *timeWindow;

- (void).cxx_destruct;
- (bool)_shouldBeFatalOnViolation;
- (bool)applyToProcess:(id)arg1;
- (id)cpuThreshold;
- (id)description;
- (unsigned long long)hash;
- (id)initWithThreshold:(id)arg1 andTimeWindow:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)releaseForProcess:(id)arg1;
- (id)timeWindow;

@end