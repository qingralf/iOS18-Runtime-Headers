/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassEntitlementsComposerEntryNode : NSObject <NSCopying, PKPassEntitlementsComposerView> {
    NSMutableArray * _children;
    bool  _editable;
    <NSCopying> * _identifier;
    PKPassEntitlementsComposerEntryNode * _parent;
    PKPassEntitlementsComposer * _parentEntitlementComposer;
    NSMutableDictionary * _properties;
}

@property (nonatomic, readonly) NSArray *allPossibleCapabilitySets;
@property (nonatomic, readonly) NSArray *allPossibleManageability;
@property (nonatomic, readonly) NSArray *allPossibleShareability;
@property (nonatomic, readonly) NSArray *allPossibleVisibility;
@property (nonatomic, retain) NSMutableArray *children;
@property (nonatomic) bool editable;
@property (nonatomic) bool enabled;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic) bool intraAccountSharingEnabled;
@property (nonatomic) bool isManagingEntitlementConfiguration;
@property (nonatomic) bool isManagingTimeConfiguration;
@property (nonatomic) unsigned long long manageability;
@property (nonatomic, readonly) unsigned long long maxSelectionCount;
@property (nonatomic) PKPassEntitlementsComposerEntryNode *parent;
@property (nonatomic, readonly) bool possibleIntraAccountSharing;
@property (nonatomic, readonly) unsigned long long possibleManageability;
@property (nonatomic, readonly) unsigned long long possibleShareability;
@property (nonatomic, readonly) PKPassShareTimeConfiguration *possibleTimeConfiguration;
@property (nonatomic, readonly) unsigned long long possibleVisibility;
@property (nonatomic) unsigned long long shareability;
@property (nonatomic, retain) PKPassShareTimeConfiguration *timeConfiguration;
@property (nonatomic) unsigned long long visibility;

- (void).cxx_destruct;
- (id)_allPossibleCapabilityForAccumulateBlock:(id /* block */)arg1;
- (id)_effectiveValueForProperty:(unsigned long long)arg1 ofType:(Class)arg2;
- (unsigned long long)_leastRestrictivePossibleCapabilityForAccumulateBlock:(id /* block */)arg1 maxCapability:(unsigned long long)arg2;
- (unsigned long long)_mostRestrictiveCapabilityForAccumulateBlock:(id /* block */)arg1 maxCapability:(unsigned long long)arg2;
- (void)_mutateCapability:(id /* block */)arg1;
- (id)allPossibleCapabilitySets;
- (id)allPossibleManageability;
- (id)allPossibleShareability;
- (id)allPossibleVisibility;
- (void)childEntryNodeDidSetProperty:(unsigned long long)arg1 updatedChildNode:(id)arg2;
- (id)children;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)editable;
- (bool)enabled;
- (void)enumerateEntitlementEntries:(id /* block */)arg1;
- (bool)hasEnabledEntitlements;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 parentEntitlementComposer:(id)arg2;
- (bool)intraAccountSharingEnabled;
- (bool)isManagingEntitlementConfiguration;
- (bool)isManagingTimeConfiguration;
- (unsigned long long)manageability;
- (unsigned long long)maxSelectionCount;
- (id)parent;
- (void)parentEntryNodeWillSetProperty:(unsigned long long)arg1 updatedParentNode:(id)arg2;
- (bool)possibleIntraAccountSharing;
- (unsigned long long)possibleManageability;
- (unsigned long long)possibleShareability;
- (id)possibleTimeConfiguration;
- (unsigned long long)possibleVisibility;
- (void)resetCapabilities;
- (void)setChildren:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1 notifyIfRoot:(bool)arg2;
- (void)setIntraAccountSharingEnabled:(bool)arg1;
- (void)setIsManagingEntitlementConfiguration:(bool)arg1;
- (void)setIsManagingTimeConfiguration:(bool)arg1;
- (void)setManageability:(unsigned long long)arg1;
- (void)setParent:(id)arg1;
- (void)setShareability:(unsigned long long)arg1;
- (void)setTimeConfiguration:(id)arg1;
- (void)setVisibility:(unsigned long long)arg1;
- (unsigned long long)shareability;
- (id)timeConfiguration;
- (void)updateCapabilitiesWithSet:(id)arg1;
- (unsigned long long)visibility;

@end