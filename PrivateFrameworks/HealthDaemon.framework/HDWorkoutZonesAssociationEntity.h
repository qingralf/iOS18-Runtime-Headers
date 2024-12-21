/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutZonesAssociationEntity : HDHealthEntity

+ (bool)associateSyncedZonesSamplesWithUUIDs:(id)arg1 withWorkoutUUID:(id)arg2 syncIdentity:(id)arg3 syncProvenance:(long long)arg4 transaction:(id)arg5 error:(id*)arg6;
+ (bool)associateZonesSamplesWithUUIDs:(id)arg1 withWorkoutUUID:(id)arg2 transaction:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateZonesSamplesWithWorkoutPersistentID:(unsigned long long)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
+ (id)foreignKeys;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)uniquedColumns;

- (id)workoutUUIDWithTransaction:(id)arg1 error:(id*)arg2;
- (id)zonesUUIDWithTransaction:(id)arg1 error:(id*)arg2;

@end