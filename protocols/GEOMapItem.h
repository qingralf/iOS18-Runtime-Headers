/* Generated by RuntimeBrowser.
 */

@protocol GEOMapItem <NSObject>

@required

- (int)_RAPFlowType;
- (NSArray *)_additionalPlaceInfos;
- (int)_addressGeocodeAccuracy;
- (NSArray *)_allPhotoAttributions;
- (NSSet *)_alternateIdentifiers;
- (NSArray *)_alternateMapsCategoryIDs;
- (NSArray *)_alternateMapsCategoryMUIDs;
- (NSArray *)_alternateSearchableNames;
- (NSArray *)_amenities;
- (<GEOAnnotatedItemList> *)_annotatedItemList;
- (NSArray *)_appleRatings;
- (unsigned long long)_areaHighlightId;
- (double)_areaInMeters;
- (GEOMapRegion *)_arrivalMapRegionForTransportType:(int)arg1;
- (GEOMapItemAdditionalPlaceInfo *)_asPlaceInfo;
- (GEOAssociatedApp *)_associatedApp;
- (GEOMapItemPlaceAttribution *)_attribution;
- (NSString *)_bestAvailableCountryCode;
- (NSURL *)_bestAvatarBrandIconURLForSize:(struct CGSize { double x1; double x2; })arg1 allowSmaller:(bool)arg2;
- (NSURL *)_bestHeroBrandIconURLForSize:(struct CGSize { double x1; double x2; })arg1 allowSmaller:(bool)arg2;
- (NSURL *)_bestNavbarBrandIconURLForSize:(struct CGSize { double x1; double x2; })arg1 allowSmaller:(bool)arg2;
- (unsigned long long)_brandMUID;
- (NSArray *)_browseCategories;
- (NSArray *)_businessHours;
- (NSString *)_businessURL;
- (bool)_canDownloadMorePhotos;
- (NSArray *)_captionedPhotoAlbums;
- (NSArray *)_childItems;
- (GEOMapItemClientAttributes *)_clientAttributes;
- (GEOMapItemContainedPlace *)_containedPlace;
- (unsigned long long)_customIconID;
- (NSString *)_disambiguationName;
- (bool)_enableRAPLightweightFeedback;
- (GEOEnclosingPlace *)_enclosingPlace;
- (<GEOEncyclopedicInfo> *)_encyclopedicInfo;
- (GEOEnhancedPlacement *)_enhancedPlacement;
- (GEOEnrichmentData *)_enrichmentData;
- (GEOEnrichmentInfo *)_enrichmentInfo;
- (GEOEVCharger *)_evCharger;
- (GEOExploreGuides *)_exploreGuides;
- (NSArray *)_externalActionLinks;
- (GEORestaurantFeaturesLink *)_featureLink;
- (GEORelatedPlaceList *)_firstRelatedPlaceListForType:(int)arg1;
- (GEOPDFlyover *)_flyover;
- (NSString *)_flyoverAnnouncementMessage;
- (unsigned long long)_groundViewLocationId;
- (bool)_hasAnyAmenities;
- (bool)_hasAppleRatings;
- (bool)_hasAreaHighlightId;
- (bool)_hasAreaInMeters;
- (bool)_hasBrandMUID;
- (bool)_hasBusinessHours;
- (bool)_hasCaptionedPhotoAlbum;
- (bool)_hasCurrentOperatingHours;
- (bool)_hasEVCharger;
- (bool)_hasEnclosingPlace;
- (bool)_hasEncyclopedicInfo;
- (bool)_hasFeatureLink;
- (bool)_hasFlyover;
- (bool)_hasGroundViewLocationId;
- (bool)_hasLinkedServices;
- (bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (bool)_hasMUID;
- (bool)_hasOperatingHours;
- (bool)_hasPOIClaim;
- (bool)_hasPlaceCollectionPullQuotes;
- (bool)_hasPlaceDescription;
- (bool)_hasPlaceQuestionnaire;
- (bool)_hasPriceRange;
- (bool)_hasResolvablePartialInformation;
- (bool)_hasResultProviderID;
- (bool)_hasTelephone;
- (bool)_hasTransit;
- (bool)_hasUserRatingScore;
- (bool)_hasVenueFeatureType;
- (bool)_hasWifiFingerprintConfidence;
- (bool)_hasWifiFingerprintLabelStatusCode;
- (bool)_hasWifiFingerprintLabelType;
- (GEOPDHikeAssociatedInfo *)_hikeAssociatedInfo;
- (GEOPDHikeGeometry *)_hikeGeometry;
- (int)_hikeGeometryElevationModel;
- (GEOHikeSummary *)_hikeSummary;
- (GEOMapItemIdentifier *)_identifier;
- (NSArray *)_identifierHistory;
- (GEOInlineRapEnablement *)_inlineRapEnablement;
- (bool)_isInLinkedPlaceRelationship;
- (bool)_isPartiallyClientized;
- (bool)_isStandaloneBrand;
- (bool)_isTransitDisplayFeature;
- (NSString *)_iso3166CountryCode;
- (NSString *)_iso3166SubdivisionCode;
- (GEOLabelGeometry *)_labelGeometry;
- (NSArray *)_linkedServices;
- (NSArray *)_localizedCategoryNamesForType:(unsigned int)arg1;
- (<GEOMapItem> *)_mapItemByStrippingOptionalData;
- (NSString *)_mapsCategoryId;
- (NSNumber *)_mapsCategoryMUID;
- (unsigned int)_maxScoreForPriceRange;
- (GEOMessageLink *)_messageLink;
- (GEOMiniBrowseCategories *)_miniBrowseCategories;
- (unsigned long long)_muid;
- (GEOMuninViewState *)_muninViewState;
- (bool)_needsAttribution;
- (float)_normalizedUserRatingScore;
- (unsigned long long)_openingHoursOptions;
- (bool)_optsOutOfTelephoneAds;
- (GEOAppleRating *)_overallAppleRating;
- (int)_parsecSectionType;
- (NSArray *)_photos;
- (GEOMapItemPhotosAttribution *)_photosAttribution;
- (float)_photosMemoryScore;
- (GEOPlace *)_place;
- (int)_placeCategoryType;
- (NSArray *)_placeCollectionPullQuotes;
- (NSArray *)_placeCollections;
- (NSArray *)_placeCollectionsIds;
- (GEOPDPlace *)_placeData;
- (NSData *)_placeDataAsData;
- (NSString *)_placeDescription;
- (int)_placeDisplayStyle;
- (int)_placeDisplayType;
- (GEOPlaceQuestionnaire *)_placeQuestionnaire;
- (GEOPlaceResult *)_placeResult;
- (int)_placeType;
- (GEOPlacecardLayoutData *)_placecardLayoutData;
- (NSString *)_poiCategory;
- (GEOPOIClaim *)_poiClaim;
- (NSString *)_poiPinpointURLString;
- (NSString *)_poiSurveyURLString;
- (GEOPriceDescription *)_priceDescription;
- (unsigned int)_priceRange;
- (NSURL *)_providerURL;
- (NSArray *)_quickLinks;
- (GEORelatedPlaceList *)_relatedPlaceListForComponentIdentifier:(int)arg1;
- (NSArray *)_relatedPlaceLists;
- (bool)_responseStatusIsIncomplete;
- (int)_resultProviderID;
- (unsigned int)_resultSnippetDistanceDisplayThreshold;
- (NSString *)_resultSnippetLocationString;
- (NSArray *)_reviews;
- (GEOMapItemReviewsAttribution *)_reviewsAttribution;
- (NSArray *)_roadAccessPoints;
- (unsigned int)_sampleSizeForUserRatingScore;
- (NSArray *)_searchResultPhotoCarousel;
- (NSArray *)_secondaryQuickLinks;
- (bool)_showSuggestAnEditButton;
- (NSString *)_spokenAddressForLocale:(NSString *)arg1;
- (GEOStorefrontInfo *)_storefrontInfo;
- (GEOStorefrontPresentationInfo *)_storefrontPresentationInfo;
- (GEOFeatureStyleAttributes *)_styleAttributes;
- (NSString *)_telephone;
- (NSArray *)_tips;
- (GEOTooltip *)_tooltip;
- (unsigned long long)_totalPhotoCount;
- (GEOTrailHead *)_trailHead;
- (<GEOTransitAttribution> *)_transitAttribution;
- (<GEOMapItemTransitInfo> *)_transitInfo;
- (<GEOTransitVehiclePosition> *)_transitVehiclePosition;
- (NSString *)_vendorID;
- (int)_venueFeatureType;
- (<GEOMapItemVenueInfo> *)_venueInfo;
- (GEOViewportFrame *)_viewportFrame;
- (NSString *)_walletCategoryIdentifier;
- (NSString *)_walletCategoryLocalizedString;
- (NSString *)_walletCategoryLocalizedStringLocale;
- (GEOStyleAttributes *)_walletCategoryStyling;
- (NSString *)_walletMapsCategoryIdentifier;
- (NSString *)_walletPlaceLocalizedString;
- (NSString *)_walletPlaceLocalizedStringLocale;
- (GEOStyleAttributes *)_walletPlaceStyling;
- (NSURL *)_webURL;
- (unsigned int)_wifiFingerprintConfidence;
- (int)_wifiFingerprintLabelStatusCode;
- (int)_wifiFingerprintLabelType;
- (NSDictionary *)addressDictionary;
- (GEOAddressObject *)addressObject;
- (NSArray *)areasOfInterest;
- (GEOBusinessAssets *)businessAssets;
- (double)cachingRadiusMeters;
- (struct { double x1; double x2; })centerCoordinate;
- (int)contactAddressType;
- (bool)contactIsMe;
- (NSString *)contactName;
- (NSString *)contactSpokenName;
- (struct { double x1; double x2; })coordinate;
- (GEOMapItemDetourInfo *)detourInfo;
- (GEOLocalizedString *)disclaimerText;
- (GEOMapRegion *)displayMapRegion;
- (GEOMapRegion *)displayMapRegionOrNil;
- (float)displayMaxZoom;
- (float)displayMinZoom;
- (NSData *)encodedData;
- (NSDate *)eventDate;
- (NSString *)eventName;
- (NSData *)externalTransitStationCode;
- (GEOAddress *)geoAddress;
- (GEOMapRegion *)geoFenceMapRegion;
- (GEOMapRegion *)geoFenceMapRegionOrNil;
- (bool)hasDisplayMaxZoom;
- (bool)hasDisplayMinZoom;
- (bool)hasExpiredComponents;
- (bool)hasVenueCapacity;
- (bool)isDisputed;
- (bool)isEqualToMapItem:(id <GEOMapItem>)arg1;
- (bool)isEventAllDay;
- (bool)isValid;
- (void)iterateGroundViewsWithBlock:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, double, NSString *, NSString *, NSString *, void*
- (struct { double x1; double x2; })labelCoordinate;
- (int)mapDisplayType;
- (NSString *)name;
- (GEOMapRegion *)offlineDownloadRegion;
- (int)referenceFrame;
- (NSString *)secondaryName;
- (NSString *)secondarySpokenName;
- (NSString *)shortAddress;
- (NSArray *)spatialMappedCategories;
- (NSArray *)spatialMappedPlaceCategories;
- (NSString *)spokenNameForLocale:(NSString *)arg1;
- (NSArray *)supportedTransitPaymentMethods;
- (bool)supportsOfflineMaps;
- (NSTimeZone *)timezone;
- (NSArray *)transitPaymentMethodSuggestions;
- (GEOMapItemIdentifier *)transitStationIdentifier;
- (GEOPDURLData *)urlData;
- (long long)venueCapacity;
- (NSString *)weatherDisplayName;

@optional

- (<GEOMapItem> *)_mapItemBySettingIsTransitDisplayFeature:(bool)arg1;

@end