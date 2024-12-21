/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPhotoLibraryCreationOptions : NSObject <NSCopying> {
    NSString * _containerIdentifier;
    long long  _domain;
    unsigned long long  _internalCreateOptions;
    NSURL * _libraryURL;
    NSString * _userDescription;
    NSString * _uuid;
}

@property (copy) NSString *applicationGroupIdentifier;
@property (copy) NSString *containerIdentifier;
@property long long domain;
@property (copy) NSString *identifierUUID;
@property unsigned long long internalCreateOptions;
@property (copy) NSURL *libraryURL;
@property (copy) NSString *userDescription;
@property (copy) NSString *uuid;

+ (id)creationOptionsForApplicationLibraryWithContainerIdentifier:(id)arg1;
+ (id)creationOptionsForDefaultApplicationLibraryWithContainerIdentifier:(id)arg1;
+ (id)creationOptionsForUserLibrary;

- (void).cxx_destruct;
- (id)applicationGroupIdentifier;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)domain;
- (id)identifierUUID;
- (unsigned long long)internalCreateOptions;
- (id)libraryURL;
- (void)setApplicationGroupIdentifier:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setDomain:(long long)arg1;
- (void)setIdentifierUUID:(id)arg1;
- (void)setInternalCreateOptions:(unsigned long long)arg1;
- (void)setLibraryURL:(id)arg1;
- (void)setUserDescription:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)userDescription;
- (id)uuid;

@end