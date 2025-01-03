/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesMediaRadioUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata> {
    LPiTunesMediaAsset * _artwork;
    NSString * _curator;
    NSString * _name;
    NSString * _storeFrontIdentifier;
    NSString * _storeIdentifier;
}

@property (nonatomic, retain) LPiTunesMediaAsset *artwork;
@property (nonatomic, copy) NSString *curator;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)artwork;
- (id)assetsToFetch;
- (id)curator;
- (id)name;
- (id)resolve;
- (void)setArtwork:(id)arg1;
- (void)setCurator:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)storeIdentifier;

@end
