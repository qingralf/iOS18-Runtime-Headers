/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerfPowerServicesReader.framework/PerfPowerServicesReader
 */

@interface AWDMETRICSCellularPowerLogNRCarrierComponentInfo : PBCodable <NSCopying> {
    NSMutableArray * _carrierInfos;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int subsId : 1; 
    }  _has;
    unsigned int  _subsId;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSMutableArray *carrierInfos;
@property (nonatomic) bool hasSubsId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) unsigned long long timestamp;

+ (Class)carrierInfoType;

- (void).cxx_destruct;
- (void)addCarrierInfo:(id)arg1;
- (id)carrierInfoAtIndex:(unsigned long long)arg1;
- (id)carrierInfos;
- (unsigned long long)carrierInfosCount;
- (void)clearCarrierInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSubsId;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCarrierInfos:(id)arg1;
- (void)setHasSubsId:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSubsId:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)subsId;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
