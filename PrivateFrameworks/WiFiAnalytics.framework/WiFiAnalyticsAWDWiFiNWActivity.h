/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

@interface WiFiAnalyticsAWDWiFiNWActivity : PBCodable <NSCopying> {
    NSMutableArray * _activities;
    WiFiAnalyticsAWDWiFiNWActivityAPInterfaceStats * _apIfStats;
    NSString * _apProfile;
    WiFiAnalyticsAWDWiFiNWActivityAWDLInterfaceStats * _awdlIfStats;
    NSMutableArray * _btleConnections;
    WiFiAnalyticsAWDWiFiNWActivityControllerStats * _controllerStats;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSMutableArray * _interfaceStats;
    WiFiAnalyticsAWDWiFiNWActivityIRInterfaceStats * _irIfStats;
    WiFiAnalyticsAWDLinkQualityMeasurements * _linkQualSample;
    WiFiAnalyticsAWDWiFiNWActivityNANInterfaceStats * _nanIfStats;
    NSMutableArray * _peerStats;
    NSMutableArray * _scores;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSMutableArray *activities;
@property (nonatomic, retain) WiFiAnalyticsAWDWiFiNWActivityAPInterfaceStats *apIfStats;
@property (nonatomic, retain) NSString *apProfile;
@property (nonatomic, retain) WiFiAnalyticsAWDWiFiNWActivityAWDLInterfaceStats *awdlIfStats;
@property (nonatomic, retain) NSMutableArray *btleConnections;
@property (nonatomic, retain) WiFiAnalyticsAWDWiFiNWActivityControllerStats *controllerStats;
@property (nonatomic, readonly) bool hasApIfStats;
@property (nonatomic, readonly) bool hasApProfile;
@property (nonatomic, readonly) bool hasAwdlIfStats;
@property (nonatomic, readonly) bool hasControllerStats;
@property (nonatomic, readonly) bool hasIrIfStats;
@property (nonatomic, readonly) bool hasLinkQualSample;
@property (nonatomic, readonly) bool hasNanIfStats;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *interfaceStats;
@property (nonatomic, retain) WiFiAnalyticsAWDWiFiNWActivityIRInterfaceStats *irIfStats;
@property (nonatomic, retain) WiFiAnalyticsAWDLinkQualityMeasurements *linkQualSample;
@property (nonatomic, retain) WiFiAnalyticsAWDWiFiNWActivityNANInterfaceStats *nanIfStats;
@property (nonatomic, retain) NSMutableArray *peerStats;
@property (nonatomic, retain) NSMutableArray *scores;
@property (nonatomic) unsigned long long timestamp;

+ (Class)activitiesType;
+ (Class)btleConnectionType;
+ (Class)interfaceStatsType;
+ (Class)peerStatsType;
+ (Class)scoreType;

- (void).cxx_destruct;
- (id)activities;
- (id)activitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)activitiesCount;
- (void)addActivities:(id)arg1;
- (void)addBtleConnection:(id)arg1;
- (void)addInterfaceStats:(id)arg1;
- (void)addPeerStats:(id)arg1;
- (void)addScore:(id)arg1;
- (id)apIfStats;
- (id)apProfile;
- (id)awdlIfStats;
- (id)btleConnectionAtIndex:(unsigned long long)arg1;
- (id)btleConnections;
- (unsigned long long)btleConnectionsCount;
- (void)clearActivities;
- (void)clearBtleConnections;
- (void)clearInterfaceStats;
- (void)clearPeerStats;
- (void)clearScores;
- (id)controllerStats;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApIfStats;
- (bool)hasApProfile;
- (bool)hasAwdlIfStats;
- (bool)hasControllerStats;
- (bool)hasIrIfStats;
- (bool)hasLinkQualSample;
- (bool)hasNanIfStats;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)interfaceStats;
- (id)interfaceStatsAtIndex:(unsigned long long)arg1;
- (unsigned long long)interfaceStatsCount;
- (id)irIfStats;
- (bool)isEqual:(id)arg1;
- (id)linkQualSample;
- (void)mergeFrom:(id)arg1;
- (id)nanIfStats;
- (id)peerStats;
- (id)peerStatsAtIndex:(unsigned long long)arg1;
- (unsigned long long)peerStatsCount;
- (bool)readFrom:(id)arg1;
- (id)scoreAtIndex:(unsigned long long)arg1;
- (id)scores;
- (unsigned long long)scoresCount;
- (void)setActivities:(id)arg1;
- (void)setApIfStats:(id)arg1;
- (void)setApProfile:(id)arg1;
- (void)setAwdlIfStats:(id)arg1;
- (void)setBtleConnections:(id)arg1;
- (void)setControllerStats:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInterfaceStats:(id)arg1;
- (void)setIrIfStats:(id)arg1;
- (void)setLinkQualSample:(id)arg1;
- (void)setNanIfStats:(id)arg1;
- (void)setPeerStats:(id)arg1;
- (void)setScores:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end