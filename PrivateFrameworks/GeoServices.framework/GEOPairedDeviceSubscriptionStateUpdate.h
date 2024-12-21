/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPairedDeviceSubscriptionStateUpdate : PBCodable <NSCopying> {
    unsigned int  _downloadState;
    struct { 
        unsigned int has_downloadState : 1; 
        unsigned int has_loadState : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_identifier : 1; 
        unsigned int read_progress : 1; 
        unsigned int read_userInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _identifier;
    unsigned int  _loadState;
    GEOPairedDeviceProgress * _progress;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    GEOPairedDeviceSubscriptionStateUserInfo * _userInfo;
}

@property (nonatomic) unsigned int downloadState;
@property (nonatomic) bool hasDownloadState;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasLoadState;
@property (nonatomic, readonly) bool hasProgress;
@property (nonatomic, readonly) bool hasUserInfo;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) unsigned int loadState;
@property (nonatomic, retain) GEOPairedDeviceProgress *progress;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPairedDeviceSubscriptionStateUserInfo *userInfo;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)downloadState;
- (bool)hasDownloadState;
- (bool)hasIdentifier;
- (bool)hasLoadState;
- (bool)hasProgress;
- (bool)hasUserInfo;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned int)loadState;
- (void)mergeFrom:(id)arg1;
- (id)progress;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDownloadState:(unsigned int)arg1;
- (void)setHasDownloadState:(bool)arg1;
- (void)setHasLoadState:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLoadState:(unsigned int)arg1;
- (void)setProgress:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)unknownFields;
- (id)userInfo;
- (void)writeTo:(id)arg1;

@end