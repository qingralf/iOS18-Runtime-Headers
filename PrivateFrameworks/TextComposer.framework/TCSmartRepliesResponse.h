/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextComposer.framework/TextComposer
 */

@interface TCSmartRepliesResponse : NSObject <NSCopying, NSSecureCoding> {
    int  _inferenceStatus;
    NSDictionary * _options;
    NSArray * _responses;
}

@property (nonatomic, readonly) int inferenceStatus;
@property (readonly, copy) NSDictionary *options;
@property (nonatomic, readonly, copy) NSArray *responseTexts;
@property (nonatomic, readonly, copy) NSArray *responses;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (int)inferenceStatus;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseTexts:(id)arg1;
- (id)initWithResponses:(id)arg1;
- (id)initWithResponses:(id)arg1 inferenceStatus:(int)arg2;
- (id)initWithResponses:(id)arg1 inferenceStatus:(int)arg2 options:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)options;
- (id)responseTexts;
- (id)responses;

@end
