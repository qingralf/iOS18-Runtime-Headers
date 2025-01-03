/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio
 */

@interface AVAudioPlayer : NSObject {
    NSString * _currentDevice;
    id  _impl;
}

@property (nonatomic, copy) NSArray *channelAssignments;
@property (copy) NSString *currentDevice;
@property double currentTime;
@property (readonly) NSData *data;
@property <AVAudioPlayerDelegate> *delegate;
@property (readonly) double deviceCurrentTime;
@property (readonly) double duration;
@property bool enableRate;
@property (readonly) AVAudioFormat *format;
@property (getter=isMeteringEnabled) bool meteringEnabled;
@property (readonly) unsigned long long numberOfChannels;
@property long long numberOfLoops;
@property float pan;
@property (getter=isPlaying, readonly) bool playing;
@property float rate;
@property (readonly) NSDictionary *settings;
@property (readonly) NSURL *url;
@property float volume;

- (id)STSLabel;
- (id)audioSession;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (void)beginInterruption;
- (id)channelAssignments;
- (id)currentDevice;
- (double)currentTime;
- (id)data;
- (void)dealloc;
- (void)decodeError:(id)arg1;
- (id)delegate;
- (double)deviceCurrentTime;
- (double)duration;
- (bool)enableRate;
- (void)endInterruption;
- (void)endInterruptionWithFlags:(id)arg1;
- (void)finalize;
- (void)finishedPlaying:(id)arg1;
- (id)format;
- (void)handleInterruption:(id)arg1;
- (id)impl;
- (id)init;
- (id)initBase;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfURL:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3;
- (bool)isMeteringEnabled;
- (bool)isPlaying;
- (bool)mixToUplink;
- (unsigned long long)numberOfChannels;
- (long long)numberOfLoops;
- (float)pan;
- (void)pause;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (bool)play;
- (bool)playAtTime:(double)arg1;
- (bool)prepareToPlay;
- (void)privRemoveSessionListener;
- (float)rate;
- (void)setAudioSession:(id)arg1;
- (void)setChannelAssignments:(id)arg1;
- (void)setCurrentDevice:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnableRate:(bool)arg1;
- (void)setMeteringEnabled:(bool)arg1;
- (void)setMixToUplink:(bool)arg1;
- (void)setNumberOfLoops:(long long)arg1;
- (void)setPan:(float)arg1;
- (void)setRate:(float)arg1;
- (void)setSTSLabel:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)setVolume:(float)arg1 fadeDuration:(double)arg2;
- (id)settings;
- (void)stop;
- (void)updateMeters;
- (id)url;
- (float)volume;

@end
