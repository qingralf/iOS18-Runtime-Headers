/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMAppIntentInvocationValue : BMEventBase <BMStoreData> {
    unsigned int  _dataVersion;
    BMAppIntentInvocationDisplayRepresentation * _displayRepresentation;
    NSData * _value;
    BMAppIntentInvocationValueType * _valueType;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BMAppIntentInvocationDisplayRepresentation *displayRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSData *value;
@property (nonatomic, readonly) BMAppIntentInvocationValueType *valueType;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)displayRepresentation;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithValueType:(id)arg1 value:(id)arg2 displayRepresentation:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)value;
- (id)valueType;
- (void)writeTo:(id)arg1;

@end
