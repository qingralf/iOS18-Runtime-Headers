/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatformLibrary.framework/IntelligencePlatformLibrary
 */

@interface CCMediaLinkedIdentifier : CCItemMessage {
    NSString * _sourceItemIdentifier;
    unsigned int  _type;
}

@property (nonatomic, readonly) NSString *sourceItemIdentifier;
@property (nonatomic, readonly) unsigned int type;

+ (Class)contentMessageClass;
+ (id)descriptionForTypeIdentifier:(unsigned short)arg1;
+ (unsigned short)itemType;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)arg1 parentFieldType:(unsigned short)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSourceItemIdentifier:(id)arg1 type:(unsigned int)arg2 error:(id*)arg3;
- (bool)initializeFieldValuesFromData:(id)arg1 error:(id*)arg2;
- (id)jsonDictionary;
- (id)sourceItemIdentifier;
- (unsigned int)type;

@end