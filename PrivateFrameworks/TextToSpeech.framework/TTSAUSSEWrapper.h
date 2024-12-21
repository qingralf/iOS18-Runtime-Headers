/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSAUSSEWrapper : NSObject {
    AUAudioUnit * _audioUnit;
}

@property (nonatomic, retain) AUAudioUnit *audioUnit;

+ (id)makeAU:(id)arg1;

- (void).cxx_destruct;
- (id)audioUnit;
- (void)cancelSpeechRequest;
- (id)initWithAudioUnit:(id)arg1;
- (void)setAudioUnit:(id)arg1;
- (void)synthesizeSpeechRequest:(id)arg1;

@end