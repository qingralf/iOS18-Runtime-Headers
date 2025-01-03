/* Generated by RuntimeBrowser.
 */

@protocol NFCCardSessionCallbackInterface <NSObject, NFSessionCallbackInterface>

@required

- (void)didConnectToReader;
- (void)didDisconnectFromReader;
- (void)didReceiveAPDU:(NSData *)arg1;
- (void)didTerminate:(NSError *)arg1;
- (void)fieldChanged:(bool)arg1;

@end
