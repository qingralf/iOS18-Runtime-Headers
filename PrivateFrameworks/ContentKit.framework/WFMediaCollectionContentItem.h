/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFMediaCollectionContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool cachesSupportedTypes; /* unknown property attribute: ? */
@property (nonatomic, readonly) MPMediaItemCollection *collection;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasStringOutput; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSDictionary *metadataForSerialization; /* unknown property attribute: ? */
@property (nonatomic, readonly) WFFileType *preferredFileType; /* unknown property attribute: ? */
@property (nonatomic, readonly) WFObjectType *preferredObjectType; /* unknown property attribute: ? */
@property (readonly) Class superclass;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)localizedPluralTypeDescriptionWithContext:(id)arg1;
+ (id)localizedTypeDescriptionWithContext:(id)arg1;
+ (id)ownedTypes;

- (id)collection;

@end