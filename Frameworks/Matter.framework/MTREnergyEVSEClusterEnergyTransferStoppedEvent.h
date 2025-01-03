/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTREnergyEVSEClusterEnergyTransferStoppedEvent : NSObject <NSCopying> {
    NSNumber * _energyDischarged;
    NSNumber * _energyTransferred;
    NSNumber * _reason;
    NSNumber * _sessionID;
    NSNumber * _state;
}

@property (nonatomic, copy) NSNumber *energyDischarged;
@property (nonatomic, copy) NSNumber *energyTransferred;
@property (nonatomic, copy) NSNumber *reason;
@property (nonatomic, copy) NSNumber *sessionID;
@property (nonatomic, copy) NSNumber *state;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)energyDischarged;
- (id)energyTransferred;
- (id)init;
- (id)reason;
- (id)sessionID;
- (void)setEnergyDischarged:(id)arg1;
- (void)setEnergyTransferred:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end
