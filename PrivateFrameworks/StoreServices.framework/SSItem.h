/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItem : NSObject <SSURLConnectionRequestDelegate> {
    NSDate * _expirationDate;
    NSArray * _offers;
    NSDictionary * _properties;
    NSString * _tellAFriendBody;
    NSString * _tellAFriendBodyMIMEType;
    NSMutableArray * _tellAFriendHandlers;
    SSURLConnectionRequest * _tellAFriendRequest;
    NSString * _tellAFriendSubject;
}

@property (nonatomic, readonly) NSNumber *ITunesStoreIdentifier;
@property (nonatomic, readonly) NSArray *allItemOffers;
@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) float averageUserRating;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) SSItemOffer *defaultItemOffer;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isGameCenterEnabled, nonatomic, readonly) bool gameCenterEnabled;
@property (readonly) unsigned long long hash;
@property (getter=isHighDefinition, nonatomic, readonly) bool highDefinition;
@property (nonatomic, readonly) SSItemImageCollection *imageCollection;
@property (nonatomic, readonly) NSString *itemKind;
@property (nonatomic, readonly) NSString *itemTitle;
@property (nonatomic, readonly) long long numberOfUserRatings;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *thumbnailImages;
@property (nonatomic, readonly) NSURL *viewItemURL;

- (id)ITunesStoreIdentifier;
- (void)_finishTellAFriendLoadWithError:(id)arg1;
- (id)_offers;
- (void)_setExpirationDate:(id)arg1;
- (id)_tellAFriendDictionary;
- (id)allItemOffers;
- (id)artistIdentifier;
- (id)artistName;
- (float)averageUserRating;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)buyParameters;
- (id)collectionArtistName;
- (id)collectionIdentifier;
- (id)collectionIndexInCollectionGroup;
- (id)collectionName;
- (id)composerName;
- (id)contentRating;
- (void)dealloc;
- (id)defaultItemOffer;
- (id)description;
- (id)episodeIdentifier;
- (id)episodeSortIdentifier;
- (id)expirationDate;
- (id)genreIdentifier;
- (id)genreName;
- (id)imageCollection;
- (id)indexInCollection;
- (id)initWithItemDictionary:(id)arg1;
- (bool)isCompilation;
- (bool)isGameCenterEnabled;
- (bool)isHighDefinition;
- (bool)isRestricted;
- (id)itemKind;
- (id)itemOfferForIdentifier:(id)arg1;
- (id)itemTitle;
- (void)loadTellAFriendMessageWithCompletionHandler:(id /* block */)arg1;
- (id)longDescription;
- (id)mediaKind;
- (id)networkName;
- (id)numberOfCollectionsInCollectionGroup;
- (id)numberOfItemsInCollection;
- (long long)numberOfPrintedPages;
- (long long)numberOfUserRatings;
- (id)playableMedia;
- (id)podcastEpisodeGUID;
- (id)podcastFeedURL;
- (id)preOrderIdentifier;
- (id)priceDisplay;
- (id)rawItemDictionary;
- (id)relatedItemsForRelationType:(id)arg1;
- (id)releaseDate;
- (id)releaseDateString;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (id)seasonNumber;
- (id)sendGiftURL;
- (id)seriesName;
- (id)shortDescription;
- (id)softwareType;
- (id)tellAFriendBody;
- (id)tellAFriendBodyMIMEType;
- (id)tellAFriendBodyURL;
- (id)tellAFriendSubject;
- (id)thumbnailImages;
- (id)tweetInitialText;
- (id)tweetURL;
- (void)urlConnectionRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)videoDetails;
- (id)viewItemURL;
- (id)viewReviewsURL;

@end
