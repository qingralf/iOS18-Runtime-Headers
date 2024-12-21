/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatformLibrary.framework/IntelligencePlatformLibrary
 */

@interface CCAppIntentsIndexedEntityMetaContent : CCItemMessage <CCItemFieldEnumerable, CCItemMetaContent, CCJSONDescribing> {
    bool  _hasSaliency;
    float  _saliency;
    NSString * _sourceItemIdentifier;
}

@property (nonatomic, readonly) bool hasRank;
@property (nonatomic) bool hasSaliency;
@property (nonatomic, readonly) float saliency;
@property (nonatomic, readonly) NSString *sourceItemIdentifier;

+ (Class)contentMessageClass;
+ (id)descriptionForTypeIdentifier:(unsigned short)arg1;
+ (unsigned short)itemType;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)arg1 parentFieldType:(unsigned short)arg2;
- (bool)hasRank;
- (bool)hasSaliency;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSourceItemIdentifier:(id)arg1 rank:(id)arg2 error:(id*)arg3;
- (id)initWithSourceItemIdentifier:(id)arg1 saliency:(id)arg2 error:(id*)arg3;
- (bool)initializeFieldValuesFromData:(id)arg1 error:(id*)arg2;
- (id)jsonDictionary;
- (float)saliency;
- (void)setHasSaliency:(bool)arg1;
- (id)sourceItemIdentifier;

@end