/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSFDSResult : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _action;
    NSString * _sessionIdentifier;
    NSString * _value;
}

@property (nonatomic, readonly) unsigned long long action;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, readonly, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 action:(unsigned long long)arg2;
- (id)sessionIdentifier;
- (void)setSessionIdentifier:(id)arg1;
- (id)value;

@end
