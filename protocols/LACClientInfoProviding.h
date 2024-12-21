/* Generated by RuntimeBrowser.
 */

@protocol LACClientInfoProviding <NSObject>

@required

+ (NSData *)applicationIdentityDataForProcessId:(int)arg1;
+ (NSData *)auditTokenDataForProcessId:(int)arg1;
+ (LACClientInfo *)infoForXPCClient:(id <LACXPCClient>)arg1;
+ (LACClientInfo *)infoForXPCClient:(id <LACXPCClient>)arg1 evaluationOptions:(NSDictionary *)arg2;
+ (bool)processId:(int)arg1 toAuditToken:(struct { unsigned int x1[8]; }*)arg2;

@end