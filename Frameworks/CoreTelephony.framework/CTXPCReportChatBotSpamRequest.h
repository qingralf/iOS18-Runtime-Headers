/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCReportChatBotSpamRequest : CTXPCSubscriptionContextRequest

@property (nonatomic, readonly) CTLazuliDestination *destination;
@property (nonatomic, readonly) CTLazuliOperationID *operationID;
@property (nonatomic, readonly) CTLazuliChatBotSpamReportInformation *spamReportInfo;

+ (id)allowedClassesForArguments;

- (id)destination;
- (id)initWithContext:(id)arg1 destination:(id)arg2 spamReportInfo:(id)arg3 operationID:(id)arg4;
- (id)operationID;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)requiredEntitlement;
- (id)spamReportInfo;

@end