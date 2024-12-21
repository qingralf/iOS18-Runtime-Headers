/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoLibraryAttributesChangeRequestServiceHandler : NSObject <PLChangeRequestServiceHandling> {
    PLPhotoLibraryAttributesChanges * _changes;
    <PLClientAuthorization> * _clientAuthorization;
}

@property (nonatomic, readonly) long long accessScopeOptionsRequirement;
@property (readonly) PLPhotoLibraryAttributesChanges *changes;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_updateDataclass:(id)arg1 onAccount:(id)arg2 enabled:(bool)arg3;
- (long long)accessScopeOptionsRequirement;
- (bool)applyChangesWithLibrary:(id)arg1 error:(id*)arg2;
- (id)changes;
- (id)initWithPhotoLibraryAttributesChanges:(id)arg1 clientAuthorization:(id)arg2;
- (bool)validateChangesWithLibrary:(id)arg1 error:(id*)arg2;

@end