/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
 */

@interface SVXSpeechSynthesisUtils : NSObject {
    SVXNSLocaleFactory * _localeFactory;
    SVXSessionUtils * _sessionUtils;
}

- (void).cxx_destruct;
- (id)createAudioFromUIAudioData:(id)arg1;
- (id)createLocaleFromLanguageCode:(id)arg1;
- (id)createPhaticPrompt;
- (long long)getGenderFromVoiceGender:(long long)arg1;
- (id)getLocaleWithAllowsFallback:(bool)arg1 preferences:(id)arg2;
- (id)getOutputVoiceInfoWithAllowsFallback:(bool)arg1 preferences:(id)arg2;
- (id)init;
- (id)initWithLocaleFactory:(id)arg1 sessionUtils:(id)arg2;
- (bool)requestHasSpeakableContents:(id)arg1;

@end