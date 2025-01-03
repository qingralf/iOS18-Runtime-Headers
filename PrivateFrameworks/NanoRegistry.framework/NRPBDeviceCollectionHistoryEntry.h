/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRPBDeviceCollectionHistoryEntry : PBCodable <NSCopying> {
    double  _date;
    NRPBDeviceCollectionDiff * _diff;
    struct { 
        unsigned int date : 1; 
        unsigned int index : 1; 
    }  _has;
    long long  _index;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
