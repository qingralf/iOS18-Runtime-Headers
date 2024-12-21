/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPrivateDataEncryptionMigrationHealthCheck : NSObject <FCCKDatabaseEncryptionDelegate> {
    CKContainer * _container;
    CKContainer * _containerWithZoneWidePCS;
    FCCKPrivateDatabaseSchema * _schema;
    CKContainer * _secureContainer;
    long long  _toVersion;
}

@property (nonatomic, retain) CKContainer *container;
@property (nonatomic, retain) CKContainer *containerWithZoneWidePCS;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCCKPrivateDatabaseSchema *schema;
@property (nonatomic, retain) CKContainer *secureContainer;
@property (readonly) Class superclass;
@property (nonatomic) long long toVersion;

+ (id)run;

- (void).cxx_destruct;
- (void)_eraseAllPrivateData;
- (id)_prepareHistoryAndReturnExpectations;
- (id)_prepareIssueHistoryAndReturnExpectations;
- (id)_preparePersonalizationProfileAndReturnExpectations;
- (id)_prepareReadingListAndReturnExpectations;
- (id)_prepareReferenceToChannelMembershipsAndReturnExpectations;
- (id)_prepareSensitiveSubscriptionsAndReturnExpectations;
- (id)_prepareSentinelsAndReturnExpectations;
- (id)_prepareSubscriptionsAndReturnExpectations;
- (id)_prepareTagSettingsAndReturnExpectations;
- (id)_prepareUserInfoAndReturnExpectations;
- (id)container;
- (id)containerWithZoneWidePCS;
- (void)fetchCleanupToVersionForDatabase:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchDesiredVersionForDatabase:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)run;
- (id)schema;
- (id)secureContainer;
- (void)setContainer:(id)arg1;
- (void)setContainerWithZoneWidePCS:(id)arg1;
- (void)setSchema:(id)arg1;
- (void)setSecureContainer:(id)arg1;
- (void)setToVersion:(long long)arg1;
- (long long)toVersion;

@end