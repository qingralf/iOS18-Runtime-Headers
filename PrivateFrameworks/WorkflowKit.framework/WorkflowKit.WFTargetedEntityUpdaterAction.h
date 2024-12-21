/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WorkflowKit.WFTargetedEntityUpdaterAction : WorkflowKit.WFEntityUpdatingAction {
    void $__lazy_storage_$__localizedNameForParameterKey;
    void $__lazy_storage_$_propertyByIdentifier;
    void _entityMetadata;
}

@property (nonatomic, readonly) bool approvedForPublicShortcutsDrawer;
@property (nonatomic, readonly) NSArray *parameterDefinitions;

- (void).cxx_destruct;
- (id)copyWithSerializedParameters:(id)arg1;
- (id)initWithIdentifier:(id)arg1 actionMetadata:(id)arg2 entityMetadata:(id)arg3 metadataForParameterIdentifier:(id)arg4 definition:(id)arg5 serializedParameters:(id)arg6 appIntentDescriptor:(id)arg7 fullyQualifiedActionIdentifier:(id)arg8;
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2 metadataForParameterIdentifier:(id)arg3 definition:(id)arg4 serializedParameters:(id)arg5 appIntentDescriptor:(id)arg6 fullyQualifiedActionIdentifier:(id)arg7;
- (bool)isApprovedForPublicShortcutsDrawer;
- (id)localizedCategoryWithContext:(id)arg1;
- (id)localizedDefaultOutputNameWithContext:(id)arg1;
- (id)localizedDescriptionSummaryWithContext:(id)arg1;
- (id)localizedNameWithContext:(id)arg1;
- (id)parameterDefinitions;
- (bool)visibleForUse:(long long)arg1;

@end