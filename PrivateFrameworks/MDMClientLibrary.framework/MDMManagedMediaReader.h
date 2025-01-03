/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MDMClientLibrary.framework/MDMClientLibrary
 */

@interface MDMManagedMediaReader : NSObject

// Image: /System/Library/PrivateFrameworks/MDMClientLibrary.framework/MDMClientLibrary

+ (id)_metadataByBundleIDExcludeDDMApps:(bool)arg1;
+ (id)attributesByAppID;
+ (id)attributesByAppIDExcludeDDMApps:(bool)arg1;
+ (id)managedAppIDs;
+ (id)managedAppIDsExcludeDDMApps:(bool)arg1;
+ (id)managedAppIDsWithFlags:(unsigned long long)arg1;
+ (id)managedAppIDsWithFlags:(unsigned long long)arg1 excludeDDMApps:(bool)arg2;
+ (id)managedBooks;

// Image: /System/Library/PrivateFrameworks/DMCEnrollmentProvider.framework/DMCEnrollmentProvider

+ (id)managedAppsUninstalledOnMDMRemoval;

@end
