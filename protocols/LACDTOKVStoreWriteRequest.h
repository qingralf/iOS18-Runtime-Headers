/* Generated by RuntimeBrowser.
 */

@protocol LACDTOKVStoreWriteRequest <NSObject>

@required

- (bool)bypassEntitlements;
- (NSXPCConnection *)connection;
- (NSUUID *)contextUUID;
- (long long)key;
- (LACDTOKVStoreValue *)value;

@end
