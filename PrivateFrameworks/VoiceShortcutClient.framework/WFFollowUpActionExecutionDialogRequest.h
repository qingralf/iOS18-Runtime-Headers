/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFFollowUpActionExecutionDialogRequest : WFDialogRequest {
    NSString * _actionIdentifier;
    NSString * _bundleIdentifier;
    NSData * _encodedToolInvocation;
    NSDictionary * _parameterValues;
    unsigned long long  _showOutputActionOptions;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSData *encodedToolInvocation;
@property (nonatomic, readonly) NSDictionary *parameterValues;
@property (nonatomic, readonly) unsigned long long showOutputActionOptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedToolInvocation;
- (id)initWithBundleIdentifier:(id)arg1 actionIdentifier:(id)arg2 parameterValues:(id)arg3 showOutputActionOptions:(unsigned long long)arg4 encodedToolInvocation:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)parameterValues;
- (unsigned long long)showOutputActionOptions;

@end
