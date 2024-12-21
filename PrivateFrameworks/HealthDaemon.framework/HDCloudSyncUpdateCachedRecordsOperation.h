/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncUpdateCachedRecordsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    NSMutableSet * _invalidRecordIDs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDSynchronousTaskGroup * _taskGroup;
    NSArray * _zoneIdentifiersWithIdentityLost;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *invalidRecordIDs;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDSynchronousTaskGroup *taskGroup;
@property (nonatomic, readonly, copy) NSArray *zoneIdentifiersWithIdentityLost;

- (void).cxx_destruct;
- (void)fetchRecordZoneChangesForContainer:(id)arg1 database:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)invalidRecordIDs;
- (void)main;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(bool)arg2 errors:(id)arg3;
- (id)taskGroup;
- (id)zoneIdentifiersWithIdentityLost;

@end