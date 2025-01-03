/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMPersonalizedSensingMomentsContextMomentsContextString : BMEventBase <BMStoreData> {
    unsigned int  _contentType;
    unsigned int  _dataVersion;
    NSArray * _dimensions;
    bool  _hasContentType;
    NSString * _raw_stringIdentifier;
    NSString * _textString;
}

@property (nonatomic, readonly) unsigned int contentType;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *dimensions;
@property (nonatomic) bool hasContentType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *stringIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *textString;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_dimensionsJSONArray;
- (unsigned int)contentType;
- (unsigned int)dataVersion;
- (id)description;
- (id)dimensions;
- (bool)hasContentType;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTextString:(id)arg1 stringIdentifier:(id)arg2 dimensions:(id)arg3;
- (id)initWithTextString:(id)arg1 stringIdentifier:(id)arg2 dimensions:(id)arg3 contentType:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasContentType:(bool)arg1;
- (id)stringIdentifier;
- (id)textString;
- (void)writeTo:(id)arg1;

@end
