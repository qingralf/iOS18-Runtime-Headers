/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAddViews : SABaseClientBoundCommand <AFAceCommandClientFeedbackEnumerating, SAConditionallyMutatingClientBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSArray *callbacks;
@property (nonatomic, copy) NSArray *coordinationOptions;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *dialogPhase;
@property (nonatomic, copy) NSString *displayTarget;
@property (nonatomic, retain) SAUIFeedbackForm *feedbackForm;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool immersiveExperience;
@property (nonatomic) bool mutatingCommand;
@property (nonatomic, copy) NSString *patternId;
@property (nonatomic, copy) NSString *patternType;
@property (nonatomic) bool persistentAcrossInvocations;
@property (nonatomic, copy) NSString *personaId;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, retain) SASendCommands *refreshCommand;
@property (nonatomic, retain) SAUIRequestEndBehavior *requestEndBehavior;
@property (nonatomic) bool requiresResponse;
@property (nonatomic, copy) NSString *responseMode;
@property (nonatomic) bool scrollToTop;
@property (readonly) Class superclass;
@property (nonatomic) bool supplemental;
@property (nonatomic) bool temporary;
@property (nonatomic, copy) NSArray *views;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)addViews;
+ (id)addViewsWithDictionary:(id)arg1 context:(id)arg2;

- (id)coordinationOptions;
- (id)dialogPhase;
- (id)displayTarget;
- (id)encodedClassName;
- (id)feedbackForm;
- (id)groupIdentifier;
- (bool)immersiveExperience;
- (bool)mutatingCommand;
- (id)patternId;
- (id)patternType;
- (bool)persistentAcrossInvocations;
- (id)personaId;
- (id)refreshCommand;
- (id)requestEndBehavior;
- (bool)requiresResponse;
- (id)responseMode;
- (bool)scrollToTop;
- (void)setCoordinationOptions:(id)arg1;
- (void)setDialogPhase:(id)arg1;
- (void)setDisplayTarget:(id)arg1;
- (void)setFeedbackForm:(id)arg1;
- (void)setImmersiveExperience:(bool)arg1;
- (void)setMutatingCommand:(bool)arg1;
- (void)setPatternId:(id)arg1;
- (void)setPatternType:(id)arg1;
- (void)setPersistentAcrossInvocations:(bool)arg1;
- (void)setPersonaId:(id)arg1;
- (void)setRefreshCommand:(id)arg1;
- (void)setRequestEndBehavior:(id)arg1;
- (void)setRequiresResponse:(bool)arg1;
- (void)setResponseMode:(id)arg1;
- (void)setScrollToTop:(bool)arg1;
- (void)setSupplemental:(bool)arg1;
- (void)setTemporary:(bool)arg1;
- (void)setViews:(id)arg1;
- (bool)supplemental;
- (bool)temporary;
- (id)views;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)_af_enumerateClientFeedbackDetails:(id /* block */)arg1;
- (void)af_addEntriesToAnalyticsContext:(id)arg1;
- (id)af_dialogIdentifiersForAnalyticsContext;
- (id)af_dialogPhase;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (id)sruif_dialogPhase;
- (long long)sruif_usefulUserResultType;

@end
