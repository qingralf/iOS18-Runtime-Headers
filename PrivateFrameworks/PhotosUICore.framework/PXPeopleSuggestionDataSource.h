/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleSuggestionDataSource : NSObject <PHPhotoLibraryChangeObserver, PXPeopleSuggestionManagerDataSource> {
    unsigned long long  _flowType;
    unsigned long long  _initialPageLimit;
    PHFetchResult * _mergeCandidateFetchResult;
    NSArray * _mergeCandidates;
    unsigned long long  _suggestionFetchType;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long flowType;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long initialPageLimit;
@property (nonatomic, copy) PHFetchResult *mergeCandidateFetchResult;
@property (nonatomic, copy) NSArray *mergeCandidates;
@property (nonatomic) unsigned long long suggestionFetchType;
@property (readonly) Class superclass;

+ (void)_mergeAndSaveUserFeedbackForPersons:(id)arg1 personChangeRequest:(id)arg2;

- (void).cxx_destruct;
- (bool)cancelSuggestionForPerson:(id)arg1 withToken:(id)arg2 error:(id*)arg3;
- (id)commitSuggestionsForPerson:(id)arg1 withConfirmedSuggestions:(id)arg2 andRejectedSuggestions:(id)arg3;
- (id)fetchAndCacheMergeCandidatesForPerson:(id)arg1;
- (unsigned long long)flowType;
- (id)initWithFlowType:(unsigned long long)arg1;
- (unsigned long long)initialPageLimit;
- (id)mergeCandidateFetchResult;
- (id)mergeCandidates;
- (void)photoLibraryDidChange:(id)arg1;
- (void)setFlowType:(unsigned long long)arg1;
- (void)setInitialPageLimit:(unsigned long long)arg1;
- (void)setMergeCandidateFetchResult:(id)arg1;
- (void)setMergeCandidates:(id)arg1;
- (void)setSuggestionFetchType:(unsigned long long)arg1;
- (void)startListeningForLibraryChanges;
- (void)stopListeningForLibraryChanges;
- (unsigned long long)suggestionFetchType;
- (id)suggestionsForPerson:(id)arg1 withConfirmedSuggestions:(id)arg2 andRejectedSuggestions:(id)arg3 completion:(id /* block */)arg4;

@end
