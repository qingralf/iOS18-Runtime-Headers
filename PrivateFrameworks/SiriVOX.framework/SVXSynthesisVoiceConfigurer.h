/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
 */

@interface SVXSynthesisVoiceConfigurer : NSObject {
    SVXSpeechSynthesisConfigurationStateManager * _configurationManager;
    SVXSessionUtils * _sessionUtils;
    SVXSpeechSynthesisUtils * _speechSynthesisUtils;
    SVXVoiceGenderConverter * _voiceGenderConverter;
}

- (void).cxx_destruct;
- (long long)_determineGenderWithContext:(id)arg1 outputVoiceInfo:(id)arg2 languageCode:(id)arg3;
- (id)_determineLanguageCodeWithContext:(id)arg1 outputVoiceInfo:(id)arg2 preferences:(id)arg3;
- (id)_determineVoiceNameWithContext:(id)arg1 languageCode:(id)arg2 outputVoiceInfo:(id)arg3 gender:(long long)arg4;
- (id)initWithConfigurationManager:(id)arg1 speechSynthesisUtils:(id)arg2 sessionUtils:(id)arg3 voiceGenderConverter:(id)arg4;
- (id)voiceForContext:(id)arg1 preferences:(id)arg2;

@end
