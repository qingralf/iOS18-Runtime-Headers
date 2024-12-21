/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSQuickActionConfigurationRequest : NSObject <NSCopying, NSSecureCoding> {
    SBSQuickActionControlRequest * _leadingQuickActionControlRequest;
    SBSQuickActionControlRequest * _trailingQuickActionControlRequest;
}

@property (nonatomic, readonly) SBSQuickActionControlRequest *leadingQuickActionControlRequest;
@property (nonatomic, readonly) SBSQuickActionControlRequest *trailingQuickActionControlRequest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_requestQuickActionControlWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 quickActionCategory:(unsigned long long)arg4 type:(unsigned long long)arg5 location:(long long)arg6;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)leadingQuickActionControlRequest;
- (void)requestQuickActionControlWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 type:(unsigned long long)arg4 location:(long long)arg5;
- (void)requestQuickActionControlWithQuickActionCategory:(unsigned long long)arg1 location:(long long)arg2;
- (id)trailingQuickActionControlRequest;

@end