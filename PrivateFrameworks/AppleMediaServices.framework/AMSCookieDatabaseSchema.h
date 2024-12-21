/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSCookieDatabaseSchema : NSObject

+ (id)_deviceStorageDetails;
+ (bool)createOrUpdateSchemaUsingConnection:(id)arg1;
+ (bool)createOrUpdateSchemaUsingConnection:(id)arg1 error:(id*)arg2;
+ (bool)migrateVersion0to1WithMigration:(id)arg1 error:(id*)arg2;
+ (bool)promptTapToRadarForSchemaMigrationFailureWithDescription:(id)arg1 error:(id*)arg2;

@end