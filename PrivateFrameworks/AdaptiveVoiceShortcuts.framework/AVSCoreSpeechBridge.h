/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AdaptiveVoiceShortcuts.framework/AdaptiveVoiceShortcuts
 */

@interface AVSCoreSpeechBridge : NSObject <CSCommandControlListenerDelegate> {
    CSCommandControlListener * _commandControlListener;
    id /* block */  _onBufferReceived;
    id /* block */  _onStopped;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ onBufferReceived;
@property (nonatomic, copy) id /* block */ onStopped;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)commandControlListener:(id)arg1 didStopUnexpectedly:(bool)arg2;
- (void)commandControlListener:(id)arg1 hasLPCMBufferAvailable:(id)arg2;
- (void)commandControlListener:(id)arg1 hasLPCMBufferAvailable:(id)arg2 hostTime:(unsigned long long)arg3;
- (id)init;
- (id /* block */)onBufferReceived;
- (id /* block */)onStopped;
- (const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)recordingASBD;
- (void)setOnBufferReceived:(id /* block */)arg1;
- (void)setOnStopped:(id /* block */)arg1;
- (void)startListening:(id /* block */)arg1;
- (void)stopListening:(id /* block */)arg1;

@end
