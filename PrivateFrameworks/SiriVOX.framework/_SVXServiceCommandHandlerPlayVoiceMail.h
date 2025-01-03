/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
 */

@interface _SVXServiceCommandHandlerPlayVoiceMail : NSObject <SVXServiceCommandHandling> {
    SVXAudioFileDecoder * _audioFileDecoder;
    NSString * _identifier;
    SVXModule * _module;
    SVXPlayVoicemailExpressionParserProvider * _playVoicemailExpressionParserProvider;
    SVXSessionManager * _sessionManager;
    SVXVoiceMailMarkAsReadHandler * _voiceMailMarkAsReadHandler;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

+ (Class)supportedCommandClass;

- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 withContext:(id)arg2 taskTracker:(id)arg3 completion:(id /* block */)arg4;
- (id)identifier;
- (id)initWithSessionManager:(id)arg1 module:(id)arg2;
- (id)initWithSessionManager:(id)arg1 module:(id)arg2 playVoicemailExpressionParserProvider:(id)arg3 audioFileDecoder:(id)arg4 voicemailMarkAsReadHandler:(id)arg5;
- (bool)isCommandUUFR:(id)arg1;

@end
