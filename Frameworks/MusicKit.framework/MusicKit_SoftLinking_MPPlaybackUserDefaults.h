/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MusicKit.framework/MusicKit
 */

@interface MusicKit_SoftLinking_MPPlaybackUserDefaults : NSObject {
    double  _crossFadeDuration;
    bool  _crossFadeEnabled;
    MPPlaybackUserDefaults * _underlyingPlaybackUserDefaults;
}

@property (nonatomic) double crossFadeDuration;
@property (getter=isCrossFadeEnabled, nonatomic) bool crossFadeEnabled;
@property (nonatomic, readonly) bool isPrivateListeningEnabled;
@property (nonatomic, readonly) long long preferredMusicLowBandwidthResolution;
@property (nonatomic, readonly) long long preferredVideoLowBandwidthResolution;
@property (nonatomic) bool prefersSpatialAudio;
@property (nonatomic) bool prefersSpatialDownloads;

+ (id)preferredResolutionsDidChangeNotification;
+ (id)standardUserDefaults;

- (void).cxx_destruct;
- (void)_handlePreferredResolutionsDidChangeNotification:(id)arg1;
- (id)_initWithUnderlyingPlaybackUserDefaults:(id)arg1;
- (double)crossFadeDuration;
- (void)dealloc;
- (bool)isCrossFadeEnabled;
- (bool)isPrivateListeningEnabled;
- (long long)preferredMusicLowBandwidthResolution;
- (long long)preferredVideoLowBandwidthResolution;
- (bool)prefersSpatialAudio;
- (bool)prefersSpatialDownloads;
- (void)setCrossFadeDuration:(double)arg1;
- (void)setCrossFadeEnabled:(bool)arg1;
- (void)setPrefersSpatialAudio:(bool)arg1;
- (void)setPrefersSpatialDownloads:(bool)arg1;

@end
