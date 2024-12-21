/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAssociationEntity : HDHealthEntity

+ (bool)_enumerateAssociationsWithPredicate:(id)arg1 syncEntityClass:(Class)arg2 session:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg4 lastSyncAnchor:(long long*)arg5 healthDatabase:(id)arg6 error:(id*)arg7 block:(id /* block */)arg8;
+ (bool)_enumerateTypedAssociationsWithPredicate:(id)arg1 syncEntityClass:(Class)arg2 session:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg4 lastSyncAnchor:(long long*)arg5 healthDatabase:(id)arg6 transaction:(id)arg7 error:(id*)arg8 block:(id /* block */)arg9;
+ (bool)_insertCodableObjectAssociations:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)_insertEntriesWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 syncIdentity:(long long)arg4 type:(unsigned long long)arg5 deleted:(bool)arg6 creationDate:(id)arg7 destinationSubObjectReference:(id)arg8 enforceSameSource:(bool)arg9 permitPendingAssociations:(bool)arg10 profile:(id)arg11 lastInsertedEntityID:(id*)arg12 error:(id*)arg13;
+ (bool)associateSampleUUIDData:(id)arg1 withSampleUUID:(id)arg2 type:(unsigned long long)arg3 destinationSubObjectReference:(id)arg4 lastInsertedEntityID:(id*)arg5 profile:(id)arg6 error:(id*)arg7;
+ (bool)associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 type:(unsigned long long)arg3 destinationSubObjectReference:(id)arg4 lastInsertedEntityID:(id*)arg5 profile:(id)arg6 error:(id*)arg7;
+ (bool)associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 type:(unsigned long long)arg3 destinationSubObjectReference:(id)arg4 lastInsertedEntityID:(id*)arg5 profile:(id)arg6 provenance:(long long)arg7 syncIdentity:(long long)arg8 creationDate:(id)arg9 error:(id*)arg10;
+ (id)associationUUIDsForObjectUUID:(id)arg1 subObjectReference:(id)arg2 excludeDeleted:(bool)arg3 profile:(id)arg4 error:(id*)arg5;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (bool)copyAssociationsFromChildID:(id)arg1 toObjectID:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)copyAssociationsFromObject:(id)arg1 toObject:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)copyAssociationsFromObject:(id)arg1 toObject:(id)arg2 type:(unsigned long long)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)countOfObjectsAssociatedWithObjectPID:(long long)arg1 excludeDeleted:(bool)arg2 associationType:(unsigned long long)arg3 anchor:(long long)arg4 transaction:(id)arg5 error:(id*)arg6;
+ (id)countOfObjectsAssociatedWithObjectUUID:(id)arg1 subObjectReference:(id)arg2 excludeDeleted:(bool)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)databaseTable;
+ (id)deleteStatementForChildIDsWithTransaction:(id)arg1;
+ (id)deleteStatementForParentIDWithTransaction:(id)arg1;
+ (bool)disassociateSampleUUIDData:(id)arg1 withSampleUUID:(id)arg2 type:(unsigned long long)arg3 destinationSubObjectReference:(id)arg4 profile:(id)arg5 error:(id*)arg6;
+ (bool)disassociateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 type:(unsigned long long)arg3 destinationSubObjectReference:(id)arg4 lastInsertedEntityID:(id*)arg5 profile:(id)arg6 error:(id*)arg7;
+ (id)indices;
+ (bool)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 type:(unsigned long long)arg3 destinationSubObject:(id)arg4 enforceSameSource:(bool)arg5 profile:(id)arg6 transaction:(id)arg7 error:(id*)arg8;
+ (bool)insertEntriesWithAssociationUUID:(id)arg1 objectUUIDsData:(id)arg2 type:(unsigned long long)arg3 destinationSubObjectReference:(id)arg4 profile:(id)arg5 error:(id*)arg6;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)journalEntryForAssociation:(id)arg1 objects:(id)arg2 profile:(id)arg3;
+ (id)objectIDsForAssociationEntityWithPersistentID:(long long)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)objectUUIDsAssociatedWithObjectUUID:(id)arg1 subObjectReference:(id)arg2 excludeDeleted:(bool)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)objectsAssociatedWithObjectPID:(long long)arg1 subObjectReference:(id)arg2 dataTypes:(id)arg3 associationType:(unsigned long long)arg4 limit:(unsigned long long)arg5 sortDescending:(bool)arg6 profile:(id)arg7 error:(id*)arg8;
+ (id)privateSubEntities;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (bool)realizePendingAssociationsWithTransaction:(id)arg1 startingAnchor:(long long)arg2 error:(id*)arg3;
+ (id)tableAliases;
+ (id)uniquedColumns;

@end