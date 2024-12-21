/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizedSensing.framework/PersonalizedSensing
 */

@interface MOContextFeedback : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _contextFetchedTimestamp;
    NSUUID * _contextIdentifier;
    NSArray * _contextStringFeedback;
}

@property (nonatomic, retain) NSDate *contextFetchedTimestamp;
@property (nonatomic, readonly, copy) NSUUID *contextIdentifier;
@property (nonatomic, copy) NSArray *contextStringFeedback;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contextFetchedTimestamp;
- (id)contextIdentifier;
- (id)contextStringFeedback;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setContextFetchedTimestamp:(id)arg1;
- (void)setContextStringFeedback:(id)arg1;

@end