/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoLibraryAttributesChanges : NSObject <PLChangesForServiceHandling> {
    NSNumber * _cloudResourcePrefetchModeValue;
    NSNumber * _enableCloudSyncValue;
    NSString * _name;
    NSString * _userDescription;
}

@property (retain) NSNumber *cloudResourcePrefetchModeValue;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (retain) NSNumber *enableCloudSyncValue;
@property (readonly) bool hasChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *userDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cloudResourcePrefetchModeValue;
- (id)enableCloudSyncValue;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasChanges;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setCloudResourcePrefetchModeValue:(id)arg1;
- (void)setEnableCloudSyncValue:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUserDescription:(id)arg1;
- (id)userDescription;

@end