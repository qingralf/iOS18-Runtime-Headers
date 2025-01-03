/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableMedicalIDData : PBCodable <NSCopying> {
    double  _allergiesListModifiedDate;
    long long  _allergiesListVersion;
    double  _allergiesListVersionModifiedDate;
    NSMutableArray * _allergiesLists;
    NSString * _allergyInfo;
    double  _allergyInfoModifiedDate;
    int  _bloodType;
    double  _bloodTypeModifiedDate;
    NSMutableArray * _clinicalContacts;
    double  _clinicalContactsModifiedDate;
    double  _conditionsListModifiedDate;
    long long  _conditionsListVersion;
    double  _conditionsListVersionModifiedDate;
    NSMutableArray * _conditionsLists;
    double  _dateSaved;
    NSMutableArray * _emergencyContacts;
    double  _emergencyContactsModifiedDate;
    HDCodableDateComponents * _gregorianBirthday;
    double  _gregorianBirthdayModifiedDate;
    struct { 
        unsigned int allergiesListModifiedDate : 1; 
        unsigned int allergiesListVersion : 1; 
        unsigned int allergiesListVersionModifiedDate : 1; 
        unsigned int allergyInfoModifiedDate : 1; 
        unsigned int bloodTypeModifiedDate : 1; 
        unsigned int clinicalContactsModifiedDate : 1; 
        unsigned int conditionsListModifiedDate : 1; 
        unsigned int conditionsListVersion : 1; 
        unsigned int conditionsListVersionModifiedDate : 1; 
        unsigned int dateSaved : 1; 
        unsigned int emergencyContactsModifiedDate : 1; 
        unsigned int gregorianBirthdayModifiedDate : 1; 
        unsigned int heightModifiedDate : 1; 
        unsigned int isDisabledModifiedDate : 1; 
        unsigned int isOrganDonor : 1; 
        unsigned int isOrganDonorModifiedDate : 1; 
        unsigned int medicalConditionsModifiedDate : 1; 
        unsigned int medicalNotesModifiedDate : 1; 
        unsigned int medicationInfoModifiedDate : 1; 
        unsigned int medicationsListModifiedDate : 1; 
        unsigned int medicationsListVersion : 1; 
        unsigned int medicationsListVersionModifiedDate : 1; 
        unsigned int nameModifiedDate : 1; 
        unsigned int pictureDataModifiedDate : 1; 
        unsigned int pregnancyEstimatedDueDate : 1; 
        unsigned int pregnancyEstimatedDueDateModifiedDate : 1; 
        unsigned int pregnancyStartDate : 1; 
        unsigned int pregnancyStartDateModifiedDate : 1; 
        unsigned int primaryLanguageCodeModifiedDate : 1; 
        unsigned int shareDuringEmergencyModifiedDate : 1; 
        unsigned int weightModifiedDate : 1; 
        unsigned int bloodType : 1; 
        unsigned int schemaVersion : 1; 
        unsigned int isDisabled : 1; 
        unsigned int shareDuringEmergency : 1; 
    }  _has;
    HDCodableQuantity * _height;
    double  _heightModifiedDate;
    bool  _isDisabled;
    double  _isDisabledModifiedDate;
    long long  _isOrganDonor;
    double  _isOrganDonorModifiedDate;
    NSString * _medicalConditions;
    double  _medicalConditionsModifiedDate;
    NSData * _medicalIDBytes;
    NSString * _medicalNotes;
    double  _medicalNotesModifiedDate;
    NSString * _medicationInfo;
    double  _medicationInfoModifiedDate;
    double  _medicationsListModifiedDate;
    long long  _medicationsListVersion;
    double  _medicationsListVersionModifiedDate;
    NSMutableArray * _medicationsLists;
    NSString * _name;
    double  _nameModifiedDate;
    NSData * _pictureData;
    double  _pictureDataModifiedDate;
    double  _pregnancyEstimatedDueDate;
    double  _pregnancyEstimatedDueDateModifiedDate;
    double  _pregnancyStartDate;
    double  _pregnancyStartDateModifiedDate;
    NSString * _primaryLanguageCode;
    double  _primaryLanguageCodeModifiedDate;
    unsigned int  _schemaVersion;
    bool  _shareDuringEmergency;
    double  _shareDuringEmergencyModifiedDate;
    HDCodableQuantity * _weight;
    double  _weightModifiedDate;
}

