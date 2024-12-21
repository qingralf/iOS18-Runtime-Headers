/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSSmartRepliesResponse : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _responses;
}

@property (nonatomic, copy) NSArray *responses;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponses:(id)arg1;
- (id)responses;
- (void)setResponses:(id)arg1;

@end