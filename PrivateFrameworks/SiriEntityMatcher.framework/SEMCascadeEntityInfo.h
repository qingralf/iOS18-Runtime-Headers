/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriEntityMatcher.framework/SiriEntityMatcher
 */

@interface SEMCascadeEntityInfo : NSObject <SEMEntityInfo> {
    NSArray * _allMetaContent;
    CCItemMessage<CCItemContent> * _content;
    NSArray * _convertedInstances;
    NSString * _personaIdentifier;
    NSString * _sourceIdentifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allMetaContent;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)entityType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1 allMetaContent:(id)arg2 sourceIdentifier:(id)arg3 personaIdentifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCascadeEntityInfo:(id)arg1;
- (unsigned short)itemType;
- (id)personaIdentifier;
- (id)sourceIdentifier;
- (id)sourceIdentifierOrConstant;
- (id)toINPersons:(id*)arg1;
- (id)toKVItem:(id*)arg1;
- (id)toKVItems:(id*)arg1;

@end
