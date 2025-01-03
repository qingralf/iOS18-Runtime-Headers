/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallSoundPlayerDescriptor : NSObject {
    bool  _audioPlayingWarmupNeeded;
    unsigned long long  _iterations;
    double  _pauseDuration;
    NSNumber * _sound;
    long long  _soundType;
}

@property (nonatomic) bool audioPlayingWarmupNeeded;
@property (nonatomic) unsigned long long iterations;
@property (nonatomic) double pauseDuration;
@property (nonatomic, retain) NSNumber *sound;
@property (nonatomic) long long soundType;

- (void).cxx_destruct;
- (bool)audioPlayingWarmupNeeded;
- (id)description;
- (id)initWithSoundType:(long long)arg1 call:(id)arg2;
- (id)initWithSoundType:(long long)arg1 provider:(id)arg2 video:(bool)arg3 region:(long long)arg4;
- (id)initWithSoundType:(long long)arg1 provider:(id)arg2 video:(bool)arg3 region:(long long)arg4 audioPlayingWarmupNeeded:(bool)arg5;
- (id)initWithSoundType:(long long)arg1 sound:(id)arg2 iterations:(unsigned long long)arg3 pauseDuration:(double)arg4 audioPlayingWarmupNeeded:(bool)arg5;
- (unsigned long long)iterations;
- (double)pauseDuration;
- (void)setAudioPlayingWarmupNeeded:(bool)arg1;
- (void)setIterations:(unsigned long long)arg1;
- (void)setPauseDuration:(double)arg1;
- (void)setSound:(id)arg1;
- (void)setSoundType:(long long)arg1;
- (id)sound;
- (long long)soundType;

@end
