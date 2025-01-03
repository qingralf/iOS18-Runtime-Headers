/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPhotoLibraryAttributesChangeRequest : NSObject <PHChangeRequestCore> {
    PLPhotoLibraryAttributesChanges * _changes;
}

@property (nonatomic, readonly) long long accessScopeOptionsRequirement;
@property (nonatomic, readonly) NSString *changeTypeForSummary;
@property (nonatomic, readonly) <PLChangesForServiceHandling> *changesForServiceHandler;
@property (nonatomic) unsigned short cloudResourcePrefetchMode;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableCloudSync;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *userDescription;

- (void).cxx_destruct;
- (long long)accessScopeOptionsRequirement;
- (id)changeTypeForSummary;
- (id)changesForServiceHandler;
- (unsigned short)cloudResourcePrefetchMode;
- (void)didSendChangeToServiceHandlerWithResult:(bool)arg1;
- (bool)enableCloudSync;
- (id)init;
- (id)name;
- (bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2;
- (bool)prepareForServicePreflightCheck:(id*)arg1;
- (void)setCloudResourcePrefetchMode:(unsigned short)arg1;
- (void)setEnableCloudSync:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setUserDescription:(id)arg1;
- (id)userDescription;

@end
