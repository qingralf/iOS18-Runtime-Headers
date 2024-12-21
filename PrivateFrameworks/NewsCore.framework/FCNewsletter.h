/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNewsletter : NSObject <NSCopying, NSSecureCoding> {
    long long  _enrollment;
    NSString * _identifier;
}

@property (nonatomic, readonly) long long enrollment;
@property (nonatomic, readonly) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)enrollment;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 enrollment:(long long)arg2;
- (bool)isEqual:(id)arg1;

@end