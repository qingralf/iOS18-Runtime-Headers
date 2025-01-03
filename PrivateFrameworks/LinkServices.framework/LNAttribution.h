/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices
 */

@interface LNAttribution : NSObject <NSCopying, NSSecureCoding> {
    NSString * _snippetModelBundleIdentifier;
    NSData * _snippetModelData;
}

@property (nonatomic, readonly, copy) NSString *snippetModelBundleIdentifier;
@property (nonatomic, readonly, copy) NSData *snippetModelData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnippetModelData:(id)arg1 snippetModelBundleIdentifier:(id)arg2;
- (id)snippetModelBundleIdentifier;
- (id)snippetModelData;

@end
