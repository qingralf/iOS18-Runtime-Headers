/* Generated by RuntimeBrowser.
 */

@protocol _SFAutoFillContextProviding <NSObject>

@required

- (NSString *)alphanumericStrongPassword;
- (_SFFormAutoFillController *)autoFillController;
- (unsigned long long)autoFillFormType;
- (void)copyCurrentStrongPassword;
- (NSString *)currentStrongPassword;
- (NSString *)defaultStrongPassword;
- (void)makeStrongPasswordFieldViewableAndEditable:(bool)arg1;
- (void)replaceCurrentPasswordWithPassword:(NSString *)arg1;
- (NSURL *)url;

@end
