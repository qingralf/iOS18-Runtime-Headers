/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFConfiguredSystemWorkflowAction : WFConfiguredSystemAction {
    WFWorkflowIcon * _workflowIcon;
    NSString * _workflowIdentifier;
}

@property (nonatomic, retain) WFWorkflowIcon *workflowIcon;
@property (nonatomic, copy) NSString *workflowIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 workflowIdentifier:(id)arg2 workflowIcon:(id)arg3 associatedBundleIdentifier:(id)arg4 shortcutsMetadata:(id)arg5;
- (id)initWithName:(id)arg1 workflowIdentifier:(id)arg2 workflowIcon:(id)arg3 associatedBundleIdentifier:(id)arg4 shortcutsMetadata:(id)arg5 colorScheme:(id)arg6;
- (id)initWithWorkflow:(id)arg1 shortcutsMetadata:(id)arg2;
- (id)initWithWorkflow:(id)arg1 shortcutsMetadata:(id)arg2 colorScheme:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)previewIcon;
- (void)setWorkflowIcon:(id)arg1;
- (void)setWorkflowIdentifier:(id)arg1;
- (id)workflowIcon;
- (id)workflowIdentifier;

@end
