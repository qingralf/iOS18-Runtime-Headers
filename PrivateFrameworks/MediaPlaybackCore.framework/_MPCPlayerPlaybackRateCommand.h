/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCPlayerPlaybackRateCommand : _MPCPlayerItemCommand <MPCPlayerPlaybackRateCommand> {
    float  _preferredPlaybackRate;
    NSArray * _supportedPlaybackRates;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float preferredPlaybackRate;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedPlaybackRates;

- (void).cxx_destruct;
- (float)preferredPlaybackRate;
- (id)setPlaybackRate:(float)arg1;
- (void)setPreferredPlaybackRate:(float)arg1;
- (void)setSupportedPlaybackRates:(id)arg1;
- (id)supportedPlaybackRates;

@end
