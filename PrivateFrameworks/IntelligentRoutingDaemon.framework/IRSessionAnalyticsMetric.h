/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligentRoutingDaemon.framework/IntelligentRoutingDaemon
 */

@interface IRSessionAnalyticsMetric : NSObject <CUTCoreAnalyticsMetric> {
    NSString * _bannerCandidateModelType;
    NSString * _bannerCandidateType;
    NSString * _chosenCandidateModelType;
    NSString * _chosenCandidateType;
    NSString * _clientIdentifier;
    NSNumber * _eventType;
    NSNumber * _internalAppName;
    NSNumber * _isOutsideApp;
    NSNumber * _miloAvailable;
    NSNumber * _postBannerInteraction;
}

@property (nonatomic, retain) NSString *bannerCandidateModelType;
@property (nonatomic, retain) NSString *bannerCandidateType;
@property (nonatomic, retain) NSString *chosenCandidateModelType;
@property (nonatomic, retain) NSString *chosenCandidateType;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) NSNumber *eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *internalAppName;
@property (nonatomic, retain) NSNumber *isOutsideApp;
@property (nonatomic, retain) NSNumber *miloAvailable;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSNumber *postBannerInteraction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bannerCandidateModelType;
- (id)bannerCandidateType;
- (id)chosenCandidateModelType;
- (id)chosenCandidateType;
- (id)clientIdentifier;
- (id)dictionaryRepresentation;
- (id)eventType;
- (id)initWithClientIdentifier:(id)arg1 internalAppName:(id)arg2 eventType:(id)arg3 miloAvailable:(id)arg4 bannerCandidateType:(id)arg5 bannerCandidateModelType:(id)arg6 chosenCandidateType:(id)arg7 chosenCandidateModelType:(id)arg8 postBannerInteraction:(id)arg9 isOutsideApp:(id)arg10;
- (id)internalAppName;
- (id)isOutsideApp;
- (id)miloAvailable;
- (id)name;
- (id)postBannerInteraction;
- (void)setBannerCandidateModelType:(id)arg1;
- (void)setBannerCandidateType:(id)arg1;
- (void)setChosenCandidateModelType:(id)arg1;
- (void)setChosenCandidateType:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setEventType:(id)arg1;
- (void)setInternalAppName:(id)arg1;
- (void)setIsOutsideApp:(id)arg1;
- (void)setMiloAvailable:(id)arg1;
- (void)setPostBannerInteraction:(id)arg1;

@end
