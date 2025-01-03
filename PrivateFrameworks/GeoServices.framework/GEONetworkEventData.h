/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONetworkEventData : PBCodable <NSCopying> {
    NSMutableArray * _additionalStates;
    NSString * _appIdentifier;
    GEOClientMetrics * _clientMetrics;
    NSString * _countryCode;
    int  _dataRequestKindSubtype;
    int  _dataRequestKindType;
    unsigned int  _datasetId;
    long long  _errorCode;
    NSString * _errorDomain;
    double  _eventTimestamp;
    struct { 
        unsigned int has_errorCode : 1; 
        unsigned int has_eventTimestamp : 1; 
        unsigned int has_dataRequestKindSubtype : 1; 
        unsigned int has_dataRequestKindType : 1; 
        unsigned int has_datasetId : 1; 
        unsigned int has_networkService : 1; 
        unsigned int has_tilesetId : 1; 
        unsigned int has_usedBackgroundUrl : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_additionalStates : 1; 
        unsigned int read_appIdentifier : 1; 
        unsigned int read_clientMetrics : 1; 
        unsigned int read_countryCode : 1; 
        unsigned int read_errorDomain : 1; 
        unsigned int read_locale : 1; 
        unsigned int read_manifestEnvironment : 1; 
        unsigned int read_requestingAppIdentifier : 1; 
        unsigned int read_requestingAppMajorVer : 1; 
        unsigned int read_requestingAppMinorVer : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _locale;
    NSString * _manifestEnvironment;
    int  _networkService;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _requestingAppIdentifier;
    NSString * _requestingAppMajorVer;
    NSString * _requestingAppMinorVer;
    unsigned int  _tilesetId;
    PBUnknownFields * _unknownFields;
    bool  _usedBackgroundUrl;
}

@property (nonatomic, retain) NSMutableArray *additionalStates;
@property (nonatomic, retain) NSString *appIdentifier;
@property (nonatomic, retain) GEOClientMetrics *clientMetrics;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic) int dataRequestKindSubtype;
@property (nonatomic) int dataRequestKindType;
@property (nonatomic) unsigned int datasetId;
@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) double eventTimestamp;
@property (nonatomic, readonly) bool hasAppIdentifier;
@property (nonatomic, readonly) bool hasClientMetrics;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic) bool hasDataRequestKindSubtype;
@property (nonatomic) bool hasDataRequestKindType;
@property (nonatomic) bool hasDatasetId;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic) bool hasEventTimestamp;
@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic, readonly) bool hasManifestEnvironment;
@property (nonatomic) bool hasNetworkService;
@property (nonatomic, readonly) bool hasRequestingAppIdentifier;
@property (nonatomic, readonly) bool hasRequestingAppMajorVer;
@property (nonatomic, readonly) bool hasRequestingAppMinorVer;
@property (nonatomic) bool hasTilesetId;
@property (nonatomic) bool hasUsedBackgroundUrl;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) NSString *manifestEnvironment;
@property (nonatomic) int networkService;
@property (nonatomic, retain) NSString *requestingAppIdentifier;
@property (nonatomic, retain) NSString *requestingAppMajorVer;
@property (nonatomic, retain) NSString *requestingAppMinorVer;
@property (nonatomic) unsigned int tilesetId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) bool usedBackgroundUrl;

+ (Class)additionalStatesType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsNetworkService:(id)arg1;
- (void)addAdditionalStates:(id)arg1;
- (id)additionalStates;
- (id)additionalStatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)additionalStatesCount;
- (id)appIdentifier;
- (void)clearAdditionalStates;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (id)clientMetrics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (int)dataRequestKindSubtype;
- (int)dataRequestKindType;
- (unsigned int)datasetId;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (id)errorDomain;
- (double)eventTimestamp;
- (bool)hasAppIdentifier;
- (bool)hasClientMetrics;
- (bool)hasCountryCode;
- (bool)hasDataRequestKindSubtype;
- (bool)hasDataRequestKindType;
- (bool)hasDatasetId;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasEventTimestamp;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLocale;
- (bool)hasManifestEnvironment;
- (bool)hasNetworkService;
- (bool)hasRequestingAppIdentifier;
- (bool)hasRequestingAppMajorVer;
- (bool)hasRequestingAppMinorVer;
- (bool)hasTilesetId;
- (bool)hasUsedBackgroundUrl;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)locale;
- (id)manifestEnvironment;
- (void)mergeFrom:(id)arg1;
- (int)networkService;
- (id)networkServiceAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestingAppIdentifier;
- (id)requestingAppMajorVer;
- (id)requestingAppMinorVer;
- (void)setAdditionalStates:(id)arg1;
- (void)setAppIdentifier:(id)arg1;
- (void)setClientMetrics:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDataRequestKindSubtype:(int)arg1;
- (void)setDataRequestKindType:(int)arg1;
- (void)setDatasetId:(unsigned int)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setEventTimestamp:(double)arg1;
- (void)setHasDataRequestKindSubtype:(bool)arg1;
- (void)setHasDataRequestKindType:(bool)arg1;
- (void)setHasDatasetId:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasEventTimestamp:(bool)arg1;
- (void)setHasNetworkService:(bool)arg1;
- (void)setHasTilesetId:(bool)arg1;
- (void)setHasUsedBackgroundUrl:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setManifestEnvironment:(id)arg1;
- (void)setNetworkService:(int)arg1;
- (void)setRequestingAppIdentifier:(id)arg1;
- (void)setRequestingAppMajorVer:(id)arg1;
- (void)setRequestingAppMinorVer:(id)arg1;
- (void)setTilesetId:(unsigned int)arg1;
- (void)setUsedBackgroundUrl:(bool)arg1;
- (unsigned int)tilesetId;
- (id)unknownFields;
- (bool)usedBackgroundUrl;
- (void)writeTo:(id)arg1;

@end
