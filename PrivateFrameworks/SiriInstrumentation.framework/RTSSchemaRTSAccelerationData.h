/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface RTSSchemaRTSAccelerationData : SISchemaInstrumentationMessage {
    struct { 
        unsigned int xAcceleration : 1; 
        unsigned int yAcceleration : 1; 
        unsigned int zAcceleration : 1; 
    }  _has;
    double  _xAcceleration;
    double  _yAcceleration;
    double  _zAcceleration;
}

@property (nonatomic) bool hasXAcceleration;
@property (nonatomic) bool hasYAcceleration;
@property (nonatomic) bool hasZAcceleration;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double xAcceleration;
@property (nonatomic) double yAcceleration;
@property (nonatomic) double zAcceleration;

- (void)deleteXAcceleration;
- (void)deleteYAcceleration;
- (void)deleteZAcceleration;
- (id)dictionaryRepresentation;
- (bool)hasXAcceleration;
- (bool)hasYAcceleration;
- (bool)hasZAcceleration;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasXAcceleration:(bool)arg1;
- (void)setHasYAcceleration:(bool)arg1;
- (void)setHasZAcceleration:(bool)arg1;
- (void)setXAcceleration:(double)arg1;
- (void)setYAcceleration:(double)arg1;
- (void)setZAcceleration:(double)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;
- (double)xAcceleration;
- (double)yAcceleration;
- (double)zAcceleration;

@end
