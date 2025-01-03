/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatformLibrary.framework/IntelligencePlatformLibrary
 */

@interface CCHealthMedicationContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing> {
    NSString * _name;
    NSString * _nickname;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *nickname;

+ (Class)contentMessageClass;
+ (id)descriptionForTypeIdentifier:(unsigned short)arg1;
+ (unsigned short)itemType;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)arg1 parentFieldType:(unsigned short)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1 nickname:(id)arg2 error:(id*)arg3;
- (bool)initializeFieldValuesFromData:(id)arg1 error:(id*)arg2;
- (id)jsonDictionary;
- (id)name;
- (id)nickname;

@end
