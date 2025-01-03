/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCPlayerShuffleCommand : _MPCPlayerCommand <MPCPlayerShuffleCommand> {
    long long  _currentShuffleType;
    NSArray * _supportedShuffleTypes;
    bool  _supportsAdvanceShuffle;
    bool  _supportsChangeShuffle;
}

@property (nonatomic) long long currentShuffleType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *supportedShuffleTypes;
@property (nonatomic) bool supportsAdvanceShuffle;
@property (nonatomic) bool supportsChangeShuffle;

- (void).cxx_destruct;
- (id)advance;
- (long long)currentShuffleType;
- (void)setCurrentShuffleType:(long long)arg1;
- (id)setShuffleType:(long long)arg1;
- (void)setSupportedShuffleTypes:(id)arg1;
- (void)setSupportsAdvanceShuffle:(bool)arg1;
- (void)setSupportsChangeShuffle:(bool)arg1;
- (id)supportedShuffleTypes;
- (bool)supportsAdvanceShuffle;
- (bool)supportsChangeShuffle;

@end
