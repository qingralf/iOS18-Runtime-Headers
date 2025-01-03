/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXManualDisplayLink : NSObject <PXDisplayLinkProtocol> {
    double  _duration;
    unsigned long long  _frameRateRangeType;
    unsigned int  _highFrameRateReason;
    bool  _paused;
    long long  _preferredFramesPerSecond;
    NSObject<OS_dispatch_queue> * _queue;
    SEL  _selector;
    id  _target;
    double  _targetTimestamp;
    UIScreen * screen;
}

@property (nonatomic, readonly) double currentMediaTime;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic) unsigned long long frameRateRangeType;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic) bool paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) double resolvedDuration;
@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) SEL selector;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id target;
@property (nonatomic, readonly) double targetTimestamp;
@property (nonatomic, readonly) double timestamp;

+ (bool)supportsSpecificScreen;

- (void).cxx_destruct;
- (double)currentMediaTime;
- (id)description;
- (double)duration;
- (unsigned long long)frameRateRangeType;
- (unsigned int)highFrameRateReason;
- (void)incrementTargetTimeWithInterval:(double)arg1;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2 queue:(id)arg3;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2 screen:(id)arg3 queue:(id)arg4;
- (void)invalidate;
- (bool)paused;
- (long long)preferredFramesPerSecond;
- (id)queue;
- (double)resolvedDuration;
- (id)screen;
- (SEL)selector;
- (void)setFrameRateRangeType:(unsigned long long)arg1;
- (void)setHighFrameRateReason:(unsigned int)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (id)target;
- (double)targetTimestamp;
- (double)timestamp;

@end
