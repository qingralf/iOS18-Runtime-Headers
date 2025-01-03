/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBFlightLeg : PBCodable <NSSecureCoding, _SFPBFlightLeg> {
    _SFPBDate * _arrivalActualTime;
    _SFPBAirport * _arrivalAirport;
    NSString * _arrivalGate;
    _SFPBDate * _arrivalGateTime;
    _SFPBDate * _arrivalPublishedTime;
    _SFPBDate * _arrivalRunwayTime;
    NSString * _arrivalTerminal;
    NSString * _baggageClaim;
    _SFPBDate * _departureActualTime;
    _SFPBAirport * _departureAirport;
    NSString * _departureGate;
    _SFPBDate * _departureGateClosedTime;
    _SFPBDate * _departurePublishedTime;
    _SFPBDate * _departureRunwayTime;
    NSString * _departureTerminal;
    _SFPBAirport * _divertedAirport;
    int  _status;
    NSString * _title;
}

@property (nonatomic, retain) _SFPBDate *arrivalActualTime;
@property (nonatomic, retain) _SFPBAirport *arrivalAirport;
@property (nonatomic, copy) NSString *arrivalGate;
@property (nonatomic, retain) _SFPBDate *arrivalGateTime;
@property (nonatomic, retain) _SFPBDate *arrivalPublishedTime;
@property (nonatomic, retain) _SFPBDate *arrivalRunwayTime;
@property (nonatomic, copy) NSString *arrivalTerminal;
@property (nonatomic, copy) NSString *baggageClaim;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) _SFPBDate *departureActualTime;
@property (nonatomic, retain) _SFPBAirport *departureAirport;
@property (nonatomic, copy) NSString *departureGate;
@property (nonatomic, retain) _SFPBDate *departureGateClosedTime;
@property (nonatomic, retain) _SFPBDate *departurePublishedTime;
@property (nonatomic, retain) _SFPBDate *departureRunwayTime;
@property (nonatomic, copy) NSString *departureTerminal;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _SFPBAirport *divertedAirport;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int status;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)arrivalActualTime;
- (id)arrivalAirport;
- (id)arrivalGate;
- (id)arrivalGateTime;
- (id)arrivalPublishedTime;
- (id)arrivalRunwayTime;
- (id)arrivalTerminal;
- (id)baggageClaim;
- (id)departureActualTime;
- (id)departureAirport;
- (id)departureGate;
- (id)departureGateClosedTime;
- (id)departurePublishedTime;
- (id)departureRunwayTime;
- (id)departureTerminal;
- (id)dictionaryRepresentation;
- (id)divertedAirport;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setArrivalActualTime:(id)arg1;
- (void)setArrivalAirport:(id)arg1;
- (void)setArrivalGate:(id)arg1;
- (void)setArrivalGateTime:(id)arg1;
- (void)setArrivalPublishedTime:(id)arg1;
- (void)setArrivalRunwayTime:(id)arg1;
- (void)setArrivalTerminal:(id)arg1;
- (void)setBaggageClaim:(id)arg1;
- (void)setDepartureActualTime:(id)arg1;
- (void)setDepartureAirport:(id)arg1;
- (void)setDepartureGate:(id)arg1;
- (void)setDepartureGateClosedTime:(id)arg1;
- (void)setDeparturePublishedTime:(id)arg1;
- (void)setDepartureRunwayTime:(id)arg1;
- (void)setDepartureTerminal:(id)arg1;
- (void)setDivertedAirport:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTitle:(id)arg1;
- (int)status;
- (id)title;
- (void)writeTo:(id)arg1;

@end
