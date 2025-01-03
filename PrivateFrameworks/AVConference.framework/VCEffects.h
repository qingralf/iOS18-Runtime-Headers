/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCEffects : NSObject {
    VCVideoFrameBufferPool * _bufferPool;
    bool  _effectsApplied;
    int  _effectsMode;
    int  _effectsType;
    bool  _faceMeshTrackingEnabled;
}

@property (nonatomic) bool effectsApplied;
@property (nonatomic) int effectsMode;
@property (nonatomic) int effectsType;
@property (nonatomic) bool faceMeshTrackingEnabled;

- (bool)addFrame:(struct __CVBuffer { }*)arg1 time:(long long)arg2;
- (void)dealloc;
- (bool)effectsApplied;
- (int)effectsMode;
- (int)effectsType;
- (bool)faceMeshTrackingEnabled;
- (id)init;
- (bool)releaseFrameWithTime:(long long)arg1;
- (void)setEffectsApplied:(bool)arg1;
- (void)setEffectsMode:(int)arg1;
- (void)setEffectsType:(int)arg1;
- (void)setFaceMeshTrackingEnabled:(bool)arg1;

@end
