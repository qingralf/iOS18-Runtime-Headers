/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCDeleteChatRequest : CTXPCSubscriptionContextRequest

@property (nonatomic, readonly) NSString *chat;

+ (id)allowedClassesForArguments;

- (id)chat;
- (id)initWithContext:(id)arg1 chat:(id)arg2;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)requiredEntitlement;

@end
