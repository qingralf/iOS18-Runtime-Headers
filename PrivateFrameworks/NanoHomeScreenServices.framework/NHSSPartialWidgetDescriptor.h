/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoHomeScreenServices.framework/NanoHomeScreenServices
 */

@interface NHSSPartialWidgetDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _containerBundleIdentifier;
    NSString * _extensionBundleIdentifier;
    NSString * _kind;
}

@property (nonatomic, copy) NSString *containerBundleIdentifier;
@property (nonatomic, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, copy) NSString *kind;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (void)setContainerBundleIdentifier:(id)arg1;
- (void)setExtensionBundleIdentifier:(id)arg1;
- (void)setKind:(id)arg1;

@end
