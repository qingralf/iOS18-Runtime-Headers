/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface AppTelemetryInvestigation : PBCodable <NSCopying> {
    long long  _errorCode;
    NSString * _errorDescription;
    NSString * _errorDomain;
    NSString * _eventGroupUUID;
    unsigned long long  _eventTimestamp;
    AppTelemetryFPFSMigrationInvestigation * _fpfsMigrationInvestigation;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int eventTimestamp : 1; 
        unsigned int underlyingErrorCode : 1; 
        unsigned int hasForegroundClients : 1; 
        unsigned int isEnhancedDrivePrivacyEnabled : 1; 
        unsigned int isPCSChained : 1; 
        unsigned int nonDiscretionary : 1; 
        unsigned int sharedZone : 1; 
    }  _has;
    bool  _hasForegroundClients;
    bool  _isEnhancedDrivePrivacyEnabled;
    bool  _isPCSChained;
    NSString * _itemID;
    AppTelemetryItemStatsInvestigation * _itemStatsInvestigation;
    NSString * _lastStep;
    NSString * _migrationUUID;
    bool  _nonDiscretionary;
    NSString * _operationType;
    AppTelemetryQBSInvestigation * _qbsInvestigation;
    AppTelemetryQBSPerformance * _qbsPerformance;
    NSString * _reason;
    bool  _sharedZone;
    AppTelemetryStuckStatus * _stuckStatus;
    long long  _underlyingErrorCode;
    NSString * _underlyingErrorDomain;
    NSData * _zoneName;
}

@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic, retain) NSString *eventGroupUUID;
@property (nonatomic) unsigned long long eventTimestamp;
@property (nonatomic, retain) AppTelemetryFPFSMigrationInvestigation *fpfsMigrationInvestigation;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDescription;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic, readonly) bool hasEventGroupUUID;
@property (nonatomic) bool hasEventTimestamp;
@property (nonatomic) bool hasForegroundClients;
@property (nonatomic, readonly) bool hasFpfsMigrationInvestigation;
@property (nonatomic) bool hasHasForegroundClients;
@property (nonatomic) bool hasIsEnhancedDrivePrivacyEnabled;
@property (nonatomic) bool hasIsPCSChained;
@property (nonatomic, readonly) bool hasItemID;
@property (nonatomic, readonly) bool hasItemStatsInvestigation;
@property (nonatomic, readonly) bool hasLastStep;
@property (nonatomic, readonly) bool hasMigrationUUID;
@property (nonatomic) bool hasNonDiscretionary;
@property (nonatomic, readonly) bool hasOperationType;
@property (nonatomic, readonly) bool hasQbsInvestigation;
@property (nonatomic, readonly) bool hasQbsPerformance;
@property (nonatomic, readonly) bool hasReason;
@property (nonatomic) bool hasSharedZone;
@property (nonatomic, readonly) bool hasStuckStatus;
@property (nonatomic) bool hasUnderlyingErrorCode;
@property (nonatomic, readonly) bool hasUnderlyingErrorDomain;
@property (nonatomic, readonly) bool hasZoneName;
@property (nonatomic) bool isEnhancedDrivePrivacyEnabled;
@property (nonatomic) bool isPCSChained;
@property (nonatomic, retain) NSString *itemID;
@property (nonatomic, retain) AppTelemetryItemStatsInvestigation *itemStatsInvestigation;
@property (nonatomic, retain) NSString *lastStep;
@property (nonatomic, retain) NSString *migrationUUID;
@property (nonatomic) bool nonDiscretionary;
@property (nonatomic, retain) NSString *operationType;
@property (nonatomic, retain) AppTelemetryQBSInvestigation *qbsInvestigation;
@property (nonatomic, retain) AppTelemetryQBSPerformance *qbsPerformance;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic) bool sharedZone;
@property (nonatomic, retain) AppTelemetryStuckStatus *stuckStatus;
@property (nonatomic) long long underlyingErrorCode;
@property (nonatomic, retain) NSString *underlyingErrorDomain;
@property (nonatomic, retain) NSData *zoneName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (id)errorDescription;
- (id)errorDomain;
- (id)eventGroupUUID;
- (unsigned long long)eventTimestamp;
- (id)fpfsMigrationInvestigation;
- (bool)hasErrorCode;
- (bool)hasErrorDescription;
- (bool)hasErrorDomain;
- (bool)hasEventGroupUUID;
- (bool)hasEventTimestamp;
- (bool)hasForegroundClients;
- (bool)hasFpfsMigrationInvestigation;
- (bool)hasHasForegroundClients;
- (bool)hasIsEnhancedDrivePrivacyEnabled;
- (bool)hasIsPCSChained;
- (bool)hasItemID;
- (bool)hasItemStatsInvestigation;
- (bool)hasLastStep;
- (bool)hasMigrationUUID;
- (bool)hasNonDiscretionary;
- (bool)hasOperationType;
- (bool)hasQbsInvestigation;
- (bool)hasQbsPerformance;
- (bool)hasReason;
- (bool)hasSharedZone;
- (bool)hasStuckStatus;
- (bool)hasUnderlyingErrorCode;
- (bool)hasUnderlyingErrorDomain;
- (bool)hasZoneName;
- (unsigned long long)hash;
- (bool)isEnhancedDrivePrivacyEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isPCSChained;
- (id)itemID;
- (id)itemStatsInvestigation;
- (id)lastStep;
- (void)mergeFrom:(id)arg1;
- (id)migrationUUID;
- (bool)nonDiscretionary;
- (id)operationType;
- (id)qbsInvestigation;
- (id)qbsPerformance;
- (bool)readFrom:(id)arg1;
- (id)reason;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setEventGroupUUID:(id)arg1;
- (void)setEventTimestamp:(unsigned long long)arg1;
- (void)setFpfsMigrationInvestigation:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasEventTimestamp:(bool)arg1;
- (void)setHasForegroundClients:(bool)arg1;
- (void)setHasHasForegroundClients:(bool)arg1;
- (void)setHasIsEnhancedDrivePrivacyEnabled:(bool)arg1;
- (void)setHasIsPCSChained:(bool)arg1;
- (void)setHasNonDiscretionary:(bool)arg1;
- (void)setHasSharedZone:(bool)arg1;
- (void)setHasUnderlyingErrorCode:(bool)arg1;
- (void)setIsEnhancedDrivePrivacyEnabled:(bool)arg1;
- (void)setIsPCSChained:(bool)arg1;
- (void)setItemID:(id)arg1;
- (void)setItemStatsInvestigation:(id)arg1;
- (void)setLastStep:(id)arg1;
- (void)setMigrationUUID:(id)arg1;
- (void)setNonDiscretionary:(bool)arg1;
- (void)setOperationType:(id)arg1;
- (void)setQbsInvestigation:(id)arg1;
- (void)setQbsPerformance:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setSharedZone:(bool)arg1;
- (void)setStuckStatus:(id)arg1;
- (void)setUnderlyingErrorCode:(long long)arg1;
- (void)setUnderlyingErrorDomain:(id)arg1;
- (void)setZoneName:(id)arg1;
- (bool)sharedZone;
- (id)stuckStatus;
- (long long)underlyingErrorCode;
- (id)underlyingErrorDomain;
- (void)writeTo:(id)arg1;
- (id)zoneName;

@end
