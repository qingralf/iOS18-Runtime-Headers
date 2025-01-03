/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetectScreenGazeRequest : VNStatefulRequest <VNFaceObservationAccepting> {
    VNScreenGazeState * _state;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *inputFaceObservations;
@property (readonly, copy) NSArray *results;
@property (nonatomic) unsigned long long screenSize;
@property (readonly) Class superclass;
@property (nonatomic) long long temporalSmoothingFrameCount;

+ (unsigned long long)applicableRevisionForDependentRequestOfClass:(Class)arg1 beingPerformedByRevision:(unsigned long long)arg2;
+ (Class)configurationClass;
+ (id)publicRevisionsSet;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (void).cxx_destruct;
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)init;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (bool)resultsAreAssignedWithOriginatingRequestSpecifier;
- (unsigned long long)screenSize;
- (void)setScreenSize:(unsigned long long)arg1;
- (void)setTemporalSmoothingFrameCount:(long long)arg1;
- (long long)temporalSmoothingFrameCount;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
