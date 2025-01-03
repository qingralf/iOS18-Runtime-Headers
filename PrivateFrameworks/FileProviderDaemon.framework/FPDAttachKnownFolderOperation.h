/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDAttachKnownFolderOperation : FPOperation {
    NSArray * _knownFolderPhysicalURLs;
    unsigned long long  _knownFolders;
    FPDDomain * _onlyForDomain;
    unsigned long long  _options;
    FPDRequest * _request;
    FPDServer * _server;
}

- (void).cxx_destruct;
- (id)initWithKnownFolderURLs:(id)arg1 onlyForDomain:(id)arg2 server:(id)arg3 options:(unsigned long long)arg4 request:(id)arg5;
- (id)initWithKnownFolders:(unsigned long long)arg1 onlyForDomain:(id)arg2 server:(id)arg3 options:(unsigned long long)arg4 request:(id)arg5;
- (void)main;
- (void)notifyUserForDomain:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)resolveKnownFolderURLsWithError:(id*)arg1;

@end
