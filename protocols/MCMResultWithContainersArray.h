/* Generated by RuntimeBrowser.
 */

@protocol MCMResultWithContainersArray <MCMResult>

@required

- (id)initWithContainerPaths:(NSArray *)arg1 containerIdentities:(NSArray *)arg2 includePath:(bool)arg3 clientIdentity:(MCMClientIdentity *)arg4 skipSandboxExtensions:(bool)arg5;
- (id)initWithContainers:(NSArray *)arg1 includePath:(bool)arg2 includeInfo:(bool)arg3 includeUserManagedAssetsRelPath:(bool)arg4 includeCreator:(bool)arg5 clientIdentity:(MCMClientIdentity *)arg6 skipSandboxExtensions:(bool)arg7;

@end