/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
 */

@interface CHSWidgetRelevanceKey : NSObject <CHSWidgetIdentifiable, NSCopying, NSSecureCoding> {
    CHSExtensionIdentity * _extensionIdentity;
    NSString * _kind;
}

@property (nonatomic, readonly) CHSExtensionIdentity *extensionIdentity;
@property (nonatomic, readonly) NSString *kind;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionIdentity;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionIdentity:(id)arg1 kind:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (bool)matches:(id)arg1;

@end
