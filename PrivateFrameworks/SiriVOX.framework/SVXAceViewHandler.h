/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
 */

@interface SVXAceViewHandler : NSObject {
    SVXAFUtilitiesWrapper * _afUtilitiesWrapper;
    SVXInstrumentationUtilities * _instrumentationUtils;
    <MDModeProviding> * _modeProvider;
    SVXModule * _module;
    SVXAceViewSpeakableTextExtractor * _speakableTextExtractor;
    SVXSpeechSynthesizer * _speechSynthesizer;
    SVXSpeechSynthesisResultConverter * _synthesisResultConverter;
}

- (void).cxx_destruct;
- (void)handleAceView:(id)arg1 isExpository:(bool)arg2 taskTracker:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithModule:(id)arg1 instrumentationUtils:(id)arg2 modeProvider:(id)arg3 speechSynthesizer:(id)arg4 synthesisResultConverter:(id)arg5;
- (id)initWithModule:(id)arg1 instrumentationUtils:(id)arg2 modeProvider:(id)arg3 speechSynthesizer:(id)arg4 synthesisResultConverter:(id)arg5 speakableTextExtractor:(id)arg6 afUtilitiesWrapper:(id)arg7;

@end
