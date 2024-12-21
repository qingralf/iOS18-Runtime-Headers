/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreLibraryPersonalizationRequest : MPModelRequest <MPUserIdentityConsuming> {
    NSMutableDictionary * _itemIndexPathToOverridePropertySet;
    bool  _matchAlbumArtistsOnNameAndStoreID;
    MPMediaLibrary * _mediaLibraryOverrideForTestingOnly;
    MPSectionedCollection * _representedObjects;
    MPSectionedCollection * _unpersonalizedContentDescriptors;
    ICUserIdentity * _userIdentity;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *itemIndexPathToOverridePropertySet;
@property (nonatomic) bool matchAlbumArtistsOnNameAndStoreID;
@property (nonatomic, retain) MPMediaLibrary *mediaLibraryOverrideForTestingOnly;
@property (nonatomic, retain) MPSectionedCollection *representedObjects;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MPSectionedCollection *unpersonalizedContentDescriptors;
@property (nonatomic, copy) ICUserIdentity *userIdentity;

+ (id)libraryViewAllowingEmptyCollectionsForUserIdentity:(id)arg1;
+ (id)libraryViewWithMediaLibraryOverrideForTestingOnly:(id)arg1;
+ (id)libraryViewWithUserIdentity:(id)arg1;
+ (id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2;
+ (id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2 matchAlbumArtistOnStoreIdAndName:(bool)arg3;
+ (id)preferredQueue;
+ (bool)requiresNetwork;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithUnpersonalizedContentDescriptors:(id)arg1;
- (id)initWithUnpersonalizedRequest:(id)arg1 unpersonalizedContentDescriptors:(id)arg2;
- (id)itemIndexPathToOverridePropertySet;
- (bool)matchAlbumArtistsOnNameAndStoreID;
- (id)mediaLibraryOverrideForTestingOnly;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)propertiesForItemAtIndexPath:(id)arg1;
- (id)representedObjects;
- (void)setMatchAlbumArtistsOnNameAndStoreID:(bool)arg1;
- (void)setMediaLibraryOverrideForTestingOnly:(id)arg1;
- (void)setProperties:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)setRepresentedObjects:(id)arg1;
- (void)setUserIdentity:(id)arg1;
- (id)unpersonalizedContentDescriptors;
- (id)userIdentity;

@end