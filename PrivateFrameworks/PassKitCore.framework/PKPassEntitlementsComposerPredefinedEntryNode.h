/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassEntitlementsComposerPredefinedEntryNode : PKPassEntitlementsComposerEntryNode {
    PKPredefinedSharedEntitlementSelection * _predefinedSelection;
}

- (void).cxx_destruct;
- (id)allPossibleManageability;
- (id)allPossibleShareability;
- (id)allPossibleVisibility;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPredefinedSelection:(id)arg1 parentEntitlementComposer:(id)arg2;
- (unsigned long long)manageability;
- (bool)possibleIntraAccountSharing;
- (unsigned long long)possibleManageability;
- (unsigned long long)possibleShareability;
- (unsigned long long)possibleVisibility;
- (unsigned long long)shareability;
- (unsigned long long)visibility;

@end
