/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Moments.framework/Moments
 */

@interface MOEvent : NSObject <NSCopying, NSSecureCoding> {
    MOEventAnalytics * _analyticsEvent;
    NSString * _appBundle;
    unsigned long long  _category;
    NSDate * _creationDate;
    NSDate * _endDate;
    NSUUID * _eventIdentifier;
    NSDate * _expirationDate;
    bool  _fromFirstParty;
    NSString * _identifierFromProvider;
    MOEventLifeEvents * _lifeEventsEvent;
    MOEventMedia * _mediaEvent;
    MOEventMotionActivity * _motionActivityEvent;
    MOEventPeopleDiscovery * _peopleDiscoveryEvent;
    MOEventPhoto * _photoEvent;
    MOEventPortrait * _portraitEvent;
    MOEventProactiveSuggested * _proactiveSuggestedEvent;
    unsigned long long  _provider;
    unsigned long long  _rehydrationFailCount;
    MOEventRoutine * _routineEvent;
    MOEventSharedWithYou * _sharedWithYouEvent;
    MOEventSignificantContact * _significantContactEvent;
    NSDate * _sourceCreationDate;
    NSDate * _startDate;
    MOEventStateOfMind * _stateOfMindEvent;
    NSTimeZone * _timeZone;
    MOEventTravel * _travelEvent;
    MOEventWorkout * _workoutEvent;
}

