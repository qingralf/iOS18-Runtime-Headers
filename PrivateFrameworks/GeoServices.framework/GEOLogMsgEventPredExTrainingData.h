/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventPredExTrainingData : PBCodable <NSCopying> {
    int  _actualTransportMode;
    double  _chanceOfPrecipitation;
    double  _chanceOfRain;
    double  _chanceOfSnow;
    double  _dayOfWeek;
    int  _distanceFromHere;
    int  _distanceFromHereToHome;
    int  _distanceFromHereToOrigin;
    int  _distanceFromHereToParkedCar;
    int  _distanceFromHereToWork;
    int  _distanceFromOriginToDestination;
    double  _durationUntilEventEnd;
    double  _durationUntilEventStart;
    double  _endTime;
    int  _entryType;
    struct { 
        unsigned int has_chanceOfPrecipitation : 1; 
        unsigned int has_chanceOfRain : 1; 
        unsigned int has_chanceOfSnow : 1; 
        unsigned int has_dayOfWeek : 1; 
        unsigned int has_durationUntilEventEnd : 1; 
        unsigned int has_durationUntilEventStart : 1; 
        unsigned int has_endTime : 1; 
        unsigned int has_isTourist : 1; 
        unsigned int has_startTime : 1; 
        unsigned int has_temperature : 1; 
        unsigned int has_timeOfDay : 1; 
        unsigned int has_timeSinceBackgrounded : 1; 
        unsigned int has_actualTransportMode : 1; 
        unsigned int has_distanceFromHereToHome : 1; 
        unsigned int has_distanceFromHereToOrigin : 1; 
        unsigned int has_distanceFromHereToParkedCar : 1; 
        unsigned int has_distanceFromHereToWork : 1; 
        unsigned int has_distanceFromHere : 1; 
        unsigned int has_distanceFromOriginToDestination : 1; 
        unsigned int has_entryType : 1; 
        unsigned int has_mapType : 1; 
        unsigned int has_predictedTransportMode : 1; 
        unsigned int has_preferredTransportMode : 1; 
        unsigned int has_weatherAqi : 1; 
        unsigned int has_weatherType : 1; 
        unsigned int has_isCarplayConnected : 1; 
        unsigned int has_isInBasemode : 1; 
        unsigned int has_isTransitPossible : 1; 
        unsigned int has_isVehicleBluetoothConnected : 1; 
        unsigned int has_routePlanningScreenPresented : 1; 
        unsigned int read_userLocationGeohash4 : 1; 
        unsigned int read_userLocation : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isCarplayConnected;
    bool  _isInBasemode;
    double  _isTourist;
    bool  _isTransitPossible;
    bool  _isVehicleBluetoothConnected;
    int  _mapType;
    int  _predictedTransportMode;
    int  _preferredTransportMode;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    bool  _routePlanningScreenPresented;
    double  _startTime;
    double  _temperature;
    double  _timeOfDay;
    double  _timeSinceBackgrounded;
    GEOLatLng * _userLocation;
    NSString * _userLocationGeohash4;
    unsigned int  _weatherAqi;
    int  _weatherType;
}

@property (nonatomic) int actualTransportMode;
@property (nonatomic) double chanceOfPrecipitation;
@property (nonatomic) double chanceOfRain;
@property (nonatomic) double chanceOfSnow;
@property (nonatomic) double dayOfWeek;
@property (nonatomic) int distanceFromHere;
@property (nonatomic) int distanceFromHereToHome;
@property (nonatomic) int distanceFromHereToOrigin;
@property (nonatomic) int distanceFromHereToParkedCar;
@property (nonatomic) int distanceFromHereToWork;
@property (nonatomic) int distanceFromOriginToDestination;
@property (nonatomic) double durationUntilEventEnd;
@property (nonatomic) double durationUntilEventStart;
@property (nonatomic) double endTime;
@property (nonatomic) int entryType;
@property (nonatomic) bool hasActualTransportMode;
@property (nonatomic) bool hasChanceOfPrecipitation;
@property (nonatomic) bool hasChanceOfRain;
@property (nonatomic) bool hasChanceOfSnow;
@property (nonatomic) bool hasDayOfWeek;
@property (nonatomic) bool hasDistanceFromHere;
@property (nonatomic) bool hasDistanceFromHereToHome;
@property (nonatomic) bool hasDistanceFromHereToOrigin;
@property (nonatomic) bool hasDistanceFromHereToParkedCar;
@property (nonatomic) bool hasDistanceFromHereToWork;
@property (nonatomic) bool hasDistanceFromOriginToDestination;
@property (nonatomic) bool hasDurationUntilEventEnd;
@property (nonatomic) bool hasDurationUntilEventStart;
@property (nonatomic) bool hasEndTime;
@property (nonatomic) bool hasEntryType;
@property (nonatomic) bool hasIsCarplayConnected;
@property (nonatomic) bool hasIsInBasemode;
@property (nonatomic) bool hasIsTourist;
@property (nonatomic) bool hasIsTransitPossible;
@property (nonatomic) bool hasIsVehicleBluetoothConnected;
@property (nonatomic) bool hasMapType;
@property (nonatomic) bool hasPredictedTransportMode;
@property (nonatomic) bool hasPreferredTransportMode;
@property (nonatomic) bool hasRoutePlanningScreenPresented;
@property (nonatomic) bool hasStartTime;
@property (nonatomic) bool hasTemperature;
@property (nonatomic) bool hasTimeOfDay;
@property (nonatomic) bool hasTimeSinceBackgrounded;
@property (nonatomic, readonly) bool hasUserLocation;
@property (nonatomic, readonly) bool hasUserLocationGeohash4;
@property (nonatomic) bool hasWeatherAqi;
@property (nonatomic) bool hasWeatherType;
@property (nonatomic) bool isCarplayConnected;
@property (nonatomic) bool isInBasemode;
@property (nonatomic) double isTourist;
@property (nonatomic) bool isTransitPossible;
@property (nonatomic) bool isVehicleBluetoothConnected;
@property (nonatomic) int mapType;
@property (nonatomic) int predictedTransportMode;
@property (nonatomic) int preferredTransportMode;
@property (nonatomic) bool routePlanningScreenPresented;
@property (nonatomic) double startTime;
@property (nonatomic) double temperature;
@property (nonatomic) double timeOfDay;
@property (nonatomic) double timeSinceBackgrounded;
@property (nonatomic, retain) GEOLatLng *userLocation;
@property (nonatomic, retain) NSString *userLocationGeohash4;
@property (nonatomic) unsigned int weatherAqi;
@property (nonatomic) int weatherType;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsActualTransportMode:(id)arg1;
- (int)StringAsDistanceFromHere:(id)arg1;
- (int)StringAsDistanceFromHereToHome:(id)arg1;
- (int)StringAsDistanceFromHereToOrigin:(id)arg1;
- (int)StringAsDistanceFromHereToParkedCar:(id)arg1;
- (int)StringAsDistanceFromHereToWork:(id)arg1;
- (int)StringAsDistanceFromOriginToDestination:(id)arg1;
- (int)StringAsEntryType:(id)arg1;
- (int)StringAsMapType:(id)arg1;
- (int)StringAsPredictedTransportMode:(id)arg1;
- (int)StringAsPreferredTransportMode:(id)arg1;
- (int)StringAsWeatherType:(id)arg1;
- (int)actualTransportMode;
- (id)actualTransportModeAsString:(int)arg1;
- (double)chanceOfPrecipitation;
- (double)chanceOfRain;
- (double)chanceOfSnow;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dayOfWeek;
- (id)description;
- (id)dictionaryRepresentation;
- (int)distanceFromHere;
- (id)distanceFromHereAsString:(int)arg1;
- (int)distanceFromHereToHome;
- (id)distanceFromHereToHomeAsString:(int)arg1;
- (int)distanceFromHereToOrigin;
- (id)distanceFromHereToOriginAsString:(int)arg1;
- (int)distanceFromHereToParkedCar;
- (id)distanceFromHereToParkedCarAsString:(int)arg1;
- (int)distanceFromHereToWork;
- (id)distanceFromHereToWorkAsString:(int)arg1;
- (int)distanceFromOriginToDestination;
- (id)distanceFromOriginToDestinationAsString:(int)arg1;
- (double)durationUntilEventEnd;
- (double)durationUntilEventStart;
- (double)endTime;
- (int)entryType;
- (id)entryTypeAsString:(int)arg1;
- (bool)hasActualTransportMode;
- (bool)hasChanceOfPrecipitation;
- (bool)hasChanceOfRain;
- (bool)hasChanceOfSnow;
- (bool)hasDayOfWeek;
- (bool)hasDistanceFromHere;
- (bool)hasDistanceFromHereToHome;
- (bool)hasDistanceFromHereToOrigin;
- (bool)hasDistanceFromHereToParkedCar;
- (bool)hasDistanceFromHereToWork;
- (bool)hasDistanceFromOriginToDestination;
- (bool)hasDurationUntilEventEnd;
- (bool)hasDurationUntilEventStart;
- (bool)hasEndTime;
- (bool)hasEntryType;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIsCarplayConnected;
- (bool)hasIsInBasemode;
- (bool)hasIsTourist;
- (bool)hasIsTransitPossible;
- (bool)hasIsVehicleBluetoothConnected;
- (bool)hasMapType;
- (bool)hasPredictedTransportMode;
- (bool)hasPreferredTransportMode;
- (bool)hasRoutePlanningScreenPresented;
- (bool)hasStartTime;
- (bool)hasTemperature;
- (bool)hasTimeOfDay;
- (bool)hasTimeSinceBackgrounded;
- (bool)hasUserLocation;
- (bool)hasUserLocationGeohash4;
- (bool)hasWeatherAqi;
- (bool)hasWeatherType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isCarplayConnected;
- (bool)isEqual:(id)arg1;
- (bool)isInBasemode;
- (double)isTourist;
- (bool)isTransitPossible;
- (bool)isVehicleBluetoothConnected;
- (id)jsonRepresentation;
- (int)mapType;
- (id)mapTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (int)predictedTransportMode;
- (id)predictedTransportModeAsString:(int)arg1;
- (int)preferredTransportMode;
- (id)preferredTransportModeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (bool)routePlanningScreenPresented;
- (void)setActualTransportMode:(int)arg1;
- (void)setChanceOfPrecipitation:(double)arg1;
- (void)setChanceOfRain:(double)arg1;
- (void)setChanceOfSnow:(double)arg1;
- (void)setDayOfWeek:(double)arg1;
- (void)setDistanceFromHere:(int)arg1;
- (void)setDistanceFromHereToHome:(int)arg1;
- (void)setDistanceFromHereToOrigin:(int)arg1;
- (void)setDistanceFromHereToParkedCar:(int)arg1;
- (void)setDistanceFromHereToWork:(int)arg1;
- (void)setDistanceFromOriginToDestination:(int)arg1;
- (void)setDurationUntilEventEnd:(double)arg1;
- (void)setDurationUntilEventStart:(double)arg1;
- (void)setEndTime:(double)arg1;
- (void)setEntryType:(int)arg1;
- (void)setHasActualTransportMode:(bool)arg1;
- (void)setHasChanceOfPrecipitation:(bool)arg1;
- (void)setHasChanceOfRain:(bool)arg1;
- (void)setHasChanceOfSnow:(bool)arg1;
- (void)setHasDayOfWeek:(bool)arg1;
- (void)setHasDistanceFromHere:(bool)arg1;
- (void)setHasDistanceFromHereToHome:(bool)arg1;
- (void)setHasDistanceFromHereToOrigin:(bool)arg1;
- (void)setHasDistanceFromHereToParkedCar:(bool)arg1;
- (void)setHasDistanceFromHereToWork:(bool)arg1;
- (void)setHasDistanceFromOriginToDestination:(bool)arg1;
- (void)setHasDurationUntilEventEnd:(bool)arg1;
- (void)setHasDurationUntilEventStart:(bool)arg1;
- (void)setHasEndTime:(bool)arg1;
- (void)setHasEntryType:(bool)arg1;
- (void)setHasIsCarplayConnected:(bool)arg1;
- (void)setHasIsInBasemode:(bool)arg1;
- (void)setHasIsTourist:(bool)arg1;
- (void)setHasIsTransitPossible:(bool)arg1;
- (void)setHasIsVehicleBluetoothConnected:(bool)arg1;
- (void)setHasMapType:(bool)arg1;
- (void)setHasPredictedTransportMode:(bool)arg1;
- (void)setHasPreferredTransportMode:(bool)arg1;
- (void)setHasRoutePlanningScreenPresented:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasTemperature:(bool)arg1;
- (void)setHasTimeOfDay:(bool)arg1;
- (void)setHasTimeSinceBackgrounded:(bool)arg1;
- (void)setHasWeatherAqi:(bool)arg1;
- (void)setHasWeatherType:(bool)arg1;
- (void)setIsCarplayConnected:(bool)arg1;
- (void)setIsInBasemode:(bool)arg1;
- (void)setIsTourist:(double)arg1;
- (void)setIsTransitPossible:(bool)arg1;
- (void)setIsVehicleBluetoothConnected:(bool)arg1;
- (void)setMapType:(int)arg1;
- (void)setPredictedTransportMode:(int)arg1;
- (void)setPreferredTransportMode:(int)arg1;
- (void)setRoutePlanningScreenPresented:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTemperature:(double)arg1;
- (void)setTimeOfDay:(double)arg1;
- (void)setTimeSinceBackgrounded:(double)arg1;
- (void)setUserLocation:(id)arg1;
- (void)setUserLocationGeohash4:(id)arg1;
- (void)setWeatherAqi:(unsigned int)arg1;
- (void)setWeatherType:(int)arg1;
- (double)startTime;
- (double)temperature;
- (double)timeOfDay;
- (double)timeSinceBackgrounded;
- (id)userLocation;
- (id)userLocationGeohash4;
- (unsigned int)weatherAqi;
- (int)weatherType;
- (id)weatherTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
