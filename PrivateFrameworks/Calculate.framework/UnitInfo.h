/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Calculate.framework/Calculate
 */

@interface UnitInfo : NSObject {
    NSSet * _allSubunitIDs;
    struct { 
        unsigned long long w[2]; 
    }  _baseDenominator;
    struct { 
        unsigned long long w[2]; 
    }  _baseNumerator;
    UnitInfo * _bestEquivalent;
    bool  _doNotSuggest;
    bool  _formatNextSmallest;
    bool  _impliesDivision;
    bool  _isBaseUnit;
    bool  _isCelsius;
    bool  _isDisplayName;
    bool  _isFahrenheit;
    bool  _isInverted;
    bool  _isKelvin;
    bool  _isPreferredUnit;
    NSMutableDictionary * _localizationToCompactName;
    unsigned long long  _measurementSystem;
    NSString * _name;
    UnitInfo * _nextSmallest;
    NSArray * _subunitIDs;
    UnitTypeInfo * _typeInfo;
    int  _unitID;
    int  _unitType;
}

@property (nonatomic, retain) NSSet *allSubunitIDs;
@property (nonatomic) struct { unsigned long long x1[2]; } baseDenominator;
@property (nonatomic) struct { unsigned long long x1[2]; } baseNumerator;
@property (nonatomic) UnitInfo *bestEquivalent;
@property (nonatomic) bool doNotSuggest;
@property (nonatomic) bool formatNextSmallest;
@property (nonatomic) bool impliesDivision;
@property (nonatomic) bool isBaseUnit;
@property (nonatomic) bool isCelsius;
@property (nonatomic) bool isDisplayName;
@property (nonatomic) bool isFahrenheit;
@property (nonatomic) bool isInverted;
@property (nonatomic) bool isKelvin;
@property (nonatomic) bool isPreferredUnit;
@property (nonatomic, retain) NSMutableDictionary *localizationToCompactName;
@property (nonatomic) unsigned long long measurementSystem;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) UnitInfo *nextSmallest;
@property (nonatomic, retain) NSArray *subunitIDs;
@property (nonatomic) UnitTypeInfo *typeInfo;
@property (nonatomic) int unitID;
@property (nonatomic) int unitType;

- (void).cxx_destruct;
- (id)allSubunitIDs;
- (struct { unsigned long long x1[2]; })baseDenominator;
- (struct { unsigned long long x1[2]; })baseNumerator;
- (id)bestEquivalent;
- (long long)compare:(id)arg1;
- (bool)doNotSuggest;
- (bool)formatNextSmallest;
- (unsigned long long)hash;
- (bool)impliesDivision;
- (id)init;
- (bool)isBaseUnit;
- (bool)isCelsius;
- (bool)isDisplayName;
- (bool)isEqual:(id)arg1;
- (bool)isFahrenheit;
- (bool)isInverted;
- (bool)isKelvin;
- (bool)isPreferredUnit;
- (id)localizationToCompactName;
- (unsigned long long)measurementSystem;
- (id)name;
- (id)nextSmallest;
- (void)setAllSubunitIDs:(id)arg1;
- (void)setBaseDenominator:(struct { unsigned long long x1[2]; })arg1;
- (void)setBaseNumerator:(struct { unsigned long long x1[2]; })arg1;
- (void)setBestEquivalent:(id)arg1;
- (void)setDoNotSuggest:(bool)arg1;
- (void)setFormatNextSmallest:(bool)arg1;
- (void)setImpliesDivision:(bool)arg1;
- (void)setIsBaseUnit:(bool)arg1;
- (void)setIsCelsius:(bool)arg1;
- (void)setIsDisplayName:(bool)arg1;
- (void)setIsFahrenheit:(bool)arg1;
- (void)setIsInverted:(bool)arg1;
- (void)setIsKelvin:(bool)arg1;
- (void)setIsPreferredUnit:(bool)arg1;
- (void)setLocalizationToCompactName:(id)arg1;
- (void)setMeasurementSystem:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setNextSmallest:(id)arg1;
- (void)setSubunitIDs:(id)arg1;
- (void)setTypeInfo:(id)arg1;
- (void)setUnitID:(int)arg1;
- (void)setUnitType:(int)arg1;
- (id)subunitIDs;
- (id)typeInfo;
- (int)unitID;
- (int)unitType;

@end
