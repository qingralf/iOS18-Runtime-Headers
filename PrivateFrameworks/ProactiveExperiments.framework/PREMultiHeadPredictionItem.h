/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
 */

@interface PREMultiHeadPredictionItem : NSObject <NSSecureCoding> {
    NSString * _label;
    NSNumber * _score;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSNumber *score;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScore:(id)arg1 label:(id)arg2;
- (id)label;
- (id)score;

@end
