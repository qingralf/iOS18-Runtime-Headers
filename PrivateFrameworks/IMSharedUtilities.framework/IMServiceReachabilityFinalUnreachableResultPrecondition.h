/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMServiceReachabilityFinalUnreachableResultPrecondition : IMServiceReachabilityPrecondition {
    NSString * _serviceName;
}

@property (nonatomic, retain) NSString *serviceName;

+ (id)preconditionWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)evaluateWithLatestResults:(id)arg1 requestedServices:(id)arg2;
- (id)serviceName;
- (void)setServiceName:(id)arg1;

@end
