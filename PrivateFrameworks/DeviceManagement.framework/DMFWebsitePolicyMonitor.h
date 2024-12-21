/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFWebsitePolicyMonitor : NSObject {
    NSUUID * _identifier;
}

@property (nonatomic, readonly, copy) NSUUID *identifier;

+ (id)policyTypes;

- (void).cxx_destruct;
- (void)dealloc;
- (id)identifier;
- (id)initWithPolicyChangeHandler:(id /* block */)arg1;
- (void)requestPoliciesForWebsites:(id)arg1 completionHandler:(id /* block */)arg2;

@end