/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LighthouseDataProcessor.framework/LighthouseDataProcessor
 */

@interface PNRProvisionalSageFailureInfo : SISchemaInstrumentationMessage {
    PNRProvisionalSageErrorInfo * _error;
    NSString * _failureSubType;
    NSString * _failureType;
    bool  _hasError;
    bool  _hasFailureSubType;
    bool  _hasFailureType;
    bool  _hasUnderUnderlyingError;
    bool  _hasUnderlyingError;
    PNRProvisionalSageErrorInfo * _underUnderlyingError;
    PNRProvisionalSageErrorInfo * _underlyingError;
}

@property (nonatomic, retain) PNRProvisionalSageErrorInfo *error;
@property (nonatomic, copy) NSString *failureSubType;
@property (nonatomic, copy) NSString *failureType;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasFailureSubType;
@property (nonatomic) bool hasFailureType;
@property (nonatomic) bool hasUnderUnderlyingError;
@property (nonatomic) bool hasUnderlyingError;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PNRProvisionalSageErrorInfo *underUnderlyingError;
@property (nonatomic, retain) PNRProvisionalSageErrorInfo *underlyingError;

- (void).cxx_destruct;
- (void)deleteError;
- (void)deleteFailureSubType;
- (void)deleteFailureType;
- (void)deleteUnderUnderlyingError;
- (void)deleteUnderlyingError;
- (id)dictionaryRepresentation;
- (id)error;
- (id)failureSubType;
- (id)failureType;
- (bool)hasError;
- (bool)hasFailureSubType;
- (bool)hasFailureType;
- (bool)hasUnderUnderlyingError;
- (bool)hasUnderlyingError;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFailureSubType:(id)arg1;
- (void)setFailureType:(id)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasFailureSubType:(bool)arg1;
- (void)setHasFailureType:(bool)arg1;
- (void)setHasUnderUnderlyingError:(bool)arg1;
- (void)setHasUnderlyingError:(bool)arg1;
- (void)setUnderUnderlyingError:(id)arg1;
- (void)setUnderlyingError:(id)arg1;
- (id)underUnderlyingError;
- (id)underlyingError;
- (void)writeTo:(id)arg1;

@end
