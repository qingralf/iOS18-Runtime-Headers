/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata
 */

@interface LNPropertyMetadata : NSObject <NSSecureCoding> {
    unsigned long long  _capabilities;
    NSString * _identifier;
    bool  _optional;
    LNStaticDeferredLocalizedString * _title;
    NSString * _updateActionIdentifier;
    LNValueType * _valueType;
}

@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isOptional, nonatomic, readonly) bool optional;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *title;
@property (nonatomic, readonly, copy) NSString *updateActionIdentifier;
@property (nonatomic, readonly, copy) LNValueType *valueType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)capabilities;
- (id)copyWithDescriptiveMetadataFromProperty:(id)arg1 usingLibraryKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 valueType:(id)arg2 title:(id)arg3;
- (id)initWithIdentifier:(id)arg1 valueType:(id)arg2 title:(id)arg3 capabilities:(unsigned long long)arg4;
- (id)initWithIdentifier:(id)arg1 valueType:(id)arg2 title:(id)arg3 capabilities:(unsigned long long)arg4 updateActionIdentifier:(id)arg5;
- (id)initWithIdentifier:(id)arg1 valueType:(id)arg2 title:(id)arg3 capabilities:(unsigned long long)arg4 updateActionIdentifier:(id)arg5 optional:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isOptional;
- (id)schemaStringForStaticDeferredLocalizedString:(id)arg1 usingLibraryKey:(id)arg2;
- (id)title;
- (id)updateActionIdentifier;
- (id)valueType;

@end