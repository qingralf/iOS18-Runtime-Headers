/* Generated by RuntimeBrowser.
 */

@protocol MCMClientMessageContext <NSObject, NSCopying>

@required

- (struct { unsigned int x1[8]; })auditToken;
- (NSObject<OS_xpc_object> *)message;
- (NSString *)personaUniqueString;
- (int)pid;
- (MCMPOSIXUser *)posixUser;

@end
