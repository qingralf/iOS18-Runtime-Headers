/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAInviteSuggestions : NSObject <FAInviteSuggesterProtocol> {
    FAFamilySuggesterFeedbackContext * _feedbackContext;
    NSArray * _suggesters;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FAFamilySuggesterFeedbackContext *feedbackContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *suggesters;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)feedbackContext;
- (id)fetchFamilyMemberSuggestions:(long long*)arg1;
- (id)fetchFamilyMemberSuggestions:(long long*)arg1 useSuggester:(id)arg2;
- (long long)fetchSuggestedInviteTransportForContactId:(id)arg1 contactHandles:(id)arg2;
- (id)init;
- (id)initForOneTapInvite;
- (id)initWithSuggesters:(id)arg1;
- (id)recommendedSuggester:(id)arg1;
- (void)setFeedbackContext:(id)arg1;
- (void)setSuggesters:(id)arg1;
- (id)suggesters;

@end
