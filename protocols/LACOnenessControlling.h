/* Generated by RuntimeBrowser.
 */

@protocol LACOnenessControlling <NSObject, LACEvaluationRequestProcessor, LACDomainStateProviding>

@required

- (void)cancelAllRequests;
- (void)cancelRequestsForContextID:(NSUUID *)arg1;
- (bool)isSessionActive;

@end