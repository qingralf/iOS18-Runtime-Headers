/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACEvaluationResult : NSObject {
    NSError * _error;
    long long  _rawValue;
    <LACEvaluationRequest> * _request;
    NSDictionary * _value;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) long long rawValue;
@property (nonatomic, readonly) <LACEvaluationRequest> *request;
@property (nonatomic, readonly) NSDictionary *value;

+ (id)resultWithFailure:(id)arg1;
+ (id)resultWithNext:(id)arg1;
+ (id)resultWithSuccess:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)initWithValue:(id)arg1 error:(id)arg2 request:(id)arg3;
- (bool)isEqual:(id)arg1;
- (long long)rawValue;
- (id)request;
- (id)value;

@end