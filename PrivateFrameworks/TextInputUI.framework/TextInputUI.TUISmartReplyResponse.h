/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@interface TextInputUI.TUISmartReplyResponse : NSObject {
    void contentWarning;
    void error;
    void modelInfoString;
    void responseFromCache;
    void srResponse;
    void threadIdentifier;
    void type;
    void userFeedbackInputString;
}

@property (nonatomic) long long contentWarning;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, copy) NSString *modelInfoString;
@property (nonatomic, retain) NSNumber *responseFromCache;
@property (nonatomic, retain) TCSmartRepliesResponse *srResponse;
@property (nonatomic, copy) NSString *threadIdentifier;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *userFeedbackInputString;

- (void).cxx_destruct;
- (long long)contentWarning;
- (id)error;
- (id)init;
- (id)initWithSrResponse:(id)arg1 threadIdentifier:(id)arg2 type:(long long)arg3 contentWarning:(long long)arg4 error:(id)arg5 modelInfoString:(id)arg6 userFeedbackInputString:(id)arg7 responseFromCache:(id)arg8;
- (id)modelInfoString;
- (void)printValues;
- (id)responseFromCache;
- (void)setContentWarning:(long long)arg1;
- (void)setError:(id)arg1;
- (void)setModelInfoString:(id)arg1;
- (void)setResponseFromCache:(id)arg1;
- (void)setSrResponse:(id)arg1;
- (void)setThreadIdentifier:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUserFeedbackInputString:(id)arg1;
- (id)srResponse;
- (id)threadIdentifier;
- (long long)type;
- (id)userFeedbackInputString;

@end