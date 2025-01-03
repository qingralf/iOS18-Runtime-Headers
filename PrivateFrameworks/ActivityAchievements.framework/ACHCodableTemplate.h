/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

@interface ACHCodableTemplate : PBCodable <NSCopying> {
    NSString * _alertDates;
    NSString * _alertabilityPredicate;
    NSString * _availabilityEndDate;
    NSString * _availabilityPredicate;
    NSString * _availabilityStartDate;
    NSString * _availableCountryCodes;
    bool  _availableOnPairedDevice;
    NSString * _availableSuffixes;
    NSString * _canonicalUnit;
    double  _createdDate;
    long long  _creatorDevice;
    double  _dailyTarget;
    NSString * _dailyTargetCanonicalUnit;
    long long  _displayOrder;
    bool  _displaysEarnedInstanceCount;
    long long  _duplicateRemovalCalendarUnit;
    long long  _duplicateRemovalStrategy;
    long long  _earnDateStrategy;
    long long  _earnLimit;
    NSString * _goalExpression;
    NSString * _graceGoalExpression;
    NSString * _gracePredicate;
    NSString * _graceProgressExpression;
    NSString * _graceValueExpression;
    NSString * _graceVisibilityPredicate;
    struct { 
        unsigned int createdDate : 1; 
        unsigned int creatorDevice : 1; 
        unsigned int dailyTarget : 1; 
        unsigned int displayOrder : 1; 
        unsigned int duplicateRemovalCalendarUnit : 1; 
        unsigned int duplicateRemovalStrategy : 1; 
        unsigned int earnDateStrategy : 1; 
        unsigned int earnLimit : 1; 
        unsigned int key : 1; 
        unsigned int minimumEngineVersion : 1; 
        unsigned int mobileAssetVersion : 1; 
        unsigned int triggers : 1; 
        unsigned int version : 1; 
        unsigned int availableOnPairedDevice : 1; 
        unsigned int displaysEarnedInstanceCount : 1; 
    }  _has;
    long long  _key;
    long long  _minimumEngineVersion;
    long long  _mobileAssetVersion;
    NSString * _predicate;
    NSString * _prerequisiteTemplateName;
    NSString * _progressExpression;
    NSString * _sourceName;
    ACHCodableSyncIdentity * _syncIdentity;
    long long  _triggers;
    NSString * _uniqueName;
    NSString * _valueExpression;
    long long  _version;
    NSString * _visibilityEndDate;
    NSString * _visibilityPredicate;
    NSString * _visibilityStartDate;
}

