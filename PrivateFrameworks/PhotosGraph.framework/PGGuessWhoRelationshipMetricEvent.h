/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGuessWhoRelationshipMetricEvent : PGAbstractMetricEvent {
    PGManager * _manager;
    unsigned long long  _numberOfAgeDifferentThanMeSignalRegistrations;
    unsigned long long  _numberOfAgeDifferentThanMeSignalRegistrationsInCorrectInference;
    unsigned long long  _numberOfAnniversaryDateSignalRegistrations;
    unsigned long long  _numberOfAnniversaryDateSignalRegistrationsInCorrectInference;
    unsigned long long  _numberOfCoworkerCalendarSignalRegistrations;
    unsigned long long  _numberOfCoworkerCalendarSignalRegistrationsInCorrectInference;
    unsigned long long  _numberOfCoworkersAtWorkSignalRegistrations;
    unsigned long long  _numberOfCoworkersAtWorkSignalRegistrationsInCorrectInference;
    unsigned long long  _numberOfFamilyHolidaySignalRegistrations;
    unsigned long long  _numberOfFamilyHolidaySignalRegistrationsInCorrectInference;
    unsigned long long  _numberOfFriendNightOutSignalRegistrations;
    unsigned long long  _numberOfFriendNightOutSignalRegistrationsInCorrectInference;
    unsigned long long  _numberOfFriendsFamilyTripSignalRegistrations;
    unsigned long long  _numberOfFriendsFamilyTripSignalRegistrationsInCorrectInference;
    unsigned long long  _numberOfHomeMomentsSignalRegistrations;
    unsigned long long  _numberOfHomeMomentsSignalRegistrationsInCorrectInference;
    unsigned long long  _numberOfInferredChildren;
    unsigned long long  _numberOfInferredCoworkers;
    unsigned long long  _numberOfInferredFamilyMembers;
    unsigned long long  _numberOfInferredFriends;
    unsigned long long  _numberOfInferredParents;
    unsigned long long  _numberOfInferredPartners;
    unsigned long long  _numberOfLoveEmojisSignalRegistrations;
    unsigned long long  _numberOfLoveEmojisSignalRegistrationsInCorrectInference;
    unsigned long long  _numberOfParentContactNameSignalRegistrations;
    unsigned long long  _numberOfParentContactNameSignalRegistrationsInCorrectInference;
    unsigned long long  _numberOfParentGrandparentOldSignalRegistrations;
    unsigned long long  _numberOfParentGrandparentOldSignalRegistrationsInCorrectInference;
    unsigned long long  _numberOfPartnerTripSignalRegistrations;
    unsigned long long  _numberOfPartnerTripSignalRegistrationsInCorrectInference;
    unsigned long long  _numberOfPeople;
    unsigned long long  _numberOfSameFamilyNameSignalRegistrations;
    unsigned long long  _numberOfSameFamilyNameSignalRegistrationsInCorrectInference;
    unsigned long long  _numberOfTopPersonSignalRegistrations;
    unsigned long long  _numberOfTopPersonSignalRegistrationsInCorrectInference;
    unsigned long long  _numberOfTopTwoPersonSocialGroupSignalRegistrations;
    unsigned long long  _numberOfTopTwoPersonSocialGroupSignalRegistrationsInCorrectInference;
    unsigned long long  _numberOfWeekendSignalRegistrations;
    unsigned long long  _numberOfWeekendSignalRegistrationsInCorrectInference;
    NSDictionary * _payload;
}

