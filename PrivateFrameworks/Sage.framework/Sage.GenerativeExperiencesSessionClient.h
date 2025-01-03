/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sage.framework/Sage
 */

@interface Sage.GenerativeExperiencesSessionClient : NSObject <GenerativeExperiencesServiceDelegate> {
    void client;
    void clientData;
    void completionOneShotRequest;
    void completionRequests;
    void registrationRequests;
}

- (void).cxx_destruct;
- (id)init;
- (void)sessionDidEncounterCompletionErrorFor:(id)arg1 generativeError:(id)arg2;
- (void)sessionDidEncounterRegistrationErrorFor:(id)arg1 documentID:(long long)arg2 generativeError:(id)arg3;
- (void)sessionDidProduceCompletionResponseFor:(id)arg1 element:(id)arg2 isComplete:(bool)arg3;
- (void)sessionDidProduceDocumentRegistrationStatusFor:(id)arg1 documentID:(long long)arg2 registrationStatus:(id)arg3 isComplete:(bool)arg4;
- (void)sessionDidProduceOneShotCompletionErrorFor:(id)arg1 generativeError:(id)arg2;
- (void)sessionDidProduceOneShotCompletionFor:(id)arg1 completion:(id)arg2;

@end
