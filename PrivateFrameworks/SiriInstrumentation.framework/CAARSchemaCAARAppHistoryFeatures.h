/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface CAARSchemaCAARAppHistoryFeatures : SISchemaInstrumentationMessage {
    struct { 
        unsigned int numMinutesSinceAppInstalled : 1; 
        unsigned int numMinutesSinceAppLastLaunched : 1; 
        unsigned int numAppLaunchesLastTwoMinutes : 1; 
        unsigned int numAppLaunchesLastTenMinutes : 1; 
        unsigned int numAppLaunchesLastOneHour : 1; 
        unsigned int numAppLaunchesLastSixHours : 1; 
        unsigned int numAppLaunchesLastOneDay : 1; 
        unsigned int numAppLaunchesLastSevenDays : 1; 
        unsigned int numAppLaunchesLastTwentyEightDays : 1; 
        unsigned int numAppLaunchesLastInfinity : 1; 
    }  _has;
    unsigned int  _numAppLaunchesLastInfinity;
    unsigned int  _numAppLaunchesLastOneDay;
    unsigned int  _numAppLaunchesLastOneHour;
    unsigned int  _numAppLaunchesLastSevenDays;
    unsigned int  _numAppLaunchesLastSixHours;
    unsigned int  _numAppLaunchesLastTenMinutes;
    unsigned int  _numAppLaunchesLastTwentyEightDays;
    unsigned int  _numAppLaunchesLastTwoMinutes;
    unsigned int  _numMinutesSinceAppInstalled;
    unsigned int  _numMinutesSinceAppLastLaunched;
}

@property (nonatomic) bool hasNumAppLaunchesLastInfinity;
@property (nonatomic) bool hasNumAppLaunchesLastOneDay;
@property (nonatomic) bool hasNumAppLaunchesLastOneHour;
@property (nonatomic) bool hasNumAppLaunchesLastSevenDays;
@property (nonatomic) bool hasNumAppLaunchesLastSixHours;
@property (nonatomic) bool hasNumAppLaunchesLastTenMinutes;
@property (nonatomic) bool hasNumAppLaunchesLastTwentyEightDays;
@property (nonatomic) bool hasNumAppLaunchesLastTwoMinutes;
@property (nonatomic) bool hasNumMinutesSinceAppInstalled;
@property (nonatomic) bool hasNumMinutesSinceAppLastLaunched;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int numAppLaunchesLastInfinity;
@property (nonatomic) unsigned int numAppLaunchesLastOneDay;
@property (nonatomic) unsigned int numAppLaunchesLastOneHour;
@property (nonatomic) unsigned int numAppLaunchesLastSevenDays;
@property (nonatomic) unsigned int numAppLaunchesLastSixHours;
@property (nonatomic) unsigned int numAppLaunchesLastTenMinutes;
@property (nonatomic) unsigned int numAppLaunchesLastTwentyEightDays;
@property (nonatomic) unsigned int numAppLaunchesLastTwoMinutes;
@property (nonatomic) unsigned int numMinutesSinceAppInstalled;
@property (nonatomic) unsigned int numMinutesSinceAppLastLaunched;

- (void)deleteNumAppLaunchesLastInfinity;
- (void)deleteNumAppLaunchesLastOneDay;
- (void)deleteNumAppLaunchesLastOneHour;
- (void)deleteNumAppLaunchesLastSevenDays;
- (void)deleteNumAppLaunchesLastSixHours;
- (void)deleteNumAppLaunchesLastTenMinutes;
- (void)deleteNumAppLaunchesLastTwentyEightDays;
- (void)deleteNumAppLaunchesLastTwoMinutes;
- (void)deleteNumMinutesSinceAppInstalled;
- (void)deleteNumMinutesSinceAppLastLaunched;
- (id)dictionaryRepresentation;
- (bool)hasNumAppLaunchesLastInfinity;
- (bool)hasNumAppLaunchesLastOneDay;
- (bool)hasNumAppLaunchesLastOneHour;
- (bool)hasNumAppLaunchesLastSevenDays;
- (bool)hasNumAppLaunchesLastSixHours;
- (bool)hasNumAppLaunchesLastTenMinutes;
- (bool)hasNumAppLaunchesLastTwentyEightDays;
- (bool)hasNumAppLaunchesLastTwoMinutes;
- (bool)hasNumMinutesSinceAppInstalled;
- (bool)hasNumMinutesSinceAppLastLaunched;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)numAppLaunchesLastInfinity;
- (unsigned int)numAppLaunchesLastOneDay;
- (unsigned int)numAppLaunchesLastOneHour;
- (unsigned int)numAppLaunchesLastSevenDays;
- (unsigned int)numAppLaunchesLastSixHours;
- (unsigned int)numAppLaunchesLastTenMinutes;
- (unsigned int)numAppLaunchesLastTwentyEightDays;
- (unsigned int)numAppLaunchesLastTwoMinutes;
- (unsigned int)numMinutesSinceAppInstalled;
- (unsigned int)numMinutesSinceAppLastLaunched;
- (bool)readFrom:(id)arg1;
- (void)setHasNumAppLaunchesLastInfinity:(bool)arg1;
- (void)setHasNumAppLaunchesLastOneDay:(bool)arg1;
- (void)setHasNumAppLaunchesLastOneHour:(bool)arg1;
- (void)setHasNumAppLaunchesLastSevenDays:(bool)arg1;
- (void)setHasNumAppLaunchesLastSixHours:(bool)arg1;
- (void)setHasNumAppLaunchesLastTenMinutes:(bool)arg1;
- (void)setHasNumAppLaunchesLastTwentyEightDays:(bool)arg1;
- (void)setHasNumAppLaunchesLastTwoMinutes:(bool)arg1;
- (void)setHasNumMinutesSinceAppInstalled:(bool)arg1;
- (void)setHasNumMinutesSinceAppLastLaunched:(bool)arg1;
- (void)setNumAppLaunchesLastInfinity:(unsigned int)arg1;
- (void)setNumAppLaunchesLastOneDay:(unsigned int)arg1;
- (void)setNumAppLaunchesLastOneHour:(unsigned int)arg1;
- (void)setNumAppLaunchesLastSevenDays:(unsigned int)arg1;
- (void)setNumAppLaunchesLastSixHours:(unsigned int)arg1;
- (void)setNumAppLaunchesLastTenMinutes:(unsigned int)arg1;
- (void)setNumAppLaunchesLastTwentyEightDays:(unsigned int)arg1;
- (void)setNumAppLaunchesLastTwoMinutes:(unsigned int)arg1;
- (void)setNumMinutesSinceAppInstalled:(unsigned int)arg1;
- (void)setNumMinutesSinceAppLastLaunched:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
