/* Generated by RuntimeBrowser.
 */

@protocol NFCredentialSessionCallbackInterface <NSObject, NFSessionCallbackInterface>

@required

- (oneway void)didExpireTransactionForApplet:(NFApplet *)arg1;
- (oneway void)fieldChanged:(bool)arg1;
- (oneway void)notifyHCIData:(NSData *)arg1 appletIdentifier:(NSData *)arg2;

@end