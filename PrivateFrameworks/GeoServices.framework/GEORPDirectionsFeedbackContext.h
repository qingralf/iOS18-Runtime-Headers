/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPDirectionsFeedbackContext : PBCodable <NSCopying> {
    NSMutableArray * _directionsRequests;
    NSMutableArray * _directionsResponses;
    NSMutableArray * _directionsWaypointPlaceInfos;
    GEORPUserSearchInput * _endWaypoint;
    struct { 
        unsigned int has_isRouteToPerson : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_directionsRequests : 1; 
        unsigned int read_directionsResponses : 1; 
        unsigned int read_directionsWaypointPlaceInfos : 1; 
        unsigned int read_endWaypoint : 1; 
        unsigned int read_rerouteLocations : 1; 
        unsigned int read_routes : 1; 
        unsigned int read_startWaypoint : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isRouteToPerson;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _rerouteLocations;
    NSMutableArray * _routes;
    GEORPUserSearchInput * _startWaypoint;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *directionsRequests;
@property (nonatomic, retain) NSMutableArray *directionsResponses;
@property (nonatomic, retain) NSMutableArray *directionsWaypointPlaceInfos;
@property (nonatomic, retain) GEORPUserSearchInput *endWaypoint;
@property (nonatomic, readonly) bool hasEndWaypoint;
@property (nonatomic) bool hasIsRouteToPerson;
@property (nonatomic, readonly) bool hasStartWaypoint;
@property (nonatomic) bool isRouteToPerson;
@property (nonatomic, retain) NSMutableArray *rerouteLocations;
@property (nonatomic, retain) NSMutableArray *routes;
@property (nonatomic, retain) GEORPUserSearchInput *startWaypoint;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)directionsRequestType;
+ (Class)directionsResponseType;
+ (Class)directionsWaypointPlaceInfoType;
+ (bool)isValid:(id)arg1;
+ (Class)rerouteLocationType;
+ (Class)routeType;

- (void).cxx_destruct;
- (void)addDirectionsRequest:(id)arg1;
- (void)addDirectionsResponse:(id)arg1;
- (void)addDirectionsWaypointPlaceInfo:(id)arg1;
- (void)addRerouteLocation:(id)arg1;
- (void)addRoute:(id)arg1;
- (void)clearDirectionsRequests;
- (void)clearDirectionsResponses;
- (void)clearDirectionsWaypointPlaceInfos;
- (void)clearRerouteLocations;
- (void)clearRoutes;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsRequestAtIndex:(unsigned long long)arg1;
- (id)directionsRequests;
- (unsigned long long)directionsRequestsCount;
- (id)directionsResponseAtIndex:(unsigned long long)arg1;
- (id)directionsResponses;
- (unsigned long long)directionsResponsesCount;
- (id)directionsWaypointPlaceInfoAtIndex:(unsigned long long)arg1;
- (id)directionsWaypointPlaceInfos;
- (unsigned long long)directionsWaypointPlaceInfosCount;
- (id)endWaypoint;
- (bool)hasEndWaypoint;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIsRouteToPerson;
- (bool)hasStartWaypoint;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRouteToPerson;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)rerouteLocationAtIndex:(unsigned long long)arg1;
- (id)rerouteLocations;
- (unsigned long long)rerouteLocationsCount;
- (id)routeAtIndex:(unsigned long long)arg1;
- (id)routes;
- (unsigned long long)routesCount;
- (void)setDirectionsRequests:(id)arg1;
- (void)setDirectionsResponses:(id)arg1;
- (void)setDirectionsWaypointPlaceInfos:(id)arg1;
- (void)setEndWaypoint:(id)arg1;
- (void)setHasIsRouteToPerson:(bool)arg1;
- (void)setIsRouteToPerson:(bool)arg1;
- (void)setRerouteLocations:(id)arg1;
- (void)setRoutes:(id)arg1;
- (void)setStartWaypoint:(id)arg1;
- (id)startWaypoint;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end