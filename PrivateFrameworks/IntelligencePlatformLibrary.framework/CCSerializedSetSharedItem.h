/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatformLibrary.framework/IntelligencePlatformLibrary
 */

@interface CCSerializedSetSharedItem : CCItemMessage {
    NSData * _content;
    bool  _hasSharedIdentifier;
    long long  _sharedIdentifier;
}

@property (nonatomic, readonly) NSData *content;
@property (nonatomic) bool hasSharedIdentifier;
@property (nonatomic, readonly) long long sharedIdentifier;

+ (Class)contentMessageClass;
+ (id)descriptionForTypeIdentifier:(unsigned short)arg1;
+ (unsigned short)itemType;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)content;
- (void)enumerateFieldsUsingBlock:(id /* block */)arg1 parentFieldType:(unsigned short)arg2;
- (bool)hasSharedIdentifier;
- (id)initWithContent:(id)arg1 sharedIdentifier:(id)arg2 error:(id*)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)initializeFieldValuesFromData:(id)arg1 error:(id*)arg2;
- (id)jsonDictionary;
- (void)setHasSharedIdentifier:(bool)arg1;
- (long long)sharedIdentifier;

@end
