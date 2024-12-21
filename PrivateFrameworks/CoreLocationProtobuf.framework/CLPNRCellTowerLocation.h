/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPNRCellTowerLocation : PBCodable <NSCopying> {
    NSString * _appBundleId;
    int  _bandInfo;
    int  _bandwidth;
    unsigned int  _bwpSupport;
    double  _cellLatitude;
    double  _cellLongitude;
    long long  _ci;
    unsigned int  _downlinkBandwidth;
    int  _ecn0;
    unsigned int  _gscn;
    struct { 
        unsigned int cellLatitude : 1; 
        unsigned int cellLongitude : 1; 
        unsigned int ci : 1; 
        unsigned int bandInfo : 1; 
        unsigned int bandwidth : 1; 
        unsigned int bwpSupport : 1; 
        unsigned int downlinkBandwidth : 1; 
        unsigned int ecn0 : 1; 
        unsigned int gscn : 1; 
        unsigned int latency : 1; 
        unsigned int maxThroughput : 1; 
        unsigned int mcc : 1; 
        unsigned int mnc : 1; 
        unsigned int nrarfcn : 1; 
        unsigned int pid : 1; 
        unsigned int pmax : 1; 
        unsigned int rscp : 1; 
        unsigned int rssi : 1; 
        unsigned int scs : 1; 
        unsigned int serverHash : 1; 
        unsigned int tac : 1; 
        unsigned int timingAdvance : 1; 
        unsigned int hasWifiFallback : 1; 
        unsigned int isLimitedService : 1; 
        unsigned int isStalled : 1; 
        unsigned int uniqueCount : 1; 
    }  _has;
    bool  _hasWifiFallback;
    bool  _isLimitedService;
    bool  _isStalled;
    unsigned int  _latency;
    CLPLocation * _location;
    unsigned int  _maxThroughput;
    int  _mcc;
    int  _mnc;
    CLPCellNeighborsGroup * _neighborGroup;
    NSMutableArray * _neighbors;
    NSString * _npnCsgIdEf;
    NSString * _npnNwIdEf;
    int  _nrarfcn;
    NSString * _operatorName;
    int  _pid;
    unsigned int  _pmax;
    int  _rscp;
    int  _rssi;
    unsigned int  _scs;
    int  _serverHash;
    NSString * _serviceProviderName;
    int  _tac;
    int  _timingAdvance;
    bool  _uniqueCount;
}

@property (nonatomic, retain) NSString *appBundleId;
@property (nonatomic) int bandInfo;
@property (nonatomic) int bandwidth;
@property (nonatomic) unsigned int bwpSupport;
@property (nonatomic) double cellLatitude;
@property (nonatomic) double cellLongitude;
@property (nonatomic) long long ci;
@property (nonatomic) unsigned int downlinkBandwidth;
@property (nonatomic) int ecn0;
@property (nonatomic) unsigned int gscn;
@property (nonatomic, readonly) bool hasAppBundleId;
@property (nonatomic) bool hasBandInfo;
@property (nonatomic) bool hasBandwidth;
@property (nonatomic) bool hasBwpSupport;
@property (nonatomic) bool hasCellLatitude;
@property (nonatomic) bool hasCellLongitude;
@property (nonatomic) bool hasCi;
@property (nonatomic) bool hasDownlinkBandwidth;
@property (nonatomic) bool hasEcn0;
@property (nonatomic) bool hasGscn;
@property (nonatomic) bool hasHasWifiFallback;
@property (nonatomic) bool hasIsLimitedService;
@property (nonatomic) bool hasIsStalled;
@property (nonatomic) bool hasLatency;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasMaxThroughput;
@property (nonatomic) bool hasMcc;
@property (nonatomic) bool hasMnc;
@property (nonatomic, readonly) bool hasNeighborGroup;
@property (nonatomic, readonly) bool hasNpnCsgIdEf;
@property (nonatomic, readonly) bool hasNpnNwIdEf;
@property (nonatomic) bool hasNrarfcn;
@property (nonatomic, readonly) bool hasOperatorName;
@property (nonatomic) bool hasPid;
@property (nonatomic) bool hasPmax;
@property (nonatomic) bool hasRscp;
@property (nonatomic) bool hasRssi;
@property (nonatomic) bool hasScs;
@property (nonatomic) bool hasServerHash;
@property (nonatomic, readonly) bool hasServiceProviderName;
@property (nonatomic) bool hasTac;
@property (nonatomic) bool hasTimingAdvance;
@property (nonatomic) bool hasUniqueCount;
@property (nonatomic) bool hasWifiFallback;
@property (nonatomic) bool isLimitedService;
@property (nonatomic) bool isStalled;
@property (nonatomic) unsigned int latency;
@property (nonatomic, retain) CLPLocation *location;
@property (nonatomic) unsigned int maxThroughput;
@property (nonatomic) int mcc;
@property (nonatomic) int mnc;
@property (nonatomic, retain) CLPCellNeighborsGroup *neighborGroup;
@property (nonatomic, retain) NSMutableArray *neighbors;
@property (nonatomic, retain) NSString *npnCsgIdEf;
@property (nonatomic, retain) NSString *npnNwIdEf;
@property (nonatomic) int nrarfcn;
@property (nonatomic, retain) NSString *operatorName;
@property (nonatomic) int pid;
@property (nonatomic) unsigned int pmax;
@property (nonatomic) int rscp;
@property (nonatomic) int rssi;
@property (nonatomic) unsigned int scs;
@property (nonatomic) int serverHash;
@property (nonatomic, retain) NSString *serviceProviderName;
@property (nonatomic) int tac;
@property (nonatomic) int timingAdvance;
@property (nonatomic) bool uniqueCount;

