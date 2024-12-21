/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHSocialGroup : PHObject <PXDisplaySocialGroup, PXSelectionAssetContainer> {
    long long  _automaticOrder;
    NSString * _customTitle;
    NSSet * _exclusiveAssetIDs;
    NSSet * _inclusiveAssetIDs;
    NSManagedObjectID * _keyAssetID;
    long long  _keyAssetPickSource;
    long long  _manualOrder;
    NSSet * _memberPersonIDs;
    short  _socialGroupVerifiedType;
}

@property (nonatomic, readonly) long long automaticOrder;
@property (nonatomic, readonly) NSString *customTitle;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long keyAssetPickSource;
@property (nonatomic, readonly) long long manualOrder;
@property (nonatomic, readonly) bool px_canPerformFavoriteAction;
@property (nonatomic, readonly) NSString *px_defaultTitle;
@property (nonatomic, readonly) bool px_isEmpty;
@property (nonatomic, readonly) bool px_isFavorite;
@property (nonatomic, readonly) NSURL *px_navigationURL;
@property (nonatomic, readonly) NSString *px_title;
@property (nonatomic, readonly) short socialGroupVerifiedType;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)entityKeyMap;
+ (id)fetchSocialGroupsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchSocialGroupsWithOptions:(id)arg1;
+ (id)fetchSocialGroupsWithUUIDs:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsSharingComposition;
+ (bool)managedObjectSupportsTrashedState;
+ (id)nodeValueKeyPathForNodeValueName:(id)arg1;
+ (id)nodeValueNameFromPHSocialGroupPropertyName:(id)arg1;
+ (id)nodeValueNameFromPropertyName:(id)arg1;
+ (id)propertyNameFromNodeValueName:(id)arg1;

- (void).cxx_destruct;
- (long long)automaticOrder;
- (id)customTitle;
- (id)debugDescription;
- (id)description;
- (id)exclusiveAssetIDs;
- (id)exclusiveAssetInternalPredicateWithPeopleCount:(long long)arg1 exactCount:(bool)arg2;
- (id)inclusiveAssetIDs;
- (id)initWithNodeContainer:(id)arg1 photoLibrary:(id)arg2;
- (id)keyAssetID;
- (long long)keyAssetPickSource;
- (long long)manualOrder;
- (id)memberPersonIDs;
- (short)socialGroupVerifiedType;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (bool)px_canPerformFavoriteAction;
- (id)px_defaultTitle;
- (id)px_exportFolderName;
- (id)px_fetchEmptyContentString;
- (bool)px_isEmpty;
- (bool)px_isFavorite;
- (id)px_navigationURL;
- (id)px_title;
- (id)px_titleFor:(id)arg1;

@end