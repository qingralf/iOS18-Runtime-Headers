/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCPrepareCrossPlatformCellularPlanLabelRequest : CTXPCRequestMessage

+ (id)allowedClassesForArguments;

- (id)initWithPlanLabels:(id)arg1;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)planLabels;
- (int)requiredEntitlement;

@end