/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableSample : PBCodable <HDDecoding, NSCopying> {
    long long  _dataType;
    double  _endDate;
    struct { 
        unsigned int dataType : 1; 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
    }  _has;
    HDCodableHealthObject * _object;
    double  _startDate;
}

@property (nonatomic) long long dataType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) double endDate;
@property (nonatomic) bool hasDataType;
@property (nonatomic) bool hasEndDate;
@property (nonatomic, readonly) bool hasObject;
@property (nonatomic) bool hasStartDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDCodableHealthObject *object;
@property (nonatomic) double startDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)applyToObject:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataType;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endDate;
- (bool)hasDataType;
- (bool)hasEndDate;
- (bool)hasObject;
- (bool)hasStartDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)object;
- (bool)readFrom:(id)arg1;
- (void)setDataType:(long long)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasDataType:(bool)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setObject:(id)arg1;
- (void)setStartDate:(double)arg1;
- (double)startDate;
- (void)writeTo:(id)arg1;

@end
