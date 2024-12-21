/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCCreateGroupChatRequest : CTXPCSubscriptionContextRequest

@property (nonatomic, readonly) CTLazuliGroupChatInformation *groupChatInfo;
@property (nonatomic, readonly) CTLazuliOperationID *operationID;

+ (id)allowedClassesForArguments;

- (id)groupChatInfo;
- (id)initWithContext:(id)arg1 groupChatInfo:(id)arg2 operationID:(id)arg3;
- (id)operationID;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)requiredEntitlement;

@end