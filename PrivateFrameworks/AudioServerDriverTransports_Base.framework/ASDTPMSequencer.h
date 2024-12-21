/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriverTransports_Base.framework/AudioServerDriverTransports_Base
 */

@interface ASDTPMSequencer : NSObject {
    NSMutableArray * _mutablePMDevicesPowerDown;
    NSMutableArray * _mutablePMDevicesPowerUp;
    NSObject<ASDTPMProtocol> * _parent;
    ASDTAudioDevice * _parentDevice;
    NSObject<OS_dispatch_queue> * _pmConcurrentQueue;
    NSArray * _pmDevicesPowerDown;
    NSArray * _pmDevicesPowerUp;
    NSObject<OS_dispatch_queue> * _pmSerialQueue;
}

@property (nonatomic, retain) NSMutableArray *mutablePMDevicesPowerDown;
@property (nonatomic, retain) NSMutableArray *mutablePMDevicesPowerUp;
@property (nonatomic) NSObject<ASDTPMProtocol> *parent;
@property (nonatomic) ASDTAudioDevice *parentDevice;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *pmConcurrentQueue;
@property (nonatomic, retain) NSArray *pmDevicesPowerDown;
@property (nonatomic, retain) NSArray *pmDevicesPowerUp;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *pmSerialQueue;

+ (long long)compare:(id)arg1 with:(id)arg2 forPowerUp:(bool)arg3;
+ (id)pmSequencerWithPMDeviceConfig:(id)arg1 withParent:(id)arg2;

- (void).cxx_destruct;
- (bool)addPMDevicesWithConfig:(id)arg1;
- (bool)doAddPMDeviceWithConfig:(id)arg1;
- (int)doExecuteSequenceToState:(int)arg1;
- (int)executeSequenceFromState:(int)arg1 toState:(int)arg2;
- (int)executeSequenceToState:(int)arg1;
- (id)initWithPMDeviceConfig:(id)arg1 withParent:(id)arg2;
- (id)mutablePMDevicesPowerDown;
- (id)mutablePMDevicesPowerUp;
- (id)parent;
- (id)parentDevice;
- (id)pmConcurrentQueue;
- (id)pmDeviceWithName:(id)arg1;
- (id)pmDevicesPowerDown;
- (id)pmDevicesPowerUp;
- (id)pmSerialQueue;
- (void)setMutablePMDevicesPowerDown:(id)arg1;
- (void)setMutablePMDevicesPowerUp:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setParentDevice:(id)arg1;
- (void)setPmConcurrentQueue:(id)arg1;
- (void)setPmDevicesPowerDown:(id)arg1;
- (void)setPmDevicesPowerUp:(id)arg1;
- (void)setPmSerialQueue:(id)arg1;
- (void)sortPMDevices;

@end