@property (nonatomic) double allergiesListModifiedDate;
@property (nonatomic) long long allergiesListVersion;
@property (nonatomic) double allergiesListVersionModifiedDate;
@property (nonatomic, retain) NSMutableArray *allergiesLists;
@property (nonatomic, retain) NSString *allergyInfo;
@property (nonatomic) double allergyInfoModifiedDate;
@property (nonatomic) int bloodType;
@property (nonatomic) double bloodTypeModifiedDate;
@property (nonatomic, retain) NSMutableArray *clinicalContacts;
@property (nonatomic) double clinicalContactsModifiedDate;
@property (nonatomic) double conditionsListModifiedDate;
@property (nonatomic) long long conditionsListVersion;
@property (nonatomic) double conditionsListVersionModifiedDate;
@property (nonatomic, retain) NSMutableArray *conditionsLists;
@property (nonatomic) double dateSaved;
@property (nonatomic, retain) NSMutableArray *emergencyContacts;
@property (nonatomic) double emergencyContactsModifiedDate;
@property (nonatomic, retain) HDCodableDateComponents *gregorianBirthday;
@property (nonatomic) double gregorianBirthdayModifiedDate;
@property (nonatomic) bool hasAllergiesListModifiedDate;
@property (nonatomic) bool hasAllergiesListVersion;
@property (nonatomic) bool hasAllergiesListVersionModifiedDate;
@property (nonatomic, readonly) bool hasAllergyInfo;
@property (nonatomic) bool hasAllergyInfoModifiedDate;
@property (nonatomic) bool hasBloodType;
@property (nonatomic) bool hasBloodTypeModifiedDate;
@property (nonatomic) bool hasClinicalContactsModifiedDate;
@property (nonatomic) bool hasConditionsListModifiedDate;
@property (nonatomic) bool hasConditionsListVersion;
@property (nonatomic) bool hasConditionsListVersionModifiedDate;
@property (nonatomic) bool hasDateSaved;
@property (nonatomic) bool hasEmergencyContactsModifiedDate;
@property (nonatomic, readonly) bool hasGregorianBirthday;
@property (nonatomic) bool hasGregorianBirthdayModifiedDate;
@property (nonatomic, readonly) bool hasHeight;
@property (nonatomic) bool hasHeightModifiedDate;
@property (nonatomic) bool hasIsDisabled;
@property (nonatomic) bool hasIsDisabledModifiedDate;
@property (nonatomic) bool hasIsOrganDonor;
@property (nonatomic) bool hasIsOrganDonorModifiedDate;
@property (nonatomic, readonly) bool hasMedicalConditions;
@property (nonatomic) bool hasMedicalConditionsModifiedDate;
@property (nonatomic, readonly) bool hasMedicalIDBytes;
@property (nonatomic, readonly) bool hasMedicalNotes;
@property (nonatomic) bool hasMedicalNotesModifiedDate;
@property (nonatomic, readonly) bool hasMedicationInfo;
@property (nonatomic) bool hasMedicationInfoModifiedDate;
@property (nonatomic) bool hasMedicationsListModifiedDate;
@property (nonatomic) bool hasMedicationsListVersion;
@property (nonatomic) bool hasMedicationsListVersionModifiedDate;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasNameModifiedDate;
@property (nonatomic, readonly) bool hasPictureData;
@property (nonatomic) bool hasPictureDataModifiedDate;
@property (nonatomic) bool hasPregnancyEstimatedDueDate;
@property (nonatomic) bool hasPregnancyEstimatedDueDateModifiedDate;
@property (nonatomic) bool hasPregnancyStartDate;
@property (nonatomic) bool hasPregnancyStartDateModifiedDate;
@property (nonatomic, readonly) bool hasPrimaryLanguageCode;
@property (nonatomic) bool hasPrimaryLanguageCodeModifiedDate;
@property (nonatomic) bool hasSchemaVersion;
@property (nonatomic) bool hasShareDuringEmergency;
@property (nonatomic) bool hasShareDuringEmergencyModifiedDate;
@property (nonatomic, readonly) bool hasWeight;
@property (nonatomic) bool hasWeightModifiedDate;
@property (nonatomic, retain) HDCodableQuantity *height;
@property (nonatomic) double heightModifiedDate;
@property (nonatomic) bool isDisabled;
@property (nonatomic) double isDisabledModifiedDate;
@property (nonatomic) long long isOrganDonor;
@property (nonatomic) double isOrganDonorModifiedDate;
@property (nonatomic, retain) NSString *medicalConditions;
@property (nonatomic) double medicalConditionsModifiedDate;
@property (nonatomic, retain) NSData *medicalIDBytes;
@property (nonatomic, retain) NSString *medicalNotes;
@property (nonatomic) double medicalNotesModifiedDate;
@property (nonatomic, retain) NSString *medicationInfo;
@property (nonatomic) double medicationInfoModifiedDate;
@property (nonatomic) double medicationsListModifiedDate;
@property (nonatomic) long long medicationsListVersion;
@property (nonatomic) double medicationsListVersionModifiedDate;
@property (nonatomic, retain) NSMutableArray *medicationsLists;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) double nameModifiedDate;
@property (nonatomic, retain) NSData *pictureData;
@property (nonatomic) double pictureDataModifiedDate;
@property (nonatomic) double pregnancyEstimatedDueDate;
@property (nonatomic) double pregnancyEstimatedDueDateModifiedDate;
@property (nonatomic) double pregnancyStartDate;
@property (nonatomic) double pregnancyStartDateModifiedDate;
@property (nonatomic, retain) NSString *primaryLanguageCode;
@property (nonatomic) double primaryLanguageCodeModifiedDate;
@property (nonatomic) unsigned int schemaVersion;
@property (nonatomic) bool shareDuringEmergency;
@property (nonatomic) double shareDuringEmergencyModifiedDate;
@property (nonatomic, retain) HDCodableQuantity *weight;
@property (nonatomic) double weightModifiedDate;

