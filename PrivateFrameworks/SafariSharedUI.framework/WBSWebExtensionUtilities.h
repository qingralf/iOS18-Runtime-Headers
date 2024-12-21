/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface WBSWebExtensionUtilities : NSObject

+ (bool)isProfileServerIDForDefaultProfile:(id)arg1;
+ (bool)isTabIDValid:(double)arg1;
+ (bool)isWindowIDValid:(double)arg1;
+ (double)nextTabID;
+ (double)nextWindowID;
+ (id)serializeObjectToJSON:(id)arg1;
+ (double)storageSizeForKeyOrValue:(id)arg1;
+ (double)storageSizeForKeysAndValues:(id)arg1;
+ (id)tabIDToTabPositionDictionaryForTabs:(id)arg1;
+ (bool)validateContentsOfDictionary:(id)arg1 requiredKeys:(id)arg2 optionalKeys:(id)arg3 keyToExpectedValueType:(id)arg4 outExceptionString:(id*)arg5;

@end