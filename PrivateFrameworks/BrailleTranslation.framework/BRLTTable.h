/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
 */

@interface BRLTTable : NSObject <NSCopying> {
    NSBundle * _bundle;
    NSString * _language;
    NSString * _serviceIdentifier;
    NSString * _variant;
}

@property (nonatomic, retain) NSBundle *_bundle;
@property (nonatomic, readonly) NSString *candidateSelectionLanguage;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isCustomBrailleTable;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *localizedLanguage;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *localizedNameWithService;
@property (nonatomic, readonly) NSString *localizedService;
@property (nonatomic, readonly) NSString *localizedVariant;
@property (nonatomic, readonly) NSArray *replacements;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) bool supportsTranslationByCell;
@property (nonatomic, readonly) bool supportsTranslationMode8Dot;
@property (nonatomic, readonly) bool supportsTranslationModeContracted;
@property (nonatomic, readonly) NSString *tableIdentifier;
@property (nonatomic, readonly) NSString *variant;

- (void).cxx_destruct;
- (id)_brailleTableDictionary;
- (id)_bundle;
- (bool)_isEqualToTable:(id)arg1;
- (id)candidateSelectionLanguage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithServiceIdentifier:(id)arg1 language:(id)arg2 variant:(id)arg3;
- (id)initWithServiceIdentifier:(id)arg1 tableIdentifier:(id)arg2;
- (bool)isCustomBrailleTable;
- (bool)isEqual:(id)arg1;
- (id)language;
- (id)localizedLanguage;
- (id)localizedName;
- (id)localizedNameWithService;
- (id)localizedService;
- (id)localizedVariant;
- (id)replacements;
- (id)serviceIdentifier;
- (void)set_bundle:(id)arg1;
- (bool)supportsTranslationByCell;
- (bool)supportsTranslationMode8Dot;
- (bool)supportsTranslationModeContracted;
- (id)tableIdentifier;
- (id)variant;

@end
