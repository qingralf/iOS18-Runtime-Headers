/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoardServices.framework/PosterBoardServices
 */

@interface PRSPosterConfigurationAttributes : NSObject {
    NSString * _extensionIdentifier;
    NSFileManager * _fileManager;
    NSURL * _identifierURL;
    PFPosterPath * _path;
    NSUUID * _posterUUID;
    NSURL * _providerURL;
    unsigned long long  _supplementalVersion;
    unsigned long long  _version;
}

@property (nonatomic, readonly) NSString *extensionIdentifier;
@property (nonatomic, readonly, copy) NSURL *identifierURL;
@property (nonatomic, readonly) PFPosterPath *path;
@property (nonatomic, readonly, copy) NSUUID *posterUUID;
@property (nonatomic, readonly, copy) NSURL *providerURL;
@property (nonatomic, readonly) NSString *role;
@property (nonatomic, readonly) NSSet *snapshotURLs;
@property (nonatomic, readonly) unsigned long long supplementalVersion;
@property (nonatomic, readonly) unsigned long long version;

- (void).cxx_destruct;
- (id)_initWithPath:(id)arg1 extensionIdentifier:(id)arg2 posterUUID:(id)arg3 providerURL:(id)arg4 version:(unsigned long long)arg5 supplementalVersion:(unsigned long long)arg6 fileManager:(id)arg7;
- (id)extensionIdentifier;
- (id)identifierURL;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithPath:(id)arg1 extensionIdentifier:(id)arg2;
- (id)initWithURL:(id)arg1 extensionIdentifier:(id)arg2 configurationUUID:(id)arg3 role:(id)arg4 version:(id)arg5 supplementalVersion:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAttributes:(id)arg1;
- (bool)isExtensionIdentifierEqual:(id)arg1;
- (bool)isIdentifierURLEqual:(id)arg1;
- (bool)isPosterUUIDEqual:(id)arg1;
- (bool)isRoleEqual:(id)arg1;
- (bool)isSupplementalVersionEqual:(id)arg1;
- (bool)isVersionEqual:(id)arg1;
- (id)path;
- (id)posterUUID;
- (id)providerURL;
- (id)role;
- (id)snapshotURLs;
- (unsigned long long)supplementalVersion;
- (unsigned long long)version;

@end
