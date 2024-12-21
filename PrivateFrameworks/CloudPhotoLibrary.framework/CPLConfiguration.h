/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLConfiguration : NSObject <CPLConfigurationFetcherDelegate, CPLSyncSessionConfiguration> {
    CPLConfigurationDictionary * _configurationDictionary;
    id /* block */  _configurationDictionaryUniquifier;
    CPLConfigurationFetcher * _configurationFetcher;
    NSURL * _configurationFileURL;
    NSURL * _configurationURL;
    bool  _dedupeConfigurationDictionary;
    bool  _disableConfigurationFetching;
    NSObject<OS_dispatch_queue> * _lock;
    double  _minUpdateInterval;
    double  _updateInterval;
    NSString * _updateIntervalKey;
}

@property (readonly) bool allowsLocalConflictResolution;
@property bool allowsLocalConflictResolutionWhenOverQuota;
@property (nonatomic, readonly) NSURL *clientLibraryBaseURL;
@property (readonly) CPLConfigurationDictionary *configurationDictionary;
@property (nonatomic, copy) id /* block */ configurationDictionaryUniquifier;
@property (nonatomic, readonly) NSURL *configurationURL;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isComputeStateTaskUploadEnabled;
@property (nonatomic, readonly) NSDate *lastUpdateDate;
@property (readonly) long long maximumComputeStatesToUploadPerBatch;
@property (nonatomic, readonly) double minUpdateInterval;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *updateIntervalKey;

- (void).cxx_destruct;
- (void)_load;
- (void)_save;
- (void)_updateConfigurationDictionary:(id)arg1;
- (bool)allowsLocalConflictResolution;
- (bool)allowsLocalConflictResolutionWhenOverQuota;
- (void)check;
- (id)clientLibraryBaseURL;
- (id)configurationDictionary;
- (id /* block */)configurationDictionaryUniquifier;
- (void)configurationFetcher:(id)arg1 didUpdateConfigurationDictionary:(id)arg2 configurationHasChanged:(bool)arg3;
- (id)configurationURL;
- (void)disableConfigurationFetching;
- (id)initWithClientLibraryBaseURL:(id)arg1;
- (id)initWithClientLibraryBaseURL:(id)arg1 configurationURL:(id)arg2 minUpdateInterval:(double)arg3 updateIntervalKey:(id)arg4;
- (id)initWithClientLibraryBaseURL:(id)arg1 minUpdateInterval:(double)arg2 updateIntervalKey:(id)arg3;
- (void)invalidate;
- (bool)isComputeStateTaskUploadEnabled;
- (id)lastUpdateDate;
- (long long)maximumComputeStatesToUploadPerBatch;
- (double)minUpdateInterval;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)refetchFromDisk;
- (void)setAllowsLocalConflictResolutionWhenOverQuota:(bool)arg1;
- (void)setConfigurationDictionaryUniquifier:(id /* block */)arg1;
- (void)setIsComputeStateTaskUploadEnabled:(bool)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)updateConfigurationDictionary:(id)arg1;
- (id)updateIntervalKey;
- (id)valueForKey:(id)arg1;

@end