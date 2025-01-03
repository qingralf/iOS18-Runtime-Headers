/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSleepTimerControlCommandEvent : MPRemoteCommandEvent {
    NSNumber * _fireDate;
    long long  _stopMode;
    NSNumber * _time;
}

@property (nonatomic, readonly) NSNumber *fireDate;
@property (nonatomic, readonly) long long stopMode;
@property (nonatomic, readonly) NSNumber *time;

- (void).cxx_destruct;
- (id)fireDate;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (long long)stopMode;
- (id)time;

@end
