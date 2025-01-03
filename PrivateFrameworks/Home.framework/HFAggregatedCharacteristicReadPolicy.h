/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAggregatedCharacteristicReadPolicy : NSObject <HFCharacteristicReadPolicy, NSCopying, NSMutableCopying> {
    NSArray * _policies;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *policies;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id*)arg2;
- (id)init;
- (id)initWithPolicies:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)policies;

@end