+ (Class)allergiesListType;
+ (Class)clinicalContactsType;
+ (Class)conditionsListType;
+ (Class)emergencyContactsType;
+ (Class)medicationsListType;

- (void).cxx_destruct;
- (int)StringAsBloodType:(id)arg1;
- (void)addAllergiesList:(id)arg1;
- (void)addClinicalContacts:(id)arg1;
- (void)addConditionsList:(id)arg1;
- (void)addEmergencyContacts:(id)arg1;
- (void)addMedicationsList:(id)arg1;
- (id)allergiesListAtIndex:(unsigned long long)arg1;
- (double)allergiesListModifiedDate;
- (long long)allergiesListVersion;
- (double)allergiesListVersionModifiedDate;
- (id)allergiesLists;
- (unsigned long long)allergiesListsCount;
- (id)allergyInfo;
- (double)allergyInfoModifiedDate;
- (int)bloodType;
- (id)bloodTypeAsString:(int)arg1;
- (double)bloodTypeModifiedDate;
- (void)clearAllergiesLists;
- (void)clearClinicalContacts;
- (void)clearConditionsLists;
- (void)clearEmergencyContacts;
- (void)clearMedicationsLists;
- (id)clinicalContacts;
- (id)clinicalContactsAtIndex:(unsigned long long)arg1;
- (unsigned long long)clinicalContactsCount;
- (double)clinicalContactsModifiedDate;
- (id)conditionsListAtIndex:(unsigned long long)arg1;
- (double)conditionsListModifiedDate;
- (long long)conditionsListVersion;
- (double)conditionsListVersionModifiedDate;
- (id)conditionsLists;
- (unsigned long long)conditionsListsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateSaved;
- (id)description;
- (id)dictionaryRepresentation;
- (id)emergencyContacts;
- (id)emergencyContactsAtIndex:(unsigned long long)arg1;
- (unsigned long long)emergencyContactsCount;
- (double)emergencyContactsModifiedDate;
- (id)gregorianBirthday;
- (double)gregorianBirthdayModifiedDate;
- (bool)hasAllergiesListModifiedDate;
- (bool)hasAllergiesListVersion;
- (bool)hasAllergiesListVersionModifiedDate;
- (bool)hasAllergyInfo;
- (bool)hasAllergyInfoModifiedDate;
- (bool)hasBloodType;
- (bool)hasBloodTypeModifiedDate;
- (bool)hasClinicalContactsModifiedDate;
- (bool)hasConditionsListModifiedDate;
- (bool)hasConditionsListVersion;
- (bool)hasConditionsListVersionModifiedDate;
- (bool)hasDateSaved;
- (bool)hasEmergencyContactsModifiedDate;
- (bool)hasGregorianBirthday;
- (bool)hasGregorianBirthdayModifiedDate;
- (bool)hasHeight;
- (bool)hasHeightModifiedDate;
- (bool)hasIsDisabled;
- (bool)hasIsDisabledModifiedDate;
- (bool)hasIsOrganDonor;
- (bool)hasIsOrganDonorModifiedDate;
- (bool)hasMedicalConditions;
- (bool)hasMedicalConditionsModifiedDate;
- (bool)hasMedicalIDBytes;
- (bool)hasMedicalNotes;
- (bool)hasMedicalNotesModifiedDate;
- (bool)hasMedicationInfo;
- (bool)hasMedicationInfoModifiedDate;
- (bool)hasMedicationsListModifiedDate;
- (bool)hasMedicationsListVersion;
- (bool)hasMedicationsListVersionModifiedDate;
- (bool)hasName;
- (bool)hasNameModifiedDate;
- (bool)hasPictureData;
- (bool)hasPictureDataModifiedDate;
- (bool)hasPregnancyEstimatedDueDate;
- (bool)hasPregnancyEstimatedDueDateModifiedDate;
- (bool)hasPregnancyStartDate;
- (bool)hasPregnancyStartDateModifiedDate;
- (bool)hasPrimaryLanguageCode;
- (bool)hasPrimaryLanguageCodeModifiedDate;
- (bool)hasSchemaVersion;
- (bool)hasShareDuringEmergency;
- (bool)hasShareDuringEmergencyModifiedDate;
- (bool)hasWeight;
- (bool)hasWeightModifiedDate;
- (unsigned long long)hash;
- (id)height;
- (double)heightModifiedDate;
- (bool)isDisabled;
- (double)isDisabledModifiedDate;
- (bool)isEqual:(id)arg1;
- (long long)isOrganDonor;
- (double)isOrganDonorModifiedDate;
- (id)medicalConditions;
- (double)medicalConditionsModifiedDate;
- (id)medicalIDBytes;
- (id)medicalNotes;
- (double)medicalNotesModifiedDate;
- (id)medicationInfo;
- (double)medicationInfoModifiedDate;
- (id)medicationsListAtIndex:(unsigned long long)arg1;
- (double)medicationsListModifiedDate;
- (long long)medicationsListVersion;
- (double)medicationsListVersionModifiedDate;
- (id)medicationsLists;
- (unsigned long long)medicationsListsCount;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (double)nameModifiedDate;
- (id)pictureData;
- (double)pictureDataModifiedDate;
- (double)pregnancyEstimatedDueDate;
- (double)pregnancyEstimatedDueDateModifiedDate;
- (double)pregnancyStartDate;
- (double)pregnancyStartDateModifiedDate;
- (id)primaryLanguageCode;
- (double)primaryLanguageCodeModifiedDate;
- (bool)readFrom:(id)arg1;
- (unsigned int)schemaVersion;
- (void)setAllergiesListModifiedDate:(double)arg1;
- (void)setAllergiesListVersion:(long long)arg1;
- (void)setAllergiesListVersionModifiedDate:(double)arg1;
- (void)setAllergiesLists:(id)arg1;
- (void)setAllergyInfo:(id)arg1;
- (void)setAllergyInfoModifiedDate:(double)arg1;
- (void)setBloodType:(int)arg1;
- (void)setBloodTypeModifiedDate:(double)arg1;
- (void)setClinicalContacts:(id)arg1;
- (void)setClinicalContactsModifiedDate:(double)arg1;
- (void)setConditionsListModifiedDate:(double)arg1;
- (void)setConditionsListVersion:(long long)arg1;
- (void)setConditionsListVersionModifiedDate:(double)arg1;
- (void)setConditionsLists:(id)arg1;
- (void)setDateSaved:(double)arg1;
- (void)setEmergencyContacts:(id)arg1;
- (void)setEmergencyContactsModifiedDate:(double)arg1;
- (void)setGregorianBirthday:(id)arg1;
- (void)setGregorianBirthdayModifiedDate:(double)arg1;
- (void)setHasAllergiesListModifiedDate:(bool)arg1;
- (void)setHasAllergiesListVersion:(bool)arg1;
- (void)setHasAllergiesListVersionModifiedDate:(bool)arg1;
- (void)setHasAllergyInfoModifiedDate:(bool)arg1;
- (void)setHasBloodType:(bool)arg1;
- (void)setHasBloodTypeModifiedDate:(bool)arg1;
- (void)setHasClinicalContactsModifiedDate:(bool)arg1;
- (void)setHasConditionsListModifiedDate:(bool)arg1;
- (void)setHasConditionsListVersion:(bool)arg1;
- (void)setHasConditionsListVersionModifiedDate:(bool)arg1;
- (void)setHasDateSaved:(bool)arg1;
- (void)setHasEmergencyContactsModifiedDate:(bool)arg1;
- (void)setHasGregorianBirthdayModifiedDate:(bool)arg1;
- (void)setHasHeightModifiedDate:(bool)arg1;
- (void)setHasIsDisabled:(bool)arg1;
- (void)setHasIsDisabledModifiedDate:(bool)arg1;
- (void)setHasIsOrganDonor:(bool)arg1;
- (void)setHasIsOrganDonorModifiedDate:(bool)arg1;
- (void)setHasMedicalConditionsModifiedDate:(bool)arg1;
- (void)setHasMedicalNotesModifiedDate:(bool)arg1;
- (void)setHasMedicationInfoModifiedDate:(bool)arg1;
- (void)setHasMedicationsListModifiedDate:(bool)arg1;
- (void)setHasMedicationsListVersion:(bool)arg1;
- (void)setHasMedicationsListVersionModifiedDate:(bool)arg1;
- (void)setHasNameModifiedDate:(bool)arg1;
- (void)setHasPictureDataModifiedDate:(bool)arg1;
- (void)setHasPregnancyEstimatedDueDate:(bool)arg1;
- (void)setHasPregnancyEstimatedDueDateModifiedDate:(bool)arg1;
- (void)setHasPregnancyStartDate:(bool)arg1;
- (void)setHasPregnancyStartDateModifiedDate:(bool)arg1;
- (void)setHasPrimaryLanguageCodeModifiedDate:(bool)arg1;
- (void)setHasSchemaVersion:(bool)arg1;
- (void)setHasShareDuringEmergency:(bool)arg1;
- (void)setHasShareDuringEmergencyModifiedDate:(bool)arg1;
- (void)setHasWeightModifiedDate:(bool)arg1;
- (void)setHeight:(id)arg1;
- (void)setHeightModifiedDate:(double)arg1;
- (void)setIsDisabled:(bool)arg1;
- (void)setIsDisabledModifiedDate:(double)arg1;
- (void)setIsOrganDonor:(long long)arg1;
- (void)setIsOrganDonorModifiedDate:(double)arg1;
- (void)setMedicalConditions:(id)arg1;
- (void)setMedicalConditionsModifiedDate:(double)arg1;
- (void)setMedicalIDBytes:(id)arg1;
- (void)setMedicalNotes:(id)arg1;
- (void)setMedicalNotesModifiedDate:(double)arg1;
- (void)setMedicationInfo:(id)arg1;
- (void)setMedicationInfoModifiedDate:(double)arg1;
- (void)setMedicationsListModifiedDate:(double)arg1;
- (void)setMedicationsListVersion:(long long)arg1;
- (void)setMedicationsListVersionModifiedDate:(double)arg1;
- (void)setMedicationsLists:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameModifiedDate:(double)arg1;
- (void)setPictureData:(id)arg1;
- (void)setPictureDataModifiedDate:(double)arg1;
- (void)setPregnancyEstimatedDueDate:(double)arg1;
- (void)setPregnancyEstimatedDueDateModifiedDate:(double)arg1;
- (void)setPregnancyStartDate:(double)arg1;
- (void)setPregnancyStartDateModifiedDate:(double)arg1;
- (void)setPrimaryLanguageCode:(id)arg1;
- (void)setPrimaryLanguageCodeModifiedDate:(double)arg1;
- (void)setSchemaVersion:(unsigned int)arg1;
- (void)setShareDuringEmergency:(bool)arg1;
- (void)setShareDuringEmergencyModifiedDate:(double)arg1;
- (void)setWeight:(id)arg1;
- (void)setWeightModifiedDate:(double)arg1;
- (bool)shareDuringEmergency;
- (double)shareDuringEmergencyModifiedDate;
- (id)weight;
- (double)weightModifiedDate;
- (void)writeTo:(id)arg1;

@end
