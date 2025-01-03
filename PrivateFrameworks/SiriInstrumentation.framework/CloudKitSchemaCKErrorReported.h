/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface CloudKitSchemaCKErrorReported : SISchemaInstrumentationMessage {
    int  _errorType;
    struct { 
        unsigned int errorType : 1; 
    }  _has;
}

@property (nonatomic) int errorType;
@property (nonatomic) bool hasErrorType;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteErrorType;
- (id)dictionaryRepresentation;
- (int)errorType;
- (bool)hasErrorType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setErrorType:(int)arg1;
- (void)setHasErrorType:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
