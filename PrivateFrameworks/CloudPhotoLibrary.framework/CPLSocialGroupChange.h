/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLSocialGroupChange : CPLRecordChange <NSCopying, NSSecureCoding> {
    NSString * _customTitle;
    NSString * _keyAssetIdentifier;
    NSData * _personsData;
    unsigned long long  _position;
    short  _verifiedType;
}

@property (nonatomic, retain) NSString *customTitle;
@property (nonatomic, retain) NSString *keyAssetIdentifier;
@property (nonatomic, retain) CPLSocialGroupPersonList *persons;
@property (nonatomic, copy) NSData *personsData;
@property (nonatomic) unsigned long long position;
@property (nonatomic) short verifiedType;

+ (id)_createTestSocialGroupWithPersons:(id)arg1;
+ (bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (id /* block */)equalityBlockForDirection:(unsigned long long)arg1;
+ (Class)relatedRecordClass;
+ (bool)relatedRelationshipIsWeak;
+ (bool)supportsDeletion;
+ (bool)supportsDirectDeletion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)customTitle;
- (id)keyAssetIdentifier;
- (id)keyAssetScopedIdentifier;
- (id)persons;
- (id)personsData;
- (unsigned long long)position;
- (id)propertiesDescription;
- (id)relatedIdentifier;
- (id)scopedIdentifiersForMapping;
- (void)setCustomTitle:(id)arg1;
- (void)setKeyAssetIdentifier:(id)arg1;
- (void)setKeyAssetScopedIdentifier:(id)arg1;
- (void)setPersonData:(id)arg1;
- (void)setPersons:(id)arg1;
- (void)setPersonsData:(id)arg1;
- (void)setPosition:(unsigned long long)arg1;
- (void)setRelatedIdentifier:(id)arg1;
- (void)setVerifiedType:(short)arg1;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (short)verifiedType;

@end
