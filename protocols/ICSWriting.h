/* Generated by RuntimeBrowser.
 */

@protocol ICSWriting

@required

- (NSString *)ICSStringWithOptions:(unsigned long long)arg1;
- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id <ICSAppendable>)arg2;
- (NSSet *)propertiesToExcludeForChecksum;
- (NSSet *)propertiesToHide;
- (NSSet *)propertiesToObscure;
- (bool)shouldObscureParameter:(NSString *)arg1;
- (bool)shouldObscureValue;

@end
