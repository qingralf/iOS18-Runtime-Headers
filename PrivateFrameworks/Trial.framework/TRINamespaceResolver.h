/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

@interface TRINamespaceResolver : NSObject <TRINamespaceResolving> {
    TRIActiveFactorProvidersParser * _activeFactorProvidersParser;
    TRIBMLTDeployment * _bmltDeploymentForFactorsState;
    TRIExperimentDeployment * _experimentDeploymentForFactorsState;
    _PASLock * _lock;
    NSSet * _namespacesInFactorsState;
    <TRIPaths> * _paths;
    TRIRolloutDeployment * _rolloutDeploymentForFactorsState;
}

@property (nonatomic, readonly) TRIActiveFactorProvidersParser *activeFactorProvidersParser;
@property (nonatomic, readonly) TRIBMLTDeployment *bmltDeploymentForFactorsState;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TRIExperimentDeployment *experimentDeploymentForFactorsState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *namespacesInFactorsState;
@property (nonatomic, readonly) TRIRolloutDeployment *rolloutDeploymentForFactorsState;
@property (readonly) Class superclass;

+ (id)_namespacePathComponentsFromEntitlements;
+ (id)preferredPathForFactorDataWithCandidatePaths:(id)arg1;
+ (id)promotionDirForNamespaceName:(id)arg1 withPaths:(id)arg2;

- (void).cxx_destruct;
- (id)_factorProviderForNamespaceName:(id)arg1 fromNamespaceDescriptorSetWithDir:(id)arg2 resolvedPath:(id*)arg3;
- (void)_faultOnceWithMessage:(id)arg1;
- (bool)_hasBMLTFactorsState;
- (bool)_hasExperimentFactorsState;
- (bool)_hasRolloutFactorsState;
- (bool)_prepareFactorsState:(id)arg1;
- (bool)_prepareFactorsStateForExperimentsOnFactorPackSetPathForDeployment:(id)arg1;
- (bool)_prepareFactorsStateForExperimentsOnTreatmentPathForDeployment:(id)arg1;
- (char *)_realpathWithFileSystemRepresentation:(const char *)arg1 buffer:(char *)arg2;
- (id)_resolveTargetedFactorPackSetForBMLTDeployment:(id)arg1;
- (id)_resolveTargetedNamespaceDescriptorSetForExperimentDeployment:(id)arg1;
- (id)activeFactorProvidersParser;
- (id)bmltDeploymentForFactorsState;
- (void)dealloc;
- (void)dispose;
- (id)experimentDeploymentForFactorsState;
- (id)init;
- (id)initWithPaths:(id)arg1;
- (id)initWithPaths:(id)arg1 activeFactorProvidersParser:(id)arg2;
- (id)initWithPaths:(id)arg1 factorsState:(id)arg2;
- (id)initWithPaths:(id)arg1 factorsState:(id)arg2 activeFactorProvidersParser:(id)arg3;
- (id)namespacesInFactorsState;
- (id)resolveFactorProviderChainForNamespaceName:(id)arg1 faultOnMissingInstalledFactors:(bool)arg2 installedFactorsAccessible:(bool*)arg3;
- (id)rolloutDeploymentForFactorsState;

@end
