/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCSendFileTransferMessageRequest : CTXPCSubscriptionContextRequest

@property (nonatomic, readonly) CTLazuliDestination *destination;
@property (nonatomic, readonly) CTLazuliGroupChatUri *groupChatURI;
@property (nonatomic, readonly) CTLazuliFileTransferDescriptor *lazuliDescriptor;
@property (nonatomic, readonly) CTLazuliMessageID *messageID;

+ (id)allowedClassesForArguments;
+ (bool)isSensitiveMessage;

- (id)destination;
- (id)groupChatURI;
- (id)initWithContext:(id)arg1 destination:(id)arg2 messageID:(id)arg3 descriptor:(id)arg4;
- (id)initWithContext:(id)arg1 groupChatURI:(id)arg2 messageID:(id)arg3 descriptor:(id)arg4;
- (id)lazuliDescriptor;
- (id)messageID;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)requiredEntitlement;

@end