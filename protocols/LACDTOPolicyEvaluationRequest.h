/* Generated by RuntimeBrowser.
 */

@protocol LACDTOPolicyEvaluationRequest <LACDTOPolicyEvaluation>

@required

- (<LACDTOEnvironment> *)environment;
- (bool)isInteractiveRatchetEvaluation;
- (NSDictionary *)options;
- (NSDictionary *)payload;
- (long long)policy;
- (void)updatePayload:(NSDictionary *)arg1;

@end
