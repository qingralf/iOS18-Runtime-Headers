/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMAdPlatformsTrainingRows : BMEventBase <BMStoreData> {
    NSString * _adamID;
    NSArray * _appDownloadVector;
    NSArray * _appUsageVector;
    unsigned int  _dataVersion;
    NSString * _deploymentID;
    bool  _dupe;
    double  _errorCode;
    NSString * _experimentID;
    bool  _hasDupe;
    bool  _hasErrorCode;
    bool  _hasImpressed;
    bool  _hasInstalled;
    bool  _hasTapped;
    bool  _impressed;
    bool  _installed;
    NSArray * _installedAppVector;
    NSString * _recordID;
    NSData * _serverResponse;
    bool  _tapped;
    NSString * _treatmentID;
    NSArray * _userQueryVector;
}

@property (nonatomic, readonly) NSString *adamID;
@property (nonatomic, readonly) NSArray *appDownloadVector;
@property (nonatomic, readonly) NSArray *appUsageVector;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *deploymentID;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) bool dupe;
@property (nonatomic, readonly) double errorCode;
@property (nonatomic, readonly) NSString *experimentID;
@property (nonatomic) bool hasDupe;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasImpressed;
@property (nonatomic) bool hasInstalled;
@property (nonatomic) bool hasTapped;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool impressed;
@property (nonatomic, readonly) bool installed;
@property (nonatomic, readonly) NSArray *installedAppVector;
@property (nonatomic, readonly) NSData *recordData;
@property (nonatomic, readonly) NSString *recordID;
@property (nonatomic, readonly) NSData *serverResponse;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool tapped;
@property (nonatomic, readonly) NSString *treatmentID;
@property (nonatomic, readonly) NSArray *userQueryVector;

// Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_appDownloadVectorJSONArray;
- (id)_appUsageVectorJSONArray;
- (id)_installedAppVectorJSONArray;
- (id)_userQueryVectorJSONArray;
- (id)adamID;
- (id)appDownloadVector;
- (id)appUsageVector;
- (unsigned int)dataVersion;
- (id)deploymentID;
- (id)description;
- (bool)dupe;
- (double)errorCode;
- (id)experimentID;
- (bool)hasDupe;
- (bool)hasErrorCode;
- (bool)hasImpressed;
- (bool)hasInstalled;
- (bool)hasTapped;
- (bool)impressed;
- (id)initByReadFrom:(id)arg1;
- (id)initWithDeploymentID:(id)arg1 experimentID:(id)arg2 treatmentID:(id)arg3 adamID:(id)arg4 impressed:(id)arg5 tapped:(id)arg6 dupe:(id)arg7 installed:(id)arg8 errorCode:(id)arg9 appUsageVector:(id)arg10 appDownloadVector:(id)arg11 installedAppVector:(id)arg12 userQueryVector:(id)arg13 serverResponse:(id)arg14 recordID:(id)arg15;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)installed;
- (id)installedAppVector;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)recordID;
- (id)serialize;
- (id)serverResponse;
- (void)setHasDupe:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasImpressed:(bool)arg1;
- (void)setHasInstalled:(bool)arg1;
- (void)setHasTapped:(bool)arg1;
- (bool)tapped;
- (id)treatmentID;
- (id)userQueryVector;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PromotedContentPrediction.framework/PromotedContentPrediction

+ (id)keyForType:(id)arg1;

- (id)dictionaryRepresentation;
- (id)onDeviceFeatures;
- (id)recordData;

@end