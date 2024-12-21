/* Generated by RuntimeBrowser.
 */

@protocol IKAppKeyboardBridge <NSObject>

@required

- (bool)jsClearHintsOnSelection;
- (NSString *)jsHintRowTitle;
- (JSValue *)jsHints;
- (bool)jsShowDefaultHint;
- (bool)jsShowHintPreview;
- (NSString *)jsSource;
- (NSString *)jsText;
- (bool)jsUpdateSearchTextOnHintSelection;
- (void)setJSClearHintsOnSelection:(bool)arg1;
- (void)setJSHintRowTitle:(NSString *)arg1;
- (void)setJSHints:(JSValue *)arg1;
- (void)setJSShowDefaultHint:(bool)arg1;
- (void)setJSShowHintPreview:(bool)arg1;
- (void)setJSSource:(NSString *)arg1;
- (void)setJSText:(NSString *)arg1;
- (void)setJSUpdateSearchTextOnHintSelection:(bool)arg1;

@end