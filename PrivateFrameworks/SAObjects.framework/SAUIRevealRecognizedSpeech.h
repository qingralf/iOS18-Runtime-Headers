/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIRevealRecognizedSpeech : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *asrAlternatives;
@property (nonatomic, copy) NSString *overriddenSpeech;
@property (nonatomic, retain) SASRecognition *recognition;
@property (nonatomic, copy) NSString *speechRecognizedAceId;

- (id)asrAlternatives;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)overriddenSpeech;
- (id)recognition;
- (bool)requiresResponse;
- (void)setAsrAlternatives:(id)arg1;
- (void)setOverriddenSpeech:(id)arg1;
- (void)setRecognition:(id)arg1;
- (void)setSpeechRecognizedAceId:(id)arg1;
- (id)speechRecognizedAceId;

@end
