/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHRemoteSynthesisRequest : NSObject <NSSecureCoding> {
    CHDrawing * _drawing;
    CHSynthesisRequestOptions * _options;
    long long  _priority;
    long long  _requestType;
    NSString * _string;
}

@property (nonatomic, readonly, copy) CHDrawing *drawing;
@property (nonatomic, readonly, copy) CHSynthesisRequestOptions *options;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) long long requestType;
@property (nonatomic, readonly, copy) NSString *string;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)drawing;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 drawing:(id)arg2 options:(id)arg3 requestType:(long long)arg4;
- (id)initWithString:(id)arg1 drawing:(id)arg2 options:(id)arg3 requestType:(long long)arg4 priority:(long long)arg5;
- (id)options;
- (long long)priority;
- (long long)requestType;
- (id)string;

@end