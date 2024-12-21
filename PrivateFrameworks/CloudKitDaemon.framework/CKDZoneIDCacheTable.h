/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDZoneIDCacheTable : CKSQLiteCacheTable

+ (id)dbProperties;
+ (Class)entryClass;

- (id)entryForZoneID:(id)arg1 addIfNotFound:(bool)arg2 error:(id*)arg3;
- (id)init;
- (bool)removeRowID:(id)arg1 error:(id*)arg2;
- (id)rowIDForZoneID:(id)arg1 addIfNotFound:(bool)arg2 error:(id*)arg3;
- (id)zoneIDForRowID:(id)arg1 error:(id*)arg2;

@end