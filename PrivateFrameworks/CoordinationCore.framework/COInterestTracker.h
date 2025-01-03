/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore
 */

@interface COInterestTracker : NSObject {
    COHomeKitAccessoryMemento * _accessory;
    <COInterestTrackerDelegate> * _delegate;
    NSSet * _interests;
    unsigned long long  _interestsSerial;
    bool  _primaryAvailable;
    unsigned long long  _remoteInterests;
    COClusterMember * _secondary;
    bool  _triggerReset;
}

@property (nonatomic, readonly, copy) COHomeKitAccessoryMemento *accessory;
@property (nonatomic, readonly) <COInterestTrackerDelegate> *delegate;
@property (nonatomic, copy) NSSet *interests;
@property (nonatomic) unsigned long long interestsSerial;
@property (nonatomic) bool primaryAvailable;
@property (nonatomic) unsigned long long remoteInterests;
@property (nonatomic, retain) COClusterMember *secondary;
@property (nonatomic) bool triggerReset;

- (void).cxx_destruct;
- (void)_checkTriggerReset;
- (unsigned long long)_nextInterestSerial;
- (void)_setInterest:(id)arg1;
- (id)accessory;
- (bool)canDispatchWithPrimary:(bool)arg1;
- (id)delegate;
- (id)initWithAccessory:(id)arg1 delegate:(id)arg2 primaryAvailable:(bool)arg3 secondary:(id)arg4;
- (id)interests;
- (unsigned long long)interestsSerial;
- (bool)primaryAvailable;
- (unsigned long long)remoteInterests;
- (id)secondary;
- (void)setInterests:(id)arg1;
- (void)setInterestsSerial:(unsigned long long)arg1;
- (void)setPrimaryAvailable:(bool)arg1;
- (void)setRemoteInterests:(unsigned long long)arg1;
- (void)setSecondary:(id)arg1;
- (void)setTriggerReset:(bool)arg1;
- (bool)triggerReset;

@end
