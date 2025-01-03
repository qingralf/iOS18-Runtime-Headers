/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFSunriseSunsetCondition : HFTimeCondition <HFPrimitiveTimeCondition> {
    unsigned long long  _comparisonType;
    NSDateComponents * _offset;
    NSString * _significantEvent;
}

@property (nonatomic, readonly) unsigned long long comparisonType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDateComponents *offset;
@property (nonatomic, readonly, copy) NSString *significantEvent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (unsigned long long)comparisonType;
- (id)description;
- (id)initWithPredicate:(id)arg1;
- (id)initWithSignificantEvent:(id)arg1 comparisonType:(unsigned long long)arg2;
- (id)initWithSignificantEvent:(id)arg1 offset:(id)arg2 comparisonType:(unsigned long long)arg3;
- (id)offset;
- (id)significantEvent;

@end
