/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCSendOneToManyFileTransferRequest : CTXPCSubscriptionContextRequest

@property (nonatomic, readonly) CTLazuliDestinationList *destinationList;
@property (nonatomic, readonly) CTLazuliFileTransferDescriptor *fileTransferDescriptor;
@property (nonatomic, readonly) CTLazuliMessageID *messageID;

+ (id)allowedClassesForArguments;
+ (bool)isSensitiveMessage;

- (id)destinationList;
- (id)fileTransferDescriptor;
- (id)initWithContext:(id)arg1 to:(id)arg2 withMessageID:(id)arg3 withDescriptor:(id)arg4;
- (id)messageID;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)requiredEntitlement;

@end