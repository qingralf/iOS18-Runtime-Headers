/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

@interface TRIActiveFactorProvidersParser : NSObject {
    _PASLock * _lock;
    <TRIPaths> * _paths;
}

- (void).cxx_destruct;
- (void)_faultOnceWithMessage:(id)arg1;
- (id)_getFactorPackPathForNamespaceName:(id)arg1 withCandidatePath:(id)arg2 parentId:(id)arg3 deploymentId:(int)arg4 promotable:(bool*)arg5;
- (char *)_realpathWithFileSystemRepresentation:(const char *)arg1 buffer:(char *)arg2;
- (id)_resolverPropertyListWithResolvedPath:(id*)arg1;
- (void)dealloc;
- (void)dispose;
- (id)factorProviderForNamespaceName:(id)arg1 parentId:(id)arg2 deploymentId:(int)arg3 treatmentId:(id)arg4 fromFactorPackSetWithDir:(id)arg5 resolvedPath:(id*)arg6;
- (id)globalFactorProviderForNamespaceName:(id)arg1 parentId:(id)arg2 deploymentId:(int)arg3 treatmentId:(id)arg4 fromFactorPackId:(id)arg5 resolvedPath:(id*)arg6;
- (id)init;
- (id)initWithPaths:(id)arg1;
- (id)resolvePropertyListFactorProviderChainForNamespaceName:(id)arg1;
- (id)resolvePropertyListGlobalFactorProviderChainForNamespaceName:(id)arg1;
- (id)resolveTargetedFactorPackSetForExperimentDeployment:(id)arg1;
- (id)resolveTargetedFactorPackSetForRolloutDeployment:(id)arg1;

@end