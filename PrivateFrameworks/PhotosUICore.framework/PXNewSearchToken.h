/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNewSearchToken : NSObject {
    NSAttributedString * _attributedTitle;
    unsigned long long  _count;
    UIImage * _icon;
    NSString * _identifier;
    NSString * _priorityAssetUUID;
    PSIQueryToken * _queryToken;
    unsigned long long  _searchUserCategory;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSAttributedString *attributedTitle;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) bool hasLeadingHashtag;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isPersistable;
@property (nonatomic, readonly) NSString *priorityAssetUUID;
@property (nonatomic, readonly) PSIQueryToken *queryToken;
@property (nonatomic) unsigned long long searchUserCategory;
@property (nonatomic, readonly) unsigned long long type;

+ (id)_iconForSearchUserCategory:(unsigned long long)arg1;
+ (id)_imagewithSymbolName:(id)arg1;
+ (unsigned long long)_searchUserCategoryForSearchTokenCategory:(unsigned long long)arg1;
+ (id)px_oneYearAgoSearchToken;
+ (id)px_searchTokenForHashtag:(id)arg1;
+ (id)socialGroupDisplayText;
+ (id)symbolNameForSearchUserCategory:(unsigned long long)arg1;
+ (id)unnamedPersonDisplayText;
+ (id)unnamedPetDisplayText;

- (void).cxx_destruct;
- (id)attributedTitle;
- (unsigned long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLeadingHashtag;
- (unsigned long long)hash;
- (id)icon;
- (id)identifier;
- (id)init;
- (id)initWithAttributedTitle:(id)arg1 queryToken:(id)arg2 type:(unsigned long long)arg3 priorityAssetUUID:(id)arg4;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSearchText:(id)arg1 searchCategory:(unsigned long long)arg2;
- (id)initWithTitle:(id)arg1 queryToken:(id)arg2 type:(unsigned long long)arg3 priorityAssetUUID:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToToken:(id)arg1;
- (bool)isPersistable;
- (bool)isSocialGroup;
- (bool)isUnnamedPersonOrPet;
- (id)priorityAssetUUID;
- (id)queryToken;
- (unsigned long long)searchUserCategory;
- (void)setSearchUserCategory:(unsigned long long)arg1;
- (unsigned long long)type;

@end
