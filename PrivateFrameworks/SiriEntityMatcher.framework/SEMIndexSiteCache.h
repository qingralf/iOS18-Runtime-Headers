/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriEntityMatcher.framework/SiriEntityMatcher
 */

@interface SEMIndexSiteCache : NSObject <SEMIndexSiteAvailabilityObserver> {
    SEMIndexSite * _defaultIndexSite;
    NSURL * _managerDirectory;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _readOnly;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *managerDirectory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cachedUserVaultIndexSiteForCurrentPersonaIfExists:(id /* block */)arg1;
- (void)_evictCachedUserVaultIndexSite:(id)arg1;
- (id)_loadIndexSiteDirectoryWithName:(id)arg1 parentDirectory:(id)arg2 error:(id*)arg3;
- (id)cachedDefaultIndexSite:(id*)arg1;
- (id)cachedUserVaultIndexSiteForCurrentPersona:(id*)arg1;
- (void)clear;
- (void)enumerateIndexSitesUsingBlock:(id /* block */)arg1;
- (void)indexSiteAvailableWithType:(unsigned char)arg1;
- (void)indexSiteUnavailableSoonWithType:(unsigned char)arg1;
- (void)indexSiteUnavailableWithType:(unsigned char)arg1;
- (id)indexSiteWithType:(unsigned char)arg1 error:(id*)arg2;
- (id)initWithManagerDirectory:(id)arg1 readOnly:(bool)arg2;
- (id)managerDirectory;
- (id)openUserVaultTransaction:(id*)arg1 forPersonaIdentifier:(id)arg2 error:(id*)arg3;

@end
