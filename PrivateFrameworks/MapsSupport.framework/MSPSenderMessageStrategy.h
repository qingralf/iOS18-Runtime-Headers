/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPSenderMessageStrategy : MSPSenderStrategy {
    <MSPSenderMessageStrategyDelegate> * _delegate;
    NSString * _serviceName;
    unsigned long long  _type;
}

@property (nonatomic) <MSPSenderMessageStrategyDelegate> *delegate;

+ (bool)_supportsEvent:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addParticipants:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 capabilityType:(unsigned long long)arg2 serviceName:(id)arg3;
- (void)sendMessageIfNeeded;
- (void)setDelegate:(id)arg1;
- (bool)setState:(id)arg1 forEvent:(unsigned long long)arg2;

@end