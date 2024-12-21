/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PnROnDeviceFramework.framework/PnROnDeviceFramework
 */

@interface PNROnDeviceProvisionalPnRSiriRequestGrainSummary : SISchemaInstrumentationMessage {
    NSString * _error;
    bool  _hasError;
    bool  _hasRequestStatus;
    bool  _hasSrt;
    bool  _hasTurnId;
    NSString * _requestStatus;
    PNROnDeviceProvisionalPNRIntervalDurationMetric * _srt;
    NSString * _turnId;
}

@property (nonatomic, copy) NSString *error;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasRequestStatus;
@property (nonatomic) bool hasSrt;
@property (nonatomic) bool hasTurnId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *requestStatus;
@property (nonatomic, retain) PNROnDeviceProvisionalPNRIntervalDurationMetric *srt;
@property (nonatomic, copy) NSString *turnId;

- (void).cxx_destruct;
- (void)deleteError;
- (void)deleteRequestStatus;
- (void)deleteSrt;
- (void)deleteTurnId;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (bool)hasRequestStatus;
- (bool)hasSrt;
- (bool)hasTurnId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestStatus;
- (void)setError:(id)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasRequestStatus:(bool)arg1;
- (void)setHasSrt:(bool)arg1;
- (void)setHasTurnId:(bool)arg1;
- (void)setRequestStatus:(id)arg1;
- (void)setSrt:(id)arg1;
- (void)setTurnId:(id)arg1;
- (id)srt;
- (id)turnId;
- (void)writeTo:(id)arg1;

@end