@property (nonatomic, retain) NSString *alertDates;
@property (nonatomic, retain) NSString *alertabilityPredicate;
@property (nonatomic, retain) NSString *availabilityEndDate;
@property (nonatomic, retain) NSString *availabilityPredicate;
@property (nonatomic, retain) NSString *availabilityStartDate;
@property (nonatomic, retain) NSString *availableCountryCodes;
@property (nonatomic) bool availableOnPairedDevice;
@property (nonatomic, retain) NSString *availableSuffixes;
@property (nonatomic, retain) NSString *canonicalUnit;
@property (nonatomic) double createdDate;
@property (nonatomic) long long creatorDevice;
@property (nonatomic) double dailyTarget;
@property (nonatomic, retain) NSString *dailyTargetCanonicalUnit;
@property (nonatomic) long long displayOrder;
@property (nonatomic) bool displaysEarnedInstanceCount;
@property (nonatomic) long long duplicateRemovalCalendarUnit;
@property (nonatomic) long long duplicateRemovalStrategy;
@property (nonatomic) long long earnDateStrategy;
@property (nonatomic) long long earnLimit;
@property (nonatomic, retain) NSString *goalExpression;
@property (nonatomic, retain) NSString *graceGoalExpression;
@property (nonatomic, retain) NSString *gracePredicate;
@property (nonatomic, retain) NSString *graceProgressExpression;
@property (nonatomic, retain) NSString *graceValueExpression;
@property (nonatomic, retain) NSString *graceVisibilityPredicate;
@property (nonatomic, readonly) bool hasAlertDates;
@property (nonatomic, readonly) bool hasAlertabilityPredicate;
@property (nonatomic, readonly) bool hasAvailabilityEndDate;
@property (nonatomic, readonly) bool hasAvailabilityPredicate;
@property (nonatomic, readonly) bool hasAvailabilityStartDate;
@property (nonatomic, readonly) bool hasAvailableCountryCodes;
@property (nonatomic) bool hasAvailableOnPairedDevice;
@property (nonatomic, readonly) bool hasAvailableSuffixes;
@property (nonatomic, readonly) bool hasCanonicalUnit;
@property (nonatomic) bool hasCreatedDate;
@property (nonatomic) bool hasCreatorDevice;
@property (nonatomic) bool hasDailyTarget;
@property (nonatomic, readonly) bool hasDailyTargetCanonicalUnit;
@property (nonatomic) bool hasDisplayOrder;
@property (nonatomic) bool hasDisplaysEarnedInstanceCount;
@property (nonatomic) bool hasDuplicateRemovalCalendarUnit;
@property (nonatomic) bool hasDuplicateRemovalStrategy;
@property (nonatomic) bool hasEarnDateStrategy;
@property (nonatomic) bool hasEarnLimit;
@property (nonatomic, readonly) bool hasGoalExpression;
@property (nonatomic, readonly) bool hasGraceGoalExpression;
@property (nonatomic, readonly) bool hasGracePredicate;
@property (nonatomic, readonly) bool hasGraceProgressExpression;
@property (nonatomic, readonly) bool hasGraceValueExpression;
@property (nonatomic, readonly) bool hasGraceVisibilityPredicate;
@property (nonatomic) bool hasKey;
@property (nonatomic) bool hasMinimumEngineVersion;
@property (nonatomic) bool hasMobileAssetVersion;
@property (nonatomic, readonly) bool hasPredicate;
@property (nonatomic, readonly) bool hasPrerequisiteTemplateName;
@property (nonatomic, readonly) bool hasProgressExpression;
@property (nonatomic, readonly) bool hasSourceName;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic) bool hasTriggers;
@property (nonatomic, readonly) bool hasUniqueName;
@property (nonatomic, readonly) bool hasValueExpression;
@property (nonatomic) bool hasVersion;
@property (nonatomic, readonly) bool hasVisibilityEndDate;
@property (nonatomic, readonly) bool hasVisibilityPredicate;
@property (nonatomic, readonly) bool hasVisibilityStartDate;
@property (nonatomic) long long key;
@property (nonatomic) long long minimumEngineVersion;
@property (nonatomic) long long mobileAssetVersion;
@property (nonatomic, retain) NSString *predicate;
@property (nonatomic, retain) NSString *prerequisiteTemplateName;
@property (nonatomic, retain) NSString *progressExpression;
@property (nonatomic, retain) NSString *sourceName;
@property (nonatomic, retain) ACHCodableSyncIdentity *syncIdentity;
@property (nonatomic) long long triggers;
@property (nonatomic, retain) NSString *uniqueName;
@property (nonatomic, retain) NSString *valueExpression;
@property (nonatomic) long long version;
@property (nonatomic, retain) NSString *visibilityEndDate;
@property (nonatomic, retain) NSString *visibilityPredicate;
@property (nonatomic, retain) NSString *visibilityStartDate;

