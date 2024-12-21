/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFActionSessionKitSessionConfiguration : NSObject {
    NSString * _bundleIdentifier;
    bool  _deviceHasDynamicIsland;
    NSDictionary * _toastDurationPerRunSource;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool deviceHasDynamicIsland;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (bool)deviceHasDynamicIsland;
- (id)initWithBundleIdentifier:(id)arg1 toastDurationPerRunSource:(id)arg2;
- (double)toastDurationForRunSource:(id)arg1;

@end