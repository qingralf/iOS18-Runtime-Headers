/* Generated by RuntimeBrowser.
 */

@protocol SESRKESessionCallbackInterface <SESSessionCallbackInterface>

@required

- (void)didCreateKey:(NSData *)arg1 forVehicle:(NSData *)arg2;
- (void)didInvalidateWithError:(NSError *)arg1;
- (void)didReceiveContinuationRequestFor:(NSNumber *)arg1 actionIdentifier:(NSNumber *)arg2 arbitraryData:(NSData *)arg3 fromVehicle:(NSData *)arg4;
- (void)didReceivePassthroughMessage:(NSData *)arg1 fromVehicle:(NSData *)arg2;
- (void)sendEvent:(NSDictionary *)arg1 fromVehicle:(NSData *)arg2;

@end