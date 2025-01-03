/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CascadeSets.framework/CascadeSets
 */

@interface CCSet : NSObject <NSCopying, NSSecureCoding> {
    BMAccount * _account;
    NSArray * _descriptors;
    NSString * _encodedDescriptors;
    unsigned short  _itemType;
    unsigned char  _options;
    NSString * _personaIdentifier;
    NSNumber * _uniqueHash;
}

@property (nonatomic, readonly) BMAccount *account;
@property (nonatomic, readonly) NSArray *descriptors;
@property (nonatomic, readonly) NSString *encodedDescriptors;
@property (nonatomic, readonly) unsigned short itemType;
@property (nonatomic, readonly) unsigned char options;
@property (nonatomic, readonly) NSString *personaIdentifier;
@property (nonatomic, readonly) NSNumber *uniqueHash;

+ (id)descriptorWithKey:(id)arg1 descriptors:(id)arg2;
+ (id)serializedSetEnumerator:(id)arg1;
+ (id)setEnumerator;
+ (id)setEnumeratorWithUseCase:(id)arg1;
+ (id)setFromResourceSpecifier:(id)arg1 inContainer:(id)arg2 error:(id*)arg3;
+ (id)setFromXPCDictionary:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_computeUniqueHash;
- (id)account;
- (id)changePublisher;
- (id)changePublisherWithUseCase:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptorWithKey:(id)arg1;
- (id)descriptors;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedDescriptors;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemType:(unsigned short)arg1 personaIdentifier:(id)arg2 descriptors:(id)arg3 options:(unsigned char)arg4 error:(id*)arg5;
- (id)initWithItemType:(unsigned short)arg1 personaIdentifier:(id)arg2 encodedDescriptors:(id)arg3 descriptors:(id)arg4 options:(unsigned char)arg5 error:(id*)arg6;
- (id)initWithItemType:(unsigned short)arg1 personaIdentifier:(id)arg2 encodedDescriptors:(id)arg3 options:(unsigned char)arg4 error:(id*)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSet:(id)arg1;
- (bool)isInUserVault;
- (unsigned short)itemType;
- (unsigned char)options;
- (id)personaIdentifier;
- (id)prefixedInstanceIdentifier:(id)arg1;
- (id)prefixedSharedIdentifier:(id)arg1;
- (id)serializeWithUseCase:(id)arg1 enumerateToBookmark:(id)arg2 error:(id*)arg3;
- (id)serializeWithUseCase:(id)arg1 error:(id*)arg2;
- (id)toResourceSpecifier;
- (id)toXPCDictionary;
- (id)uniqueHash;

@end
