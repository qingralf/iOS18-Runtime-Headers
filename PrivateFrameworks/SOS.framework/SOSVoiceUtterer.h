/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

@interface SOSVoiceUtterer : NSObject <AVSpeechSynthesizerDelegate> {
    NSArray * _avUtterancesBeingSpoken;
    <SOSVoiceUttererDelegate> * _delegate;
    bool  _mixToTelephonyUplink;
    NSArray * _sosUtterancesBeingSpoken;
    AVSpeechSynthesizer * _voiceSynthesizer;
}

@property (nonatomic, retain) NSArray *avUtterancesBeingSpoken;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SOSVoiceUttererDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool mixToTelephonyUplink;
@property (nonatomic, retain) NSArray *sosUtterancesBeingSpoken;
@property (getter=isSpeaking, nonatomic, readonly) bool speaking;
@property (readonly) Class superclass;
@property (nonatomic, retain) AVSpeechSynthesizer *voiceSynthesizer;

- (void).cxx_destruct;
- (void)_forgetUtterancesBeingSpoken;
- (void)_speakAVUtterance:(id)arg1;
- (void)_speakUtteranceAtIndex:(unsigned long long)arg1;
- (id)avUtterancesBeingSpoken;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)isSpeaking;
- (bool)mixToTelephonyUplink;
- (id)routeDescription;
- (void)setAvUtterancesBeingSpoken:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMixToTelephonyUplink:(bool)arg1;
- (void)setSosUtterancesBeingSpoken:(id)arg1;
- (void)setVoiceSynthesizer:(id)arg1;
- (id)sosUtterancesBeingSpoken;
- (void)speakUtterances:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)stopSpeaking;
- (id)voiceSynthesizer;

@end
