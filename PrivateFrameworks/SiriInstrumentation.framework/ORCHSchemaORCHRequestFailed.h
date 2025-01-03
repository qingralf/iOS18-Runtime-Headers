/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ORCHSchemaORCHRequestFailed : SISchemaInstrumentationMessage {
    int  _errorCode;
    int  _errorDomain;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int errorDomain : 1; 
        unsigned int orchErrorCode : 1; 
    }  _has;
    int  _orchErrorCode;
}

@property (nonatomic) int errorCode;
@property (nonatomic) int errorDomain;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasErrorDomain;
@property (nonatomic) bool hasOrchErrorCode;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int orchErrorCode;

- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (void)deleteOrchErrorCode;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (int)errorDomain;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasOrchErrorCode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)orchErrorCode;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(int)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasErrorDomain:(bool)arg1;
- (void)setHasOrchErrorCode:(bool)arg1;
- (void)setOrchErrorCode:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
