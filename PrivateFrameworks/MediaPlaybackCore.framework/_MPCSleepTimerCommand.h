/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCSleepTimerCommand : _MPCPlayerCommand <MPCSleepTimerCommand> {
    bool  _disabled;
    long long  _disabledReason;
    double  _fireDate;
    long long  _stopMode;
    double  _time;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic) long long disabledReason;
@property (nonatomic) double fireDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long stopMode;
@property (readonly) Class superclass;
@property (nonatomic) double time;

- (long long)disabledReason;
- (double)fireDate;
- (bool)isDisabled;
- (id)reset;
- (void)setDisabled:(bool)arg1;
- (void)setDisabledReason:(long long)arg1;
- (void)setFireDate:(double)arg1;
- (void)setStopMode:(long long)arg1;
- (void)setTime:(double)arg1;
- (id)startForChapterEnd;
- (id)startForItemEnd;
- (id)startWithTime:(double)arg1;
- (long long)stopMode;
- (double)time;

@end