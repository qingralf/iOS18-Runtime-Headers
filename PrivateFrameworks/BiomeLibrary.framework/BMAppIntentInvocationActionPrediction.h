/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMAppIntentInvocationActionPrediction : BMEventBase <BMStoreData> {
    unsigned int  _dataVersion;
    BMAppIntentInvocationDisplayRepresentation * _displayRepresentation;
    NSArray * _parameterIdentifiers;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BMAppIntentInvocationDisplayRepresentation *displayRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *parameterIdentifiers;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_parameterIdentifiersJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)displayRepresentation;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithParameterIdentifiers:(id)arg1 displayRepresentation:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)parameterIdentifiers;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