@property (nonatomic) unsigned long long numberOfAgeDifferentThanMeSignalRegistrations;
@property (nonatomic) unsigned long long numberOfAgeDifferentThanMeSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfAnniversaryDateSignalRegistrations;
@property (nonatomic) unsigned long long numberOfAnniversaryDateSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfCoworkerCalendarSignalRegistrations;
@property (nonatomic) unsigned long long numberOfCoworkerCalendarSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfCoworkersAtWorkSignalRegistrations;
@property (nonatomic) unsigned long long numberOfCoworkersAtWorkSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfFamilyHolidaySignalRegistrations;
@property (nonatomic) unsigned long long numberOfFamilyHolidaySignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfFriendNightOutSignalRegistrations;
@property (nonatomic) unsigned long long numberOfFriendNightOutSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfFriendsFamilyTripSignalRegistrations;
@property (nonatomic) unsigned long long numberOfFriendsFamilyTripSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfHomeMomentsSignalRegistrations;
@property (nonatomic) unsigned long long numberOfHomeMomentsSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfInferredChildren;
@property (nonatomic) unsigned long long numberOfInferredCoworkers;
@property (nonatomic) unsigned long long numberOfInferredFamilyMembers;
@property (nonatomic) unsigned long long numberOfInferredFriends;
@property (nonatomic) unsigned long long numberOfInferredParents;
@property (nonatomic) unsigned long long numberOfInferredPartners;
@property (nonatomic) unsigned long long numberOfLoveEmojisSignalRegistrations;
@property (nonatomic) unsigned long long numberOfLoveEmojisSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfParentContactNameSignalRegistrations;
@property (nonatomic) unsigned long long numberOfParentContactNameSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfParentGrandparentOldSignalRegistrations;
@property (nonatomic) unsigned long long numberOfParentGrandparentOldSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfPartnerTripSignalRegistrations;
@property (nonatomic) unsigned long long numberOfPartnerTripSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfPeople;
@property (nonatomic) unsigned long long numberOfSameFamilyNameSignalRegistrations;
@property (nonatomic) unsigned long long numberOfSameFamilyNameSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfTopPersonSignalRegistrations;
@property (nonatomic) unsigned long long numberOfTopPersonSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfTopTwoPersonSocialGroupSignalRegistrations;
@property (nonatomic) unsigned long long numberOfTopTwoPersonSocialGroupSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfWeekendSignalRegistrations;
@property (nonatomic) unsigned long long numberOfWeekendSignalRegistrationsInCorrectInference;

