/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRepairKit.framework/CoreRepairKit
 */

@interface CRComponentAuth : NSObject {
    NSString * componentName;
}

@property (nonatomic, copy) NSString *componentName;

- (void).cxx_destruct;
- (bool)_checkForComponentFailureInDefaults:(id)arg1;
- (id)_getObjectForKeyFromDefaults:(id)arg1;
- (id)componentName;
- (long long)convertIORegDataToStatus:(id)arg1 authPass:(id)arg2;
- (long long)copyComponentStatus;
- (id)findUnsealedData;
- (long long)getAuthCPComponentStatus:(id)arg1;
- (id)init;
- (id)initWithComponentName:(id)arg1;
- (bool)isComponentFailed;
- (bool)isFirstAuthComplete;
- (void)setComponentName:(id)arg1;
- (long long)synchronouslycopyAuthStatus;

@end