- (void).cxx_destruct;
- (id)alertDates;
- (id)alertabilityPredicate;
- (id)availabilityEndDate;
- (id)availabilityPredicate;
- (id)availabilityStartDate;
- (id)availableCountryCodes;
- (bool)availableOnPairedDevice;
- (id)availableSuffixes;
- (id)canonicalUnit;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)createdDate;
- (long long)creatorDevice;
- (double)dailyTarget;
- (id)dailyTargetCanonicalUnit;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)displayOrder;
- (bool)displaysEarnedInstanceCount;
- (long long)duplicateRemovalCalendarUnit;
- (long long)duplicateRemovalStrategy;
- (long long)earnDateStrategy;
- (long long)earnLimit;
- (id)goalExpression;
- (id)graceGoalExpression;
- (id)gracePredicate;
- (id)graceProgressExpression;
- (id)graceValueExpression;
- (id)graceVisibilityPredicate;
- (bool)hasAlertDates;
- (bool)hasAlertabilityPredicate;
- (bool)hasAvailabilityEndDate;
- (bool)hasAvailabilityPredicate;
- (bool)hasAvailabilityStartDate;
- (bool)hasAvailableCountryCodes;
- (bool)hasAvailableOnPairedDevice;
- (bool)hasAvailableSuffixes;
- (bool)hasCanonicalUnit;
- (bool)hasCreatedDate;
- (bool)hasCreatorDevice;
- (bool)hasDailyTarget;
- (bool)hasDailyTargetCanonicalUnit;
- (bool)hasDisplayOrder;
- (bool)hasDisplaysEarnedInstanceCount;
- (bool)hasDuplicateRemovalCalendarUnit;
- (bool)hasDuplicateRemovalStrategy;
- (bool)hasEarnDateStrategy;
- (bool)hasEarnLimit;
- (bool)hasGoalExpression;
- (bool)hasGraceGoalExpression;
- (bool)hasGracePredicate;
- (bool)hasGraceProgressExpression;
- (bool)hasGraceValueExpression;
- (bool)hasGraceVisibilityPredicate;
- (bool)hasKey;
- (bool)hasMinimumEngineVersion;
- (bool)hasMobileAssetVersion;
- (bool)hasPredicate;
- (bool)hasPrerequisiteTemplateName;
- (bool)hasProgressExpression;
- (bool)hasSourceName;
- (bool)hasSyncIdentity;
- (bool)hasTriggers;
- (bool)hasUniqueName;
- (bool)hasValueExpression;
- (bool)hasVersion;
- (bool)hasVisibilityEndDate;
- (bool)hasVisibilityPredicate;
- (bool)hasVisibilityStartDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)key;
- (void)mergeFrom:(id)arg1;
- (long long)minimumEngineVersion;
- (long long)mobileAssetVersion;
- (id)predicate;
- (id)prerequisiteTemplateName;
- (id)progressExpression;
- (bool)readFrom:(id)arg1;
- (void)setAlertDates:(id)arg1;
- (void)setAlertabilityPredicate:(id)arg1;
- (void)setAvailabilityEndDate:(id)arg1;
- (void)setAvailabilityPredicate:(id)arg1;
- (void)setAvailabilityStartDate:(id)arg1;
- (void)setAvailableCountryCodes:(id)arg1;
- (void)setAvailableOnPairedDevice:(bool)arg1;
- (void)setAvailableSuffixes:(id)arg1;
- (void)setCanonicalUnit:(id)arg1;
- (void)setCreatedDate:(double)arg1;
- (void)setCreatorDevice:(long long)arg1;
- (void)setDailyTarget:(double)arg1;
- (void)setDailyTargetCanonicalUnit:(id)arg1;
- (void)setDisplayOrder:(long long)arg1;
- (void)setDisplaysEarnedInstanceCount:(bool)arg1;
- (void)setDuplicateRemovalCalendarUnit:(long long)arg1;
- (void)setDuplicateRemovalStrategy:(long long)arg1;
- (void)setEarnDateStrategy:(long long)arg1;
- (void)setEarnLimit:(long long)arg1;
- (void)setGoalExpression:(id)arg1;
- (void)setGraceGoalExpression:(id)arg1;
- (void)setGracePredicate:(id)arg1;
- (void)setGraceProgressExpression:(id)arg1;
- (void)setGraceValueExpression:(id)arg1;
- (void)setGraceVisibilityPredicate:(id)arg1;
- (void)setHasAvailableOnPairedDevice:(bool)arg1;
- (void)setHasCreatedDate:(bool)arg1;
- (void)setHasCreatorDevice:(bool)arg1;
- (void)setHasDailyTarget:(bool)arg1;
- (void)setHasDisplayOrder:(bool)arg1;
- (void)setHasDisplaysEarnedInstanceCount:(bool)arg1;
- (void)setHasDuplicateRemovalCalendarUnit:(bool)arg1;
- (void)setHasDuplicateRemovalStrategy:(bool)arg1;
- (void)setHasEarnDateStrategy:(bool)arg1;
- (void)setHasEarnLimit:(bool)arg1;
- (void)setHasKey:(bool)arg1;
- (void)setHasMinimumEngineVersion:(bool)arg1;
- (void)setHasMobileAssetVersion:(bool)arg1;
- (void)setHasTriggers:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setKey:(long long)arg1;
- (void)setMinimumEngineVersion:(long long)arg1;
- (void)setMobileAssetVersion:(long long)arg1;
- (void)setPredicate:(id)arg1;
- (void)setPrerequisiteTemplateName:(id)arg1;
- (void)setProgressExpression:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSyncIdentity:(id)arg1;
- (void)setTriggers:(long long)arg1;
- (void)setUniqueName:(id)arg1;
- (void)setValueExpression:(id)arg1;
- (void)setVersion:(long long)arg1;
- (void)setVisibilityEndDate:(id)arg1;
- (void)setVisibilityPredicate:(id)arg1;
- (void)setVisibilityStartDate:(id)arg1;
- (id)sourceName;
- (id)syncIdentity;
- (long long)triggers;
- (id)uniqueName;
- (id)valueExpression;
- (long long)version;
- (id)visibilityEndDate;
- (id)visibilityPredicate;
- (id)visibilityStartDate;
- (void)writeTo:(id)arg1;

@end
