/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGSearchEntityAccumulator : NSObject <PGSearchEntityProvider> {
    void graphSearchEntityDonationEnabled;
    void internalMePersonEntity;
    void internalRelatedPersonAndPetDescriptorByPersonIdentifier;
    void internalSearchEntitiesByMomentUUID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void synonymsByCategoryMask;
}

@property (nonatomic, readonly) PGGraphSearchEntity *mePersonEntity;
@property (nonatomic, readonly) NSDictionary *relatedPersonAndPetDescriptorByRelatedPersonIdentifier;
@property (nonatomic, readonly) NSDictionary *searchEntitiesByMomentUUID;

- (void).cxx_destruct;
- (bool)accumulateHolidays:(id)arg1 forMomentUUID:(id)arg2 error:(id*)arg3;
- (bool)accumulateHomeAndWorkWithHomeAndWorkKeywords:(id)arg1 forMomentUUID:(id)arg2 dateInterval:(id)arg3 error:(id*)arg4;
- (bool)accumulateMeanings:(id)arg1 forMomentUUID:(id)arg2 error:(id*)arg3;
- (bool)accumulatePersonAndPetRelationshipsFromGraph:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (bool)accumulatePublicEventsInPublicEventKeywords:(id)arg1 forMomentUUID:(id)arg2 dateInterval:(id)arg3 error:(id*)arg4;
- (bool)accumulateSeasons:(id)arg1 forMomentUUID:(id)arg2 error:(id*)arg3;
- (bool)accumulateTrip:(id)arg1 forMomentUUID:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithSynonymsByCategoryMask:(id)arg1;
- (id)mePersonEntity;
- (id)relatedPersonAndPetDescriptorByRelatedPersonIdentifier;
- (id)searchEntitiesByMomentUUID;

@end
