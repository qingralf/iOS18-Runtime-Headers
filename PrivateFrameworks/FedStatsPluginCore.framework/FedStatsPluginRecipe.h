/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FedStatsPluginCore.framework/FedStatsPluginCore
 */

@interface FedStatsPluginRecipe : NSObject {
    <FedStatsPluginAssetProviderProtocol> * _assetProvider;
    NSString * _clientIdentifier;
    NSArray * _cohortNameList;
    NSDictionary * _dataTypeContent;
    NSString * _recipeIdentifier;
    NSDictionary * _recordMetadata;
    NSString * _sqlQuery;
}

@property (nonatomic, readonly) <FedStatsPluginAssetProviderProtocol> *assetProvider;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSArray *cohortNameList;
@property (nonatomic, retain) NSDictionary *dataTypeContent;
@property (nonatomic, readonly) NSString *recipeIdentifier;
@property (nonatomic, retain) NSDictionary *recordMetadata;
@property (nonatomic, retain) NSString *sqlQuery;

+ (id)recipeWithAssetProvider:(id)arg1 error:(id*)arg2;
+ (id)recipeWithAssetProvider:(id)arg1 recipeIdentifier:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)assetKeysFromCollatedData:(id)arg1;
- (id)assetProvider;
- (id)assetURLsForAssetKeys:(id)arg1;
- (bool)checkConsentWithError:(id*)arg1;
- (bool)checkDeviceRegionCodeWithError:(id*)arg1;
- (id)clientIdentifier;
- (id)cohortNameList;
- (id)collateQueryResults:(id)arg1;
- (id)dataTypeContent;
- (id)evaluateQueryWithError:(id*)arg1;
- (id)initWithAssetProvider:(id)arg1 recipeIdentifier:(id)arg2 clientIdentifier:(id)arg3 recordMetadata:(id)arg4 dataTypeContent:(id)arg5 sqlQuery:(id)arg6 cohortNameList:(id)arg7;
- (id)recipeIdentifier;
- (id)recordCollatedData:(id)arg1 assetURLs:(id)arg2;
- (id)recordMetadata;
- (id)runRecipeWithError:(id*)arg1;
- (void)setDataTypeContent:(id)arg1;
- (void)setRecordMetadata:(id)arg1;
- (void)setSqlQuery:(id)arg1;
- (id)sqlQuery;

@end