+ (Class)neighborType;

- (void).cxx_destruct;
- (void)addNeighbor:(id)arg1;
- (id)appBundleId;
- (int)bandInfo;
- (int)bandwidth;
- (unsigned int)bwpSupport;
- (double)cellLatitude;
- (double)cellLongitude;
- (long long)ci;
- (void)clearNeighbors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)downlinkBandwidth;
- (int)ecn0;
- (unsigned int)gscn;
- (bool)hasAppBundleId;
- (bool)hasBandInfo;
- (bool)hasBandwidth;
- (bool)hasBwpSupport;
- (bool)hasCellLatitude;
- (bool)hasCellLongitude;
- (bool)hasCi;
- (bool)hasDownlinkBandwidth;
- (bool)hasEcn0;
- (bool)hasGscn;
- (bool)hasHasWifiFallback;
- (bool)hasIsLimitedService;
- (bool)hasIsStalled;
- (bool)hasLatency;
- (bool)hasLocation;
- (bool)hasMaxThroughput;
- (bool)hasMcc;
- (bool)hasMnc;
- (bool)hasNeighborGroup;
- (bool)hasNpnCsgIdEf;
- (bool)hasNpnNwIdEf;
- (bool)hasNrarfcn;
- (bool)hasOperatorName;
- (bool)hasPid;
- (bool)hasPmax;
- (bool)hasRscp;
- (bool)hasRssi;
- (bool)hasScs;
- (bool)hasServerHash;
- (bool)hasServiceProviderName;
- (bool)hasTac;
- (bool)hasTimingAdvance;
- (bool)hasUniqueCount;
- (bool)hasWifiFallback;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isLimitedService;
- (bool)isStalled;
- (unsigned int)latency;
- (id)location;
- (unsigned int)maxThroughput;
- (int)mcc;
- (void)mergeFrom:(id)arg1;
- (int)mnc;
- (id)neighborAtIndex:(unsigned long long)arg1;
- (id)neighborGroup;
- (id)neighbors;
- (unsigned long long)neighborsCount;
- (id)npnCsgIdEf;
- (id)npnNwIdEf;
- (int)nrarfcn;
- (id)operatorName;
- (int)pid;
- (unsigned int)pmax;
- (bool)readFrom:(id)arg1;
- (int)rscp;
- (int)rssi;
- (unsigned int)scs;
- (int)serverHash;
- (id)serviceProviderName;
- (void)setAppBundleId:(id)arg1;
- (void)setBandInfo:(int)arg1;
- (void)setBandwidth:(int)arg1;
- (void)setBwpSupport:(unsigned int)arg1;
- (void)setCellLatitude:(double)arg1;
- (void)setCellLongitude:(double)arg1;
- (void)setCi:(long long)arg1;
- (void)setDownlinkBandwidth:(unsigned int)arg1;
- (void)setEcn0:(int)arg1;
- (void)setGscn:(unsigned int)arg1;
- (void)setHasBandInfo:(bool)arg1;
- (void)setHasBandwidth:(bool)arg1;
- (void)setHasBwpSupport:(bool)arg1;
- (void)setHasCellLatitude:(bool)arg1;
- (void)setHasCellLongitude:(bool)arg1;
- (void)setHasCi:(bool)arg1;
- (void)setHasDownlinkBandwidth:(bool)arg1;
- (void)setHasEcn0:(bool)arg1;
- (void)setHasGscn:(bool)arg1;
- (void)setHasHasWifiFallback:(bool)arg1;
- (void)setHasIsLimitedService:(bool)arg1;
- (void)setHasIsStalled:(bool)arg1;
- (void)setHasLatency:(bool)arg1;
- (void)setHasMaxThroughput:(bool)arg1;
- (void)setHasMcc:(bool)arg1;
- (void)setHasMnc:(bool)arg1;
- (void)setHasNrarfcn:(bool)arg1;
- (void)setHasPid:(bool)arg1;
- (void)setHasPmax:(bool)arg1;
- (void)setHasRscp:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setHasScs:(bool)arg1;
- (void)setHasServerHash:(bool)arg1;
- (void)setHasTac:(bool)arg1;
- (void)setHasTimingAdvance:(bool)arg1;
- (void)setHasUniqueCount:(bool)arg1;
- (void)setHasWifiFallback:(bool)arg1;
- (void)setIsLimitedService:(bool)arg1;
- (void)setIsStalled:(bool)arg1;
- (void)setLatency:(unsigned int)arg1;
- (void)setLocation:(id)arg1;
- (void)setMaxThroughput:(unsigned int)arg1;
- (void)setMcc:(int)arg1;
- (void)setMnc:(int)arg1;
- (void)setNeighborGroup:(id)arg1;
- (void)setNeighbors:(id)arg1;
- (void)setNpnCsgIdEf:(id)arg1;
- (void)setNpnNwIdEf:(id)arg1;
- (void)setNrarfcn:(int)arg1;
- (void)setOperatorName:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setPmax:(unsigned int)arg1;
- (void)setRscp:(int)arg1;
- (void)setRssi:(int)arg1;
- (void)setScs:(unsigned int)arg1;
- (void)setServerHash:(int)arg1;
- (void)setServiceProviderName:(id)arg1;
- (void)setTac:(int)arg1;
- (void)setTimingAdvance:(int)arg1;
- (void)setUniqueCount:(bool)arg1;
- (int)tac;
- (int)timingAdvance;
- (bool)uniqueCount;
- (void)writeTo:(id)arg1;

@end