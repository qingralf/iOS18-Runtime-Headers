/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCEnablePINRequest : CTXPCSubscriptionContextRequest

@property (nonatomic, readonly) bool enable;
@property (nonatomic, readonly) NSString *pin;

+ (id)allowedClassesForArguments;

- (bool)enable;
- (id)initWithContext:(id)arg1 enable:(bool)arg2 pin:(id)arg3;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)pin;
- (int)requiredEntitlement;

@end
