/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
 */

@interface CHSIntentReference : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    INIntent * _inMemoryIntent;
    NSData * _intentData;
    NSData * _partialConfigData;
    NSData * _partialSchemaData;
    long long  _stableHash;
}

@property (nonatomic, readonly) NSData *_intentData;
@property (nonatomic, readonly) bool _isPartial;
@property (nonatomic, readonly) bool _isSchemaSeparated;
@property (nonatomic, readonly) NSData *_partialConfigData;
@property (setter=_setPartialSchemaData:, nonatomic, retain) NSData *_partialSchemaData;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) long long stableHash;
@property (readonly) Class superclass;

+ (id)_decodeFromOPACK:(id)arg1 error:(id*)arg2;
+ (id)_encodeToOPACK:(id)arg1 error:(id*)arg2;
+ (id)_schemaDataFromIntent:(id)arg1 error:(id*)arg2;
+ (id)new;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyFillingInSchema:(id)arg1;
- (id)_copyWithoutSchemaDataIfNecessary;
- (id)_initWithGenericIntent:(id)arg1 schemaData:(id)arg2;
- (id)_initWithIntentInMemoryOnly:(id)arg1;
- (id)_intentData;
- (bool)_isPartial;
- (bool)_isSchemaSeparated;
- (id)_partialConfigData;
- (id)_partialSchemaData;
- (void)_setPartialSchemaData:(id)arg1;
- (id)_typedIntent;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1;
- (id)initWithIntent:(id)arg1 schemaData:(id)arg2;
- (id)initWithIntentData:(id)arg1 configData:(id)arg2 schemaData:(id)arg3 stableHash:(long long)arg4;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (long long)stableHash;

@end