@property (nonatomic, retain) RTAddress *address;
@property (nonatomic, retain) MOEventAnalytics *analyticsEvent;
@property (nonatomic, retain) NSString *appBundle;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic) double confidenceScore;
@property (nonatomic, retain) NSDictionary *contactClassificationMap;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, retain) NSNumber *densityScanDuration;
@property (nonatomic, retain) NSNumber *densityScore;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, retain) NSUUID *eventIdentifier;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) MOEventExtendedAttributes *extendedAttributes;
@property (nonatomic) double familiarityIndexLOI;
@property (nonatomic) bool fromFirstParty;
@property (nonatomic) long long gaPR;
@property (nonatomic, retain) GEOAddressObject *geoAddressObject;
@property (nonatomic, retain) NSString *identifierFromProvider;
@property (nonatomic, retain) NSNumber *interactionContactScore;
@property (nonatomic, retain) NSArray *interactionContacts;
@property (nonatomic, retain) NSString *interactionGroupName;
@property (nonatomic, retain) NSSet *interactionMechanisms;
@property (nonatomic, retain) PPScoredContact *interactionScoredContact;
@property (nonatomic, retain) NSArray *interactions;
@property (nonatomic) bool isFitnessPlusSession;
@property (nonatomic) bool isGComplete;
@property (nonatomic) bool isHighConfidence;
@property (nonatomic) bool isInvalid;
@property (nonatomic, retain) NSNumber *itemAttributionsCount;
@property (nonatomic) bool itemIsPinned;
@property (nonatomic, retain) NSArray *itemRecipients;
@property (nonatomic, retain) NSArray *itemSenders;
@property (nonatomic) unsigned long long itemShareDirection;
@property (nonatomic) unsigned long long itemSyndicationStatus;
@property (nonatomic, retain) NSURL *itemURL;
@property (nonatomic) unsigned long long lifeEventCategory;
@property (nonatomic, retain) MOEventLifeEvents *lifeEventsEvent;
@property (nonatomic, retain) RTLocation *location;
@property (nonatomic, retain) NSString *mediaAlbum;
@property (nonatomic, retain) NSString *mediaArtist;
@property (nonatomic, retain) MOEventMedia *mediaEvent;
@property (nonatomic, retain) NSString *mediaGenre;
@property (nonatomic, retain) NSArray *mediaPlaySessions;
@property (nonatomic, retain) NSString *mediaPlayerBundleId;
@property (nonatomic, retain) NSString *mediaProductId;
@property (nonatomic, retain) NSNumber *mediaRepetitions;
@property (nonatomic, retain) NSNumber *mediaSumTimePlayed;
@property (nonatomic, retain) NSString *mediaTitle;
@property (nonatomic, retain) NSString *mediaType;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, retain) MOEventMotionActivity *motionActivityEvent;
@property (nonatomic, retain) NSNumber *motionStepCount;
@property (nonatomic) unsigned long long motionType;
@property (nonatomic, retain) NSNumber *pCount;
@property (nonatomic, retain) NSDictionary *patterns;
@property (nonatomic, retain) MOEventPeopleDiscovery *peopleDiscoveryEvent;
@property (nonatomic, retain) PHAsset *photoAsset;
@property (nonatomic, retain) MOEventPhoto *photoEvent;
@property (nonatomic, retain) NSArray *photoMemoryAssets;
@property (nonatomic) unsigned long long photoMemoryCategory;
@property (nonatomic, retain) NSString *photoMemoryTitle;
@property (nonatomic) unsigned long long photoMomentSource;
@property (nonatomic) unsigned long long placeDiscovery;
@property (nonatomic, retain) NSData *placeMapItem;
@property (nonatomic, retain) NSString *placeName;
@property (nonatomic) double placeNameConfidence;
@property (nonatomic) unsigned long long placeSource;
@property (nonatomic) unsigned long long placeType;
@property (nonatomic) unsigned long long placeUserType;
@property (nonatomic, retain) NSString *poiCategory;
@property (nonatomic, retain) MOEventPortrait *portraitEvent;
@property (nonatomic, retain) MOWeather *predominantWeather;
@property (nonatomic, retain) MOEventProactiveSuggested *proactiveSuggestedEvent;
@property (nonatomic, readonly) unsigned long long provider;
@property (nonatomic) unsigned long long rehydrationFailCount;
@property (nonatomic, retain) MOEventRoutine *routineEvent;
@property (nonatomic, retain) NSDictionary *scoredTopics;
@property (nonatomic, retain) MOEventSharedWithYou *sharedWithYouEvent;
@property (nonatomic, retain) MOEventSignificantContact *significantContactEvent;
@property (nonatomic, retain) NSDate *sourceCreationDate;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, retain) MOEventStateOfMind *stateOfMindEvent;
@property (nonatomic, retain) PPEvent *suggestedEvent;
@property (nonatomic) unsigned long long suggestedEventCategory;
@property (nonatomic, retain) NSString *suggestedEventIdentifier;
@property (nonatomic, retain) NSString *suggestedEventTitle;
@property (nonatomic) unsigned long long timeAtHomeSubType;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, retain) MOEventTravel *travelEvent;
@property (nonatomic, retain) NSDictionary *trends;
@property (nonatomic, retain) NSArray *tripParts;
@property (nonatomic, retain) NSString *tripTitle;
@property (nonatomic, retain) NSNumber *workoutDuration;
@property (nonatomic, retain) MOEventWorkout *workoutEvent;
@property (nonatomic, retain) NSArray *workoutLocationRoute;
@property (nonatomic, retain) CLLocation *workoutLocationStart;
@property (nonatomic, retain) NSNumber *workoutTotalDistance;
@property (nonatomic, retain) NSNumber *workoutTotalEnergyBurned;
@property (nonatomic, retain) NSString *workoutType;

+ (id)FormatDate:(id)arg1;
+ (id)describeCategory:(unsigned long long)arg1;
+ (id)describeProvider:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionOf:(unsigned long long)arg1;
- (id)address;
- (id)analyticsEvent;
- (id)appBundle;
- (id)bundleSourceType;
- (unsigned long long)category;
- (double)confidenceScore;
- (id)contactClassificationMap;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)densityScanDuration;
- (id)densityScore;
- (id)describeCategory;
- (id)describeProvider;
- (id)description;
- (id)descriptionOfLifeEventCategory:(unsigned long long)arg1;
- (id)descriptionOfMode:(unsigned long long)arg1;
- (id)descriptionOfMotionType:(unsigned long long)arg1;
- (id)descriptionOfPhotoMomentSource:(unsigned long long)arg1;
- (id)displayNameOfScoredTopics:(id)arg1;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)eventIdentifier;
- (id)expirationDate;
- (id)extendedAttributes;
- (double)familiarityIndexLOI;
- (id)formatAddressWithFormatOption:(id)arg1;
- (id)formatAdministrativeAreaWithFormatOption:(id)arg1;
- (id)formatCountryWithFormatOption:(id)arg1;
- (id)formatLocalityWithFormatOption:(id)arg1;
- (bool)fromFirstParty;
- (long long)gaPR;
- (id)geoAddressObject;
- (unsigned long long)hash;
- (id)identifierFromProvider;
- (void)initSubEvent;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 creationDate:(id)arg4 provider:(unsigned long long)arg5 category:(unsigned long long)arg6;
- (id)interactionContactScore;
- (id)interactionContacts;
- (id)interactionGroupName;
- (id)interactionMechanisms;
- (id)interactionScoredContact;
- (id)interactions;
- (bool)isEqual:(id)arg1;
- (bool)isFitnessPlusSession;
- (bool)isGComplete;
- (bool)isHighConfidence;
- (bool)isHomeWorkVisit;
- (bool)isInvalid;
- (id)itemAttributionsCount;
- (bool)itemIsPinned;
- (id)itemRecipients;
- (id)itemSenders;
- (unsigned long long)itemShareDirection;
- (unsigned long long)itemSyndicationStatus;
- (id)itemURL;
- (unsigned long long)lifeEventCategory;
- (id)lifeEventsEvent;
- (id)location;
- (id)mediaAlbum;
- (id)mediaArtist;
- (id)mediaEvent;
- (id)mediaGenre;
- (id)mediaPlaySessions;
- (id)mediaPlayerBundleId;
- (id)mediaProductId;
- (id)mediaRepetitions;
- (id)mediaSumTimePlayed;
- (id)mediaTitle;
- (id)mediaType;
- (unsigned long long)mode;
- (id)motionActivityEvent;
- (id)motionStepCount;
- (unsigned long long)motionType;
- (id)pCount;
- (id)patterns;
- (id)peopleDiscoveryEvent;
- (id)photoAsset;
- (id)photoEvent;
- (id)photoMemoryAssets;
- (unsigned long long)photoMemoryCategory;
- (id)photoMemoryTitle;
- (unsigned long long)photoMomentSource;
- (unsigned long long)placeDiscovery;
- (id)placeMapItem;
- (id)placeName;
- (double)placeNameConfidence;
- (unsigned long long)placeSource;
- (unsigned long long)placeType;
- (unsigned long long)placeUserType;
- (id)poiCategory;
- (id)portraitEvent;
- (id)predominantWeather;
- (id)proactiveSuggestedEvent;
- (unsigned long long)provider;
- (unsigned long long)rehydrationFailCount;
- (id)routineEvent;
- (id)scoredTopics;
- (void)setAddress:(id)arg1;
- (void)setAnalyticsEvent:(id)arg1;
- (void)setAppBundle:(id)arg1;
- (void)setConfidenceScore:(double)arg1;
- (void)setContactClassificationMap:(id)arg1;
- (void)setDensityScanDuration:(id)arg1;
- (void)setDensityScore:(id)arg1;
- (void)setEventIdentifier:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setExtendedAttributes:(id)arg1;
- (void)setFamiliarityIndexLOI:(double)arg1;
- (void)setFromFirstParty:(bool)arg1;
- (void)setGaPR:(long long)arg1;
- (void)setGeoAddressObject:(id)arg1;
- (void)setIdentifierFromProvider:(id)arg1;
- (void)setInteractionContactScore:(id)arg1;
- (void)setInteractionContacts:(id)arg1;
- (void)setInteractionGroupName:(id)arg1;
- (void)setInteractionMechanisms:(id)arg1;
- (void)setInteractionScoredContact:(id)arg1;
- (void)setInteractions:(id)arg1;
- (void)setIsFitnessPlusSession:(bool)arg1;
- (void)setIsGComplete:(bool)arg1;
- (void)setIsHighConfidence:(bool)arg1;
- (void)setIsInvalid:(bool)arg1;
- (void)setItemAttributionsCount:(id)arg1;
- (void)setItemIsPinned:(bool)arg1;
- (void)setItemRecipients:(id)arg1;
- (void)setItemSenders:(id)arg1;
- (void)setItemShareDirection:(unsigned long long)arg1;
- (void)setItemSyndicationStatus:(unsigned long long)arg1;
- (void)setItemURL:(id)arg1;
- (void)setLifeEventCategory:(unsigned long long)arg1;
- (void)setLifeEventsEvent:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMediaAlbum:(id)arg1;
- (void)setMediaArtist:(id)arg1;
- (void)setMediaEvent:(id)arg1;
- (void)setMediaGenre:(id)arg1;
- (void)setMediaPlaySessions:(id)arg1;
- (void)setMediaPlayerBundleId:(id)arg1;
- (void)setMediaProductId:(id)arg1;
- (void)setMediaRepetitions:(id)arg1;
- (void)setMediaSumTimePlayed:(id)arg1;
- (void)setMediaTitle:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setMotionActivityEvent:(id)arg1;
- (void)setMotionStepCount:(id)arg1;
- (void)setMotionType:(unsigned long long)arg1;
- (void)setPCount:(id)arg1;
- (void)setPatterns:(id)arg1;
- (void)setPeopleDiscoveryEvent:(id)arg1;
- (void)setPhotoAsset:(id)arg1;
- (void)setPhotoEvent:(id)arg1;
- (void)setPhotoMemoryAssets:(id)arg1;
- (void)setPhotoMemoryCategory:(unsigned long long)arg1;
- (void)setPhotoMemoryTitle:(id)arg1;
- (void)setPhotoMomentSource:(unsigned long long)arg1;
- (void)setPlaceDiscovery:(unsigned long long)arg1;
- (void)setPlaceMapItem:(id)arg1;
- (void)setPlaceName:(id)arg1;
- (void)setPlaceNameConfidence:(double)arg1;
- (void)setPlaceSource:(unsigned long long)arg1;
- (void)setPlaceType:(unsigned long long)arg1;
- (void)setPlaceUserType:(unsigned long long)arg1;
- (void)setPoiCategory:(id)arg1;
- (void)setPortraitEvent:(id)arg1;
- (void)setPredominantWeather:(id)arg1;
- (void)setProactiveSuggestedEvent:(id)arg1;
- (void)setRehydrationFailCount:(unsigned long long)arg1;
- (void)setRoutineEvent:(id)arg1;
- (void)setScoredTopics:(id)arg1;
- (void)setSharedWithYouEvent:(id)arg1;
- (void)setSignificantContactEvent:(id)arg1;
- (void)setSourceCreationDate:(id)arg1;
- (void)setStateOfMindEvent:(id)arg1;
- (void)setSuggestedEvent:(id)arg1;
- (void)setSuggestedEventCategory:(unsigned long long)arg1;
- (void)setSuggestedEventIdentifier:(id)arg1;
- (void)setSuggestedEventTitle:(id)arg1;
- (void)setTimeAtHomeSubType:(unsigned long long)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTravelEvent:(id)arg1;
- (void)setTrends:(id)arg1;
- (void)setTripParts:(id)arg1;
- (void)setTripTitle:(id)arg1;
- (void)setWorkoutDuration:(id)arg1;
- (void)setWorkoutEvent:(id)arg1;
- (void)setWorkoutLocationRoute:(id)arg1;
- (void)setWorkoutLocationStart:(id)arg1;
- (void)setWorkoutTotalDistance:(id)arg1;
- (void)setWorkoutTotalEnergyBurned:(id)arg1;
- (void)setWorkoutType:(id)arg1;
- (id)sharedWithYouEvent;
- (id)significantContactEvent;
- (id)sourceCreationDate;
- (id)startDate;
- (id)stateOfMindEvent;
- (id)suggestedEvent;
- (unsigned long long)suggestedEventCategory;
- (id)suggestedEventIdentifier;
- (id)suggestedEventTitle;
- (unsigned long long)timeAtHomeSubType;
- (id)timeZone;
- (id)travelEvent;
- (id)trends;
- (id)tripParts;
- (id)tripTitle;
- (id)workoutDuration;
- (id)workoutEvent;
- (id)workoutLocationRoute;
- (id)workoutLocationStart;
- (id)workoutTotalDistance;
- (id)workoutTotalEnergyBurned;
- (id)workoutType;

@end