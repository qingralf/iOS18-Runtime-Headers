/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFNSItemProviderContentItem : WFContentItem <WFContentItemClass> {
    NSString * _contentName;
    WFFileType * _fileURLType;
    bool  _useNewLoadingAPI;
}

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool cachesSupportedTypes; /* unknown property attribute: ? */
@property (nonatomic, copy) NSString *contentName;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFFileType *fileURLType;
@property (nonatomic, readonly) bool hasStringOutput; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic, readonly) NSDictionary *metadataForSerialization; /* unknown property attribute: ? */
@property (nonatomic, readonly) WFFileType *preferredFileType; /* unknown property attribute: ? */
@property (nonatomic, readonly) WFObjectType *preferredObjectType; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic) bool useNewLoadingAPI;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemProviderTypeIdentifierOverrides;
+ (id)itemProviderTypeIdentifierOverridesWithFileURLType:(id)arg1;
+ (id)localizedPluralTypeDescriptionWithContext:(id)arg1;
+ (id)localizedTypeDescriptionWithContext:(id)arg1;
+ (id)outputTypes;
+ (id)ownedTypes;

- (void).cxx_destruct;
- (bool)cachesSupportedTypes;
- (id)contentName;
- (id)fileURLType;
- (void)generateFileRepresentation:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateFileRepresentationWithNewAPI:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentation:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateObjectRepresentationWithNewAPI:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)itemProvider;
- (id)name;
- (id)outputTypes;
- (void)preloadImportantItemsWithCompletionHandler:(id /* block */)arg1;
- (void)setContentName:(id)arg1;
- (void)setFileURLType:(id)arg1;
- (void)setUseNewLoadingAPI:(bool)arg1;
- (bool)useNewLoadingAPI;

@end