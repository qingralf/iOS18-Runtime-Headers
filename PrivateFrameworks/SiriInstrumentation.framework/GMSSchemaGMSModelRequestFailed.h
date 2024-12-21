/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface GMSSchemaGMSModelRequestFailed : SISchemaInstrumentationMessage {
    int  _errorDomain;
    unsigned int  _gmsErrorCode;
    struct { 
        unsigned int errorDomain : 1; 
        unsigned int gmsErrorCode : 1; 
        unsigned int openAIErrorCode : 1; 
    }  _has;
    int  _openAIErrorCode;
}

@property (nonatomic) int errorDomain;
@property (nonatomic) unsigned int gmsErrorCode;
@property (nonatomic) bool hasErrorDomain;
@property (nonatomic) bool hasGmsErrorCode;
@property (nonatomic) bool hasOpenAIErrorCode;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int openAIErrorCode;

- (void)deleteErrorDomain;
- (void)deleteGmsErrorCode;
- (void)deleteOpenAIErrorCode;
- (id)dictionaryRepresentation;
- (int)errorDomain;
- (unsigned int)gmsErrorCode;
- (bool)hasErrorDomain;
- (bool)hasGmsErrorCode;
- (bool)hasOpenAIErrorCode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)openAIErrorCode;
- (bool)readFrom:(id)arg1;
- (void)setErrorDomain:(int)arg1;
- (void)setGmsErrorCode:(unsigned int)arg1;
- (void)setHasErrorDomain:(bool)arg1;
- (void)setHasGmsErrorCode:(bool)arg1;
- (void)setHasOpenAIErrorCode:(bool)arg1;
- (void)setOpenAIErrorCode:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end