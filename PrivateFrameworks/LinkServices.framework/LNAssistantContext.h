/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices
 */

@interface LNAssistantContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _locale;
    NSString * _requestIdentifier;
    NSString * _sessionIdentifier;
}

@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSString *requestIdentifier;
@property (nonatomic, copy) NSString *sessionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1 locale:(id)arg2;
- (id)initWithSessionIdentifier:(id)arg1 requestIdentifier:(id)arg2 locale:(id)arg3;
- (id)locale;
- (id)requestIdentifier;
- (id)sessionIdentifier;
- (void)setLocale:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;

@end
