/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDClaimKnownFolderOperation : FPOperation {
    NSArray * _descriptors;
    FPDDomain * _domain;
    bool  _isProviderInitiated;
    unsigned long long  _knownFolders;
    NSString * _localizedReason;
    NSFileProviderKnownFolderLocations * _locations;
    FPDRequest * _request;
    FPDServer * _server;
    bool  _skipSystemAlerts;
}

- (void).cxx_destruct;
- (void)attachClaimedKnownFoldersWithCompletionHandler:(id /* block */)arg1;
- (void)detachKnownFolders:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getKnownFolderLocationsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithDescriptors:(id)arg1 server:(id)arg2 request:(id)arg3;
- (id)initWithKnownFolderLocations:(id)arg1 domain:(id)arg2 server:(id)arg3 localizedReason:(id)arg4 request:(id)arg5;
- (id)initWithKnownFolders:(unsigned long long)arg1 domain:(id)arg2 server:(id)arg3 request:(id)arg4;
- (bool)isDisallowedByOrganization;
- (void)main;
- (void)notifyUserWithCompletionHandler:(id /* block */)arg1;
- (void)resolveKnownFolder:(id)arg1 location:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)resolveLogicalURLsOfLocations:(id)arg1 completionHandler:(id /* block */)arg2;

@end