/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatformLibrary.framework/IntelligencePlatformLibrary
 */

@interface CCPeopleSuggesterContactPriorContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing> {
    bool  _hasMinVersion;
    bool  _hasReferenceDate;
    bool  _hasVersion;
    unsigned int  _minVersion;
    NSString * _modelName;
    NSString * _modelVersion;
    CCRepeatedFloat * _priorScore;
    double  _referenceDate;
    CCRepeatedInt64 * _sourceSharedIdentifier;
    unsigned int  _version;
}

@property (nonatomic) bool hasMinVersion;
@property (nonatomic) bool hasReferenceDate;
@property (nonatomic) bool hasVersion;
@property (nonatomic, readonly) unsigned int minVersion;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSString *modelVersion;
@property (nonatomic, readonly) CCRepeatedFloat *priorScore;
@property (nonatomic, readonly) double referenceDate;
@property (nonatomic, readonly) CCRepeatedInt64 *sourceSharedIdentifier;
@property (nonatomic, readonly) unsigned int version;

+ (Class)contentMessageClass;
+ (id)descriptionForTypeIdentifier:(unsigned short)arg1;
+ (unsigned short)itemType;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)arg1 parentFieldType:(unsigned short)arg2;
- (bool)hasMinVersion;
- (bool)hasReferenceDate;
- (bool)hasVersion;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithVersion:(id)arg1 minVersion:(id)arg2 sourceSharedIdentifier:(id)arg3 priorScore:(id)arg4 modelName:(id)arg5 modelVersion:(id)arg6 referenceDate:(id)arg7 error:(id*)arg8;
- (bool)initializeFieldValuesFromData:(id)arg1 error:(id*)arg2;
- (id)jsonDictionary;
- (unsigned int)minVersion;
- (id)modelName;
- (id)modelVersion;
- (id)priorScore;
- (double)referenceDate;
- (void)setHasMinVersion:(bool)arg1;
- (void)setHasReferenceDate:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (id)sourceSharedIdentifier;
- (unsigned int)version;

@end