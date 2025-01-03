/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/DesktopServicesPriv
 */

@interface FIProviderDomain : NSObject {
    NSError * _asyncError;
    FPProviderDomain * _asyncFetchedDomain;
    bool  _asyncResultAvailable;
    unsigned long long  _cachePolicy;
    struct optional<bool> { 
        union { 
            BOOL __null_state_; 
            bool __val_; 
        } ; 
        bool __engaged_; 
    }  _cachedSyncsTrash;
    FPProviderDomain * _domain;
    NSString * _domainID;
    struct TDSMutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } fMutex; 
    }  _lock;
    NSURL * _rootURL;
}

@property (retain) NSError *asyncError;
@property (retain) FPProviderDomain *asyncFetchedDomain;
@property bool asyncResultAvailable;
@property (nonatomic, readonly) unsigned long long cachePolicy;
@property (nonatomic, readonly) unsigned long long disconnectionState;
@property (nonatomic, readonly) FPProviderDomain *domain;
@property (nonatomic, readonly) NSString *domainID;
@property (nonatomic, readonly) bool expectFPItems;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isDataSeparatedDomain;
@property (nonatomic, readonly) bool isExternalDeviceDomain;
@property (nonatomic, readonly) bool isFPv2;
@property (nonatomic, readonly) bool isLocalStorageDomain;
@property (nonatomic, readonly) bool isMainiCloudDriveDomain;
@property (nonatomic, readonly) bool isiCloudDriveProvider;
@property (nonatomic, readonly) unsigned long long replicatedKnownFolders;
@property (nonatomic, readonly) NSURL *rootURL;
@property (nonatomic, readonly) bool supportsEnumeration;
@property (nonatomic, readonly) bool supportsSyncingTrash;
@property (getter=isUsingFPFS, nonatomic, readonly) bool useFPFS;

+ (id)providerDomainForDomain:(id)arg1;
+ (id)providerDomainForID:(id)arg1 cachePolicy:(unsigned long long)arg2 error:(id*)arg3;
+ (id)providerDomainForItem:(id)arg1 cachePolicy:(unsigned long long)arg2 error:(id*)arg3;
+ (id)providerDomainForRootURL:(id)arg1 cachePolicy:(unsigned long long)arg2 error:(id*)arg3;
+ (id)providerDomainForURL:(id)arg1 cachePolicy:(unsigned long long)arg2 error:(id*)arg3;
+ (id)rootURLForProviderDomainID:(id)arg1 cachePolicy:(unsigned long long)arg2 error:(id*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)asyncError;
- (id)asyncFetchedDomain;
- (bool)asyncResultAvailable;
- (unsigned long long)cachePolicy;
- (id)description;
- (unsigned long long)disconnectionState;
- (id)domain;
- (id)domainID;
- (bool)expectFPItems;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDomain:(id)arg1;
- (id)initWithDomainID:(id)arg1 cachePolicy:(unsigned long long)arg2 rootURL:(id)arg3 domain:(id)arg4;
- (bool)isDataSeparatedDomain;
- (bool)isEqual:(id)arg1;
- (bool)isExternalDeviceDomain;
- (bool)isFPv2;
- (bool)isLocalStorageDomain;
- (bool)isMainiCloudDriveDomain;
- (bool)isUsingFPFS;
- (bool)isiCloudDriveProvider;
- (unsigned long long)replicatedKnownFolders;
- (id)rootURL;
- (void)setAsyncError:(id)arg1;
- (void)setAsyncFetchedDomain:(id)arg1;
- (void)setAsyncResultAvailable:(bool)arg1;
- (bool)supportsEnumeration;
- (bool)supportsSyncingTrash;
- (bool)updateRootURLIfDetached;
- (id)urlForKnownFolder:(unsigned long long)arg1;

@end
