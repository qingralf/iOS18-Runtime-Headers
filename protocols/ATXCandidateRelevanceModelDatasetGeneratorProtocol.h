/* Generated by RuntimeBrowser.
 */

@protocol ATXCandidateRelevanceModelDatasetGeneratorProtocol <NSObject>

@required

+ (NSArray *)candidateDataPointsForSessions:(NSArray *)arg1 candidate:(ATXCandidate *)arg2;
+ (id)new;

- (id)init;
- (id)initWithConfig:(ATXCandidateRelevanceModelDatasetGeneratorConfig *)arg1;
- (id)initWithConfig:(ATXCandidateRelevanceModelDatasetGeneratorConfig *)arg1 inferredModeStream:(BMStream *)arg2 computedModeStream:(BMStream *)arg3 pointOfInterestStream:(BMStream *)arg4;
- (void)receiveCandidateDataPoint:(void *)arg1 completion:(void *)arg2 candidate:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXCandidateRelevanceModelDataPoint *, void*, id /* block */, void*, void, id /* block */, bool, void*, ATXCandidate *
- (void)receiveDataPoint:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXCandidateRelevanceModelDataPoint *, void*, id /* block */, void*, void, id /* block */, bool, void*
- (void)receiveDatasetSession:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*, id /* block */, void*, void, id /* block */, bool, void*

@end