- (void).cxx_destruct;
- (void)_incrementRelationshipSignalMetricsForRelationshipEdge:(id)arg1 inferredRelationshipCorrect:(bool)arg2;
- (id)_inferredRelationshipKeys;
- (id)_readableStringByRelationshipEdgeProperty;
- (id)_relationshipKeyForLabel:(id)arg1;
- (void)gatherMetricsWithProgressBlock:(id /* block */)arg1;
- (id)identifier;
- (id)initWithGraphManager:(id)arg1;
- (unsigned long long)numberOfAgeDifferentThanMeSignalRegistrations;
- (unsigned long long)numberOfAgeDifferentThanMeSignalRegistrationsInCorrectInference;
- (unsigned long long)numberOfAnniversaryDateSignalRegistrations;
- (unsigned long long)numberOfAnniversaryDateSignalRegistrationsInCorrectInference;
- (unsigned long long)numberOfCoworkerCalendarSignalRegistrations;
- (unsigned long long)numberOfCoworkerCalendarSignalRegistrationsInCorrectInference;
- (unsigned long long)numberOfCoworkersAtWorkSignalRegistrations;
- (unsigned long long)numberOfCoworkersAtWorkSignalRegistrationsInCorrectInference;
- (unsigned long long)numberOfFamilyHolidaySignalRegistrations;
- (unsigned long long)numberOfFamilyHolidaySignalRegistrationsInCorrectInference;
- (unsigned long long)numberOfFriendNightOutSignalRegistrations;
- (unsigned long long)numberOfFriendNightOutSignalRegistrationsInCorrectInference;
- (unsigned long long)numberOfFriendsFamilyTripSignalRegistrations;
- (unsigned long long)numberOfFriendsFamilyTripSignalRegistrationsInCorrectInference;
- (unsigned long long)numberOfHomeMomentsSignalRegistrations;
- (unsigned long long)numberOfHomeMomentsSignalRegistrationsInCorrectInference;
- (unsigned long long)numberOfInferredChildren;
- (unsigned long long)numberOfInferredCoworkers;
- (unsigned long long)numberOfInferredFamilyMembers;
- (unsigned long long)numberOfInferredFriends;
- (unsigned long long)numberOfInferredParents;
- (unsigned long long)numberOfInferredPartners;
- (unsigned long long)numberOfLoveEmojisSignalRegistrations;
- (unsigned long long)numberOfLoveEmojisSignalRegistrationsInCorrectInference;
- (unsigned long long)numberOfParentContactNameSignalRegistrations;
- (unsigned long long)numberOfParentContactNameSignalRegistrationsInCorrectInference;
- (unsigned long long)numberOfParentGrandparentOldSignalRegistrations;
- (unsigned long long)numberOfParentGrandparentOldSignalRegistrationsInCorrectInference;
- (unsigned long long)numberOfPartnerTripSignalRegistrations;
- (unsigned long long)numberOfPartnerTripSignalRegistrationsInCorrectInference;
- (unsigned long long)numberOfPeople;
- (unsigned long long)numberOfSameFamilyNameSignalRegistrations;
- (unsigned long long)numberOfSameFamilyNameSignalRegistrationsInCorrectInference;
- (unsigned long long)numberOfTopPersonSignalRegistrations;
- (unsigned long long)numberOfTopPersonSignalRegistrationsInCorrectInference;
- (unsigned long long)numberOfTopTwoPersonSocialGroupSignalRegistrations;
- (unsigned long long)numberOfTopTwoPersonSocialGroupSignalRegistrationsInCorrectInference;
- (unsigned long long)numberOfWeekendSignalRegistrations;
- (unsigned long long)numberOfWeekendSignalRegistrationsInCorrectInference;
- (id)payload;
- (void)setNumberOfAgeDifferentThanMeSignalRegistrations:(unsigned long long)arg1;
- (void)setNumberOfAgeDifferentThanMeSignalRegistrationsInCorrectInference:(unsigned long long)arg1;
- (void)setNumberOfAnniversaryDateSignalRegistrations:(unsigned long long)arg1;
- (void)setNumberOfAnniversaryDateSignalRegistrationsInCorrectInference:(unsigned long long)arg1;
- (void)setNumberOfCoworkerCalendarSignalRegistrations:(unsigned long long)arg1;
- (void)setNumberOfCoworkerCalendarSignalRegistrationsInCorrectInference:(unsigned long long)arg1;
- (void)setNumberOfCoworkersAtWorkSignalRegistrations:(unsigned long long)arg1;
- (void)setNumberOfCoworkersAtWorkSignalRegistrationsInCorrectInference:(unsigned long long)arg1;
- (void)setNumberOfFamilyHolidaySignalRegistrations:(unsigned long long)arg1;
- (void)setNumberOfFamilyHolidaySignalRegistrationsInCorrectInference:(unsigned long long)arg1;
- (void)setNumberOfFriendNightOutSignalRegistrations:(unsigned long long)arg1;
- (void)setNumberOfFriendNightOutSignalRegistrationsInCorrectInference:(unsigned long long)arg1;
- (void)setNumberOfFriendsFamilyTripSignalRegistrations:(unsigned long long)arg1;
- (void)setNumberOfFriendsFamilyTripSignalRegistrationsInCorrectInference:(unsigned long long)arg1;
- (void)setNumberOfHomeMomentsSignalRegistrations:(unsigned long long)arg1;
- (void)setNumberOfHomeMomentsSignalRegistrationsInCorrectInference:(unsigned long long)arg1;
- (void)setNumberOfInferredChildren:(unsigned long long)arg1;
- (void)setNumberOfInferredCoworkers:(unsigned long long)arg1;
- (void)setNumberOfInferredFamilyMembers:(unsigned long long)arg1;
- (void)setNumberOfInferredFriends:(unsigned long long)arg1;
- (void)setNumberOfInferredParents:(unsigned long long)arg1;
- (void)setNumberOfInferredPartners:(unsigned long long)arg1;
- (void)setNumberOfLoveEmojisSignalRegistrations:(unsigned long long)arg1;
- (void)setNumberOfLoveEmojisSignalRegistrationsInCorrectInference:(unsigned long long)arg1;
- (void)setNumberOfParentContactNameSignalRegistrations:(unsigned long long)arg1;
- (void)setNumberOfParentContactNameSignalRegistrationsInCorrectInference:(unsigned long long)arg1;
- (void)setNumberOfParentGrandparentOldSignalRegistrations:(unsigned long long)arg1;
- (void)setNumberOfParentGrandparentOldSignalRegistrationsInCorrectInference:(unsigned long long)arg1;
- (void)setNumberOfPartnerTripSignalRegistrations:(unsigned long long)arg1;
- (void)setNumberOfPartnerTripSignalRegistrationsInCorrectInference:(unsigned long long)arg1;
- (void)setNumberOfPeople:(unsigned long long)arg1;
- (void)setNumberOfSameFamilyNameSignalRegistrations:(unsigned long long)arg1;
- (void)setNumberOfSameFamilyNameSignalRegistrationsInCorrectInference:(unsigned long long)arg1;
- (void)setNumberOfTopPersonSignalRegistrations:(unsigned long long)arg1;
- (void)setNumberOfTopPersonSignalRegistrationsInCorrectInference:(unsigned long long)arg1;
- (void)setNumberOfTopTwoPersonSocialGroupSignalRegistrations:(unsigned long long)arg1;
- (void)setNumberOfTopTwoPersonSocialGroupSignalRegistrationsInCorrectInference:(unsigned long long)arg1;
- (void)setNumberOfWeekendSignalRegistrations:(unsigned long long)arg1;
- (void)setNumberOfWeekendSignalRegistrationsInCorrectInference:(unsigned long long)arg1;
- (bool)shouldReportMetrics;

@end
