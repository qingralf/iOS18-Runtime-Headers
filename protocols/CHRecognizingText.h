/* Generated by RuntimeBrowser.
 */

@protocol CHRecognizingText <CHRecognizing>

@required

- (NSCharacterSet *)activeCharacterSet;
- (int)autoCapitalizationMode;
- (int)autoCorrectionMode;
- (int)baseWritingDirection;
- (int)contentType;
- (bool)enableGen2CharacterLMIfAvailable;
- (bool)enableGen2ModelIfAvailable;
- (id)initWithMode:(int)arg1 locale:(NSLocale *)arg2;
- (NSLocale *)locale;
- (int)recognitionMode;
- (void)setActiveCharacterSet:(NSCharacterSet *)arg1;
- (void)setAutoCapitalizationMode:(int)arg1;
- (void)setAutoCorrectionMode:(int)arg1;
- (void)setBaseWritingDirection:(int)arg1;
- (void)setContentType:(int)arg1;

@end