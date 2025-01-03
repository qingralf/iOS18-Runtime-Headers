/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerfPowerServicesReader.framework/PerfPowerServicesReader
 */

@interface AWDMETRICSCellularNrSDMActivation : PBCodable <NSCopying> {
    bool  _apNrRecomm;
    bool  _apNrRecommConfFactor;
    int  _currentRat;
    int  _deployment;
    unsigned int  _durationInPrevState;
    int  _fr;
    bool  _fr1MeasDisabled;
    bool  _fr2MeasDisabled;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int currentRat : 1; 
        unsigned int deployment : 1; 
        unsigned int durationInPrevState : 1; 
        unsigned int fr : 1; 
        unsigned int newState : 1; 
        unsigned int prevRat : 1; 
        unsigned int prevTriggerCause : 1; 
        unsigned int saVerdict : 1; 
        unsigned int subsId : 1; 
        unsigned int triggerCause : 1; 
        unsigned int apNrRecomm : 1; 
        unsigned int apNrRecommConfFactor : 1; 
        unsigned int fr1MeasDisabled : 1; 
        unsigned int fr2MeasDisabled : 1; 
    }  _has;
    int  _newState;
    int  _prevRat;
    int  _prevTriggerCause;
    int  _saVerdict;
    unsigned int  _subsId;
    unsigned long long  _timestamp;
    int  _triggerCause;
}

@property (nonatomic) bool apNrRecomm;
@property (nonatomic) bool apNrRecommConfFactor;
@property (nonatomic) int currentRat;
@property (nonatomic) int deployment;
@property (nonatomic) unsigned int durationInPrevState;
@property (nonatomic) int fr;
@property (nonatomic) bool fr1MeasDisabled;
@property (nonatomic) bool fr2MeasDisabled;
@property (nonatomic) bool hasApNrRecomm;
@property (nonatomic) bool hasApNrRecommConfFactor;
@property (nonatomic) bool hasCurrentRat;
@property (nonatomic) bool hasDeployment;
@property (nonatomic) bool hasDurationInPrevState;
@property (nonatomic) bool hasFr;
@property (nonatomic) bool hasFr1MeasDisabled;
@property (nonatomic) bool hasFr2MeasDisabled;
@property (nonatomic) bool hasNewState;
@property (nonatomic) bool hasPrevRat;
@property (nonatomic) bool hasPrevTriggerCause;
@property (nonatomic) bool hasSaVerdict;
@property (nonatomic) bool hasSubsId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTriggerCause;
@property (nonatomic) int newState;
@property (nonatomic) int prevRat;
@property (nonatomic) int prevTriggerCause;
@property (nonatomic) int saVerdict;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerCause;

- (int)StringAsCurrentRat:(id)arg1;
- (int)StringAsDeployment:(id)arg1;
- (int)StringAsFr:(id)arg1;
- (int)StringAsNewState:(id)arg1;
- (int)StringAsPrevRat:(id)arg1;
- (int)StringAsPrevTriggerCause:(id)arg1;
- (int)StringAsSaVerdict:(id)arg1;
- (int)StringAsTriggerCause:(id)arg1;
- (bool)apNrRecomm;
- (bool)apNrRecommConfFactor;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)currentRat;
- (id)currentRatAsString:(int)arg1;
- (int)deployment;
- (id)deploymentAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)durationInPrevState;
- (int)fr;
- (bool)fr1MeasDisabled;
- (bool)fr2MeasDisabled;
- (id)frAsString:(int)arg1;
- (bool)hasApNrRecomm;
- (bool)hasApNrRecommConfFactor;
- (bool)hasCurrentRat;
- (bool)hasDeployment;
- (bool)hasDurationInPrevState;
- (bool)hasFr;
- (bool)hasFr1MeasDisabled;
- (bool)hasFr2MeasDisabled;
- (bool)hasNewState;
- (bool)hasPrevRat;
- (bool)hasPrevTriggerCause;
- (bool)hasSaVerdict;
- (bool)hasSubsId;
- (bool)hasTimestamp;
- (bool)hasTriggerCause;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)newState;
- (id)newStateAsString:(int)arg1;
- (int)prevRat;
- (id)prevRatAsString:(int)arg1;
- (int)prevTriggerCause;
- (id)prevTriggerCauseAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (int)saVerdict;
- (id)saVerdictAsString:(int)arg1;
- (void)setApNrRecomm:(bool)arg1;
- (void)setApNrRecommConfFactor:(bool)arg1;
- (void)setCurrentRat:(int)arg1;
- (void)setDeployment:(int)arg1;
- (void)setDurationInPrevState:(unsigned int)arg1;
- (void)setFr1MeasDisabled:(bool)arg1;
- (void)setFr2MeasDisabled:(bool)arg1;
- (void)setFr:(int)arg1;
- (void)setHasApNrRecomm:(bool)arg1;
- (void)setHasApNrRecommConfFactor:(bool)arg1;
- (void)setHasCurrentRat:(bool)arg1;
- (void)setHasDeployment:(bool)arg1;
- (void)setHasDurationInPrevState:(bool)arg1;
- (void)setHasFr1MeasDisabled:(bool)arg1;
- (void)setHasFr2MeasDisabled:(bool)arg1;
- (void)setHasFr:(bool)arg1;
- (void)setHasNewState:(bool)arg1;
- (void)setHasPrevRat:(bool)arg1;
- (void)setHasPrevTriggerCause:(bool)arg1;
- (void)setHasSaVerdict:(bool)arg1;
- (void)setHasSubsId:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTriggerCause:(bool)arg1;
- (void)setNewState:(int)arg1;
- (void)setPrevRat:(int)arg1;
- (void)setPrevTriggerCause:(int)arg1;
- (void)setSaVerdict:(int)arg1;
- (void)setSubsId:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerCause:(int)arg1;
- (unsigned int)subsId;
- (unsigned long long)timestamp;
- (int)triggerCause;
- (id)triggerCauseAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
