/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata
 */

@interface LNContentTypeMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _exportableTypes;
    NSArray * _importableTypes;
}

@property (nonatomic, readonly, copy) NSArray *exportableTypes;
@property (nonatomic, readonly, copy) NSArray *importableTypes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)exportableTypes;
- (unsigned long long)hash;
- (id)importableTypes;
- (id)initWithCoder:(id)arg1;
- (id)initWithExportableTypes:(id)arg1 importableTypes:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
