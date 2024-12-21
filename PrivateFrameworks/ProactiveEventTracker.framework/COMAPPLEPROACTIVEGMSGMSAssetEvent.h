/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

@interface COMAPPLEPROACTIVEGMSGMSAssetEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int latencyMillis : 1; 
        unsigned int memoryCostKB : 1; 
        unsigned int version : 1; 
        unsigned int loadReason : 1; 
        unsigned int loadResult : 1; 
        unsigned int loadType : 1; 
    }  _has;
    double  _latencyMillis;
    int  _loadReason;
    int  _loadResult;
    int  _loadType;
    unsigned long long  _memoryCostKB;
    long long  _version;
}

@property (nonatomic) bool hasLatencyMillis;
@property (nonatomic) bool hasLoadReason;
@property (nonatomic) bool hasLoadResult;
@property (nonatomic) bool hasLoadType;
@property (nonatomic) bool hasMemoryCostKB;
@property (nonatomic) bool hasVersion;
@property (nonatomic) double latencyMillis;
@property (nonatomic) int loadReason;
@property (nonatomic) int loadResult;
@property (nonatomic) int loadType;
@property (nonatomic) unsigned long long memoryCostKB;
@property (nonatomic) long long version;

- (int)StringAsLoadReason:(id)arg1;
- (int)StringAsLoadResult:(id)arg1;
- (int)StringAsLoadType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLatencyMillis;
- (bool)hasLoadReason;
- (bool)hasLoadResult;
- (bool)hasLoadType;
- (bool)hasMemoryCostKB;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)latencyMillis;
- (int)loadReason;
- (id)loadReasonAsString:(int)arg1;
- (int)loadResult;
- (id)loadResultAsString:(int)arg1;
- (int)loadType;
- (id)loadTypeAsString:(int)arg1;
- (unsigned long long)memoryCostKB;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLatencyMillis:(bool)arg1;
- (void)setHasLoadReason:(bool)arg1;
- (void)setHasLoadResult:(bool)arg1;
- (void)setHasLoadType:(bool)arg1;
- (void)setHasMemoryCostKB:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setLatencyMillis:(double)arg1;
- (void)setLoadReason:(int)arg1;
- (void)setLoadResult:(int)arg1;
- (void)setLoadType:(int)arg1;
- (void)setMemoryCostKB:(unsigned long long)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;
- (void)writeTo:(id)arg1;

@end