/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeFoundation.framework/BiomeFoundation
 */

@interface BMAccessControlPolicy : NSObject {
    NSDictionary * _authorizedResources;
    unsigned long long  _connectionFlags;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BMAccessControlPolicy * _onBehalfOf;
    BMProcess * _process;
    NSString * _useCase;
}

@property (readonly) bool allowsAccessToContextSync;
@property (readonly) bool allowsAccessToFlexibleStorage;
@property (readonly) bool allowsAccessToProxyBiomeAgentEndpoint;
@property (readonly) bool allowsAccessToSync;
@property (readonly) bool allowsConnectionToComputePublisherService;
@property (readonly) bool allowsConnectionToComputeSourceService;
@property (readonly) bool allowsConnectionToSetStoreUpdateService;
@property (readonly) bool allowsConnectionToWriteService;
@property (readonly) bool allowsProxyingBiomeEndpoint;
@property (nonatomic, readonly) NSString *descriptionOfProcessAndUseCase;
@property (nonatomic, readonly) BMProcess *process;
@property (nonatomic, readonly) NSString *useCase;

+ (bool)allowsConfiguringConnection:(id)arg1 forUseCase:(id)arg2 inDomain:(unsigned long long)arg3 error:(id*)arg4;
+ (id)contextSyncMapping;
+ (id)policyForProcess:(id)arg1 connectionFlags:(unsigned long long)arg2 onBehalfOfProcessWithAccessControlPolicy:(id)arg3;
+ (id)policyForProcess:(id)arg1 connectionFlags:(unsigned long long)arg2 useCase:(id)arg3;
+ (bool)process:(id)arg1 canActOnBehalfOfProcess:(id)arg2;
+ (void)setLegacyViewResourceMappingCallback:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_warnAboutInternalEntitlement:(id)arg1 streamIdentifier:(id)arg2;
- (unsigned long long)allowedModeForStream:(id)arg1;
- (bool)allowsAccessToBiomeAgentForUser:(unsigned int)arg1;
- (bool)allowsAccessToClientCompute:(id)arg1;
- (bool)allowsAccessToContextSync;
- (bool)allowsAccessToContextSyncStreams:(id)arg1;
- (bool)allowsAccessToDatabase:(id)arg1 withMode:(unsigned long long)arg2;
- (bool)allowsAccessToFlexibleStorage;
- (bool)allowsAccessToProxyBiomeAgentEndpoint;
- (bool)allowsAccessToResource:(id)arg1 withMode:(unsigned long long)arg2;
- (bool)allowsAccessToSet:(id)arg1 withMode:(unsigned long long)arg2;
- (bool)allowsAccessToSetStoreUpdateServiceForSet:(id)arg1;
- (bool)allowsAccessToSetsWithMode:(unsigned long long)arg1;
- (bool)allowsAccessToStream:(id)arg1 withMode:(unsigned long long)arg2;
- (bool)allowsAccessToSync;
- (bool)allowsAccessToView:(id)arg1 withMode:(unsigned long long)arg2;
- (bool)allowsAccessToWriteServiceForStream:(id)arg1 ofUser:(unsigned int)arg2;
- (bool)allowsComputePublisherAccessToStreams:(id)arg1;
- (bool)allowsComputeSourceAccessToStream:(id)arg1;
- (bool)allowsConnectionToAccessServiceWithDomain:(unsigned long long)arg1;
- (bool)allowsConnectionToComputePublisherService;
- (bool)allowsConnectionToComputeSourceService;
- (bool)allowsConnectionToSetStoreUpdateService;
- (bool)allowsConnectionToWriteService;
- (bool)allowsProxyingBiomeEndpoint;
- (id)authorizedResources;
- (id)descriptionOfProcessAndUseCase;
- (id)explicitlyAuthorizedResourcesOfType:(unsigned long long)arg1 withAccessMode:(unsigned long long)arg2;
- (id)init;
- (id)initWithProcess:(id)arg1 connectionFlags:(unsigned long long)arg2 useCase:(id)arg3;
- (id)process;
- (id)useCase;

@end
