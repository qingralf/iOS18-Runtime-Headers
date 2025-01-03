/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesMediaMusicVideoUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata> {
    NSString * _artist;
    LPiTunesMediaAsset * _artwork;
    NSString * _name;
    NSString * _storeFrontIdentifier;
    NSString * _storeIdentifier;
}

@property (nonatomic, copy) NSString *artist;
@property (nonatomic, retain) LPiTunesMediaAsset *artwork;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)artist;
- (id)artwork;
- (id)assetsToFetch;
- (id)name;
- (id)resolve;
- (void)setArtist:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)storeIdentifier;

@end
