/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizedSensing.framework/PersonalizedSensing
 */

@interface MOContextLocationMetaData : NSObject <NSCopying, NSSecureCoding> {
    NSString * _city;
    NSString * _place;
    NSDateInterval * _visitTimeWindow;
}

@property (nonatomic, readonly, copy) NSString *city;
@property (nonatomic, readonly, copy) NSString *place;
@property (nonatomic, readonly, copy) NSDateInterval *visitTimeWindow;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)city;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlace:(id)arg1 city:(id)arg2;
- (id)initWithPlace:(id)arg1 city:(id)arg2 visitTimeWindow:(id)arg3;
- (id)place;
- (id)visitTimeWindow;

@end
