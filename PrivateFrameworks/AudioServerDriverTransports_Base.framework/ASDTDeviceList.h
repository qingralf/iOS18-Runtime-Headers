/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriverTransports_Base.framework/AudioServerDriverTransports_Base
 */

@interface ASDTDeviceList : NSObject <ASDTDeviceManagerDelegate> {
    NSMutableDictionary * _audioDeviceDict;
    NSMutableDictionary * _interestsDict;
    NSLock * _lock;
}

@property (nonatomic, retain) NSMutableDictionary *audioDeviceDict;
@property (nonatomic, readonly) NSArray *audioDevices;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *interestsDict;
@property (nonatomic, retain) NSLock *lock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAudioDevice:(id)arg1;
- (bool)addAudioDeviceWithCheck:(id)arg1;
- (void)addAudioDevices:(id)arg1;
- (id)audioDeviceDict;
- (id)audioDevices;
- (id)getAudioDeviceWithUID:(id)arg1;
- (id)init;
- (id)interestsDict;
- (id)lock;
- (void)notifyOfInterest:(int)arg1 forDevice:(id)arg2;
- (void)registerObject:(id)arg1 withInterests:(int)arg2 forUID:(id)arg3;
- (void)removeAudioDevice:(id)arg1;
- (void)removeAudioDeviceWithUID:(id)arg1;
- (void)removeAudioDevices:(id)arg1;
- (void)setAudioDeviceDict:(id)arg1;
- (void)setInterestsDict:(id)arg1;
- (void)setLock:(id)arg1;

@end