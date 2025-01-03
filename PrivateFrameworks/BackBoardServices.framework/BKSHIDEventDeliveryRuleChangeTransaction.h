/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventDeliveryRuleChangeTransaction : NSObject <BSDescriptionStreamable, NSSecureCoding> {
    NSArray * _activeUIResponders;
    NSArray * _bufferingPredicates;
    unsigned long long  _contentsMask;
    NSArray * _deferringRules;
    NSArray * _discreteDispatchingRules;
    NSArray * _keyCommandDispatchingRules;
    NSArray * _keyCommandsRegistrations;
}

@property (nonatomic, copy) NSArray *activeUIResponders;
@property (nonatomic, copy) NSArray *bufferingPredicates;
@property (nonatomic) unsigned long long contentsMask;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, copy) NSArray *deferringRules;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *discreteDispatchingRules;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *keyCommandDispatchingRules;
@property (nonatomic, copy) NSArray *keyCommandsRegistrations;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeUIResponders;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)bufferingPredicates;
- (unsigned long long)contentsMask;
- (id)deferringRules;
- (id)description;
- (id)discreteDispatchingRules;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyCommandDispatchingRules;
- (id)keyCommandsRegistrations;
- (void)setActiveUIResponders:(id)arg1;
- (void)setBufferingPredicates:(id)arg1;
- (void)setContentsMask:(unsigned long long)arg1;
- (void)setDeferringRules:(id)arg1;
- (void)setDiscreteDispatchingRules:(id)arg1;
- (void)setKeyCommandDispatchingRules:(id)arg1;
- (void)setKeyCommandsRegistrations:(id)arg1;

@end
