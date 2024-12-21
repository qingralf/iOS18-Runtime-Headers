/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBSportsEventRecord : PBCodable <NSCopying> {
    NSMutableArray * _allowedStorefrontIDs;
    NTPBRecordBase * _base;
    NSMutableArray * _blockedStorefrontIDs;
    NSString * _eventArticleListID;
    NSMutableArray * _eventCompetitorTagIDs;
    NSString * _eventLeagueTagID;
    struct { 
        unsigned int minimumNewsVersion : 1; 
        unsigned int isDeprecated : 1; 
    }  _has;
    NSString * _highlightsArticleListID;
    bool  _isDeprecated;
    long long  _minimumNewsVersion;
    NSString * _sportsData;
    NSString * _sportsTheme;
    NSString * _superfeedConfigResourceID;
}

@property (nonatomic, retain) NSMutableArray *allowedStorefrontIDs;
@property (nonatomic, retain) NTPBRecordBase *base;
@property (nonatomic, retain) NSMutableArray *blockedStorefrontIDs;
@property (nonatomic, retain) NSString *eventArticleListID;
@property (nonatomic, retain) NSMutableArray *eventCompetitorTagIDs;
@property (nonatomic, retain) NSString *eventLeagueTagID;
@property (nonatomic, readonly) bool hasBase;
@property (nonatomic, readonly) bool hasEventArticleListID;
@property (nonatomic, readonly) bool hasEventLeagueTagID;
@property (nonatomic, readonly) bool hasHighlightsArticleListID;
@property (nonatomic) bool hasIsDeprecated;
@property (nonatomic) bool hasMinimumNewsVersion;
@property (nonatomic, readonly) bool hasSportsData;
@property (nonatomic, readonly) bool hasSportsTheme;
@property (nonatomic, readonly) bool hasSuperfeedConfigResourceID;
@property (nonatomic, retain) NSString *highlightsArticleListID;
@property (nonatomic) bool isDeprecated;
@property (nonatomic) long long minimumNewsVersion;
@property (nonatomic, retain) NSString *sportsData;
@property (nonatomic, retain) NSString *sportsTheme;
@property (nonatomic, retain) NSString *superfeedConfigResourceID;

+ (Class)allowedStorefrontIDsType;
+ (Class)blockedStorefrontIDsType;
+ (Class)eventCompetitorTagIDsType;

- (void)addAllowedStorefrontIDs:(id)arg1;
- (void)addBlockedStorefrontIDs:(id)arg1;
- (void)addEventCompetitorTagIDs:(id)arg1;
- (id)allowedStorefrontIDs;
- (id)allowedStorefrontIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)allowedStorefrontIDsCount;
- (id)base;
- (id)blockedStorefrontIDs;
- (id)blockedStorefrontIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)blockedStorefrontIDsCount;
- (void)clearAllowedStorefrontIDs;
- (void)clearBlockedStorefrontIDs;
- (void)clearEventCompetitorTagIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventArticleListID;
- (id)eventCompetitorTagIDs;
- (id)eventCompetitorTagIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventCompetitorTagIDsCount;
- (id)eventLeagueTagID;
- (bool)hasBase;
- (bool)hasEventArticleListID;
- (bool)hasEventLeagueTagID;
- (bool)hasHighlightsArticleListID;
- (bool)hasIsDeprecated;
- (bool)hasMinimumNewsVersion;
- (bool)hasSportsData;
- (bool)hasSportsTheme;
- (bool)hasSuperfeedConfigResourceID;
- (unsigned long long)hash;
- (id)highlightsArticleListID;
- (bool)isDeprecated;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)minimumNewsVersion;
- (bool)readFrom:(id)arg1;
- (void)setAllowedStorefrontIDs:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setBlockedStorefrontIDs:(id)arg1;
- (void)setEventArticleListID:(id)arg1;
- (void)setEventCompetitorTagIDs:(id)arg1;
- (void)setEventLeagueTagID:(id)arg1;
- (void)setHasIsDeprecated:(bool)arg1;
- (void)setHasMinimumNewsVersion:(bool)arg1;
- (void)setHighlightsArticleListID:(id)arg1;
- (void)setIsDeprecated:(bool)arg1;
- (void)setMinimumNewsVersion:(long long)arg1;
- (void)setSportsData:(id)arg1;
- (void)setSportsTheme:(id)arg1;
- (void)setSuperfeedConfigResourceID:(id)arg1;
- (id)sportsData;
- (id)sportsTheme;
- (id)superfeedConfigResourceID;
- (void)writeTo:(id)arg1;

@end