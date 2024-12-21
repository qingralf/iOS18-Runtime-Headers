/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

@interface TRIFPNamespaceFactorProvider : NSObject <TRINamespaceFactorProviding> {
    int  _deploymentId;
    TRIReferenceManagedDirReaderLock * _dirLock;
    <TRIFactorLevelCaching> * _factorLevels;
    NSString<TRIFactorPackId> * _factorPackId;
    TRIFBFastFactorLevels * _fastFactorLevels;
    NSString * _fbFactorPath;
    bool  _isFlatbufferReadEnabled;
    bool  _isFlatbufferWriteEnabled;
    NSSet * _namespaceCompatibilityVersions;
    NSString * _namespaceName;
    NSString * _parentId;
    NSString * _pbFactorPath;
    bool  _promotable;
    NSString * _referencePath;
    NSString * _treatmentId;
    NSMutableDictionary * _warmupPersistentFactorLevelCache;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString<TRIFactorPackId> *factorPackId;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool promotable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_factorLevelsWithFactorPackData:(id)arg1 referencePath:(id)arg2 outFactorPackId:(id*)arg3 outNamespaceName:(id*)arg4 outNCVs:(id*)arg5;
- (id)_readAllFactorLevelsFromStorage;
- (void)cacheFactorLevels;
- (void)dealloc;
- (int)deploymentId;
- (void)dispose;
- (id)experimentId;
- (id)factorLevels;
- (id)factorPackId;
- (id)init;
- (id)initWithParentId:(id)arg1 deploymentId:(int)arg2 promotable:(bool)arg3;
- (id)initWithPath:(id)arg1 parentId:(id)arg2 deploymentId:(int)arg3 treatmentId:(id)arg4 promotable:(bool)arg5;
- (id)levelForFactor:(id)arg1;
- (unsigned int)namespaceCompatibilityVersion;
- (unsigned int)namespaceId;
- (id)namespaceName;
- (bool)promotable;
- (id)rolloutId;
- (id)treatmentId;

@end