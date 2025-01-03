/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

@interface VLAR_DTMFEventReport : NSObject {
    unsigned long long  _action;
    unsigned long long  _command;
    NSDate * _eventDate;
    NSString * _language;
    NSDate * _loopStartDate;
    struct VLAR_DTMFStateRecord { 
        unsigned long long playbackState; 
        unsigned long long loopIteration; 
        unsigned long long loopPhase; 
        bool dtmfAvailable; 
    }  _state;
    NSString * _trigger;
    long long  _voiceLoopReason;
}

@property (nonatomic) unsigned long long action;
@property (nonatomic) unsigned long long command;
@property (nonatomic, readonly) double elapsedSeconds;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, readonly) NSDate *loopStartDate;
@property (nonatomic) struct VLAR_DTMFStateRecord { unsigned long long x1; unsigned long long x2; unsigned long long x3; bool x4; } state;
@property (nonatomic, readonly) NSString *trigger;
@property (nonatomic) long long voiceLoopReason;

- (void).cxx_destruct;
- (unsigned long long)action;
- (unsigned long long)command;
- (double)elapsedSeconds;
- (id)eventDate;
- (id)initWithTrigger:(id)arg1 state:(struct VLAR_DTMFStateRecord { unsigned long long x1; unsigned long long x2; unsigned long long x3; bool x4; })arg2 loopStartDate:(id)arg3;
- (id)language;
- (id)loopStartDate;
- (void)setAction:(unsigned long long)arg1;
- (void)setCommand:(unsigned long long)arg1;
- (void)setLanguage:(id)arg1;
- (void)setState:(struct VLAR_DTMFStateRecord { unsigned long long x1; unsigned long long x2; unsigned long long x3; bool x4; })arg1;
- (void)setVoiceLoopReason:(long long)arg1;
- (struct VLAR_DTMFStateRecord { unsigned long long x1; unsigned long long x2; unsigned long long x3; bool x4; })state;
- (id)trigger;
- (long long)voiceLoopReason;

@end
