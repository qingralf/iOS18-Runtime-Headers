/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCPlayerRateCommand : _MPCPlayerItemCommand <MPCPlayerRateCommand> {
    float  _maximumValue;
    float  _minimumValue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float maximumValue;
@property (nonatomic) float minimumValue;
@property (readonly) Class superclass;

- (id)changeValue:(float)arg1;
- (float)maximumValue;
- (float)minimumValue;
- (void)setMaximumValue:(float)arg1;
- (void)setMinimumValue:(float)arg1;

@end
