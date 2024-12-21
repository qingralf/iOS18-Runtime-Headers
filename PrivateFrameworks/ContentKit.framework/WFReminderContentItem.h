/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFReminderContentItem : WFGenericFileContentItem <WFContentItemClass> {
    REMStore * _reminderStore;
}

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool cachesSupportedTypes; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasStringOutput; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSDictionary *metadataForSerialization; /* unknown property attribute: ? */
@property (nonatomic, readonly) WFFileType *preferredFileType; /* unknown property attribute: ? */
@property (nonatomic, readonly) WFObjectType *preferredObjectType; /* unknown property attribute: ? */
@property (nonatomic, readonly) REMReminder *reminder;
@property (nonatomic, retain) REMStore *reminderStore;
@property (readonly) Class superclass;

+ (id)allLists;
+ (id)contactRepresentationWithContact:(id)arg1;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)defaultList;
+ (bool)hasLibrary;
+ (id)itemWithReminder:(id)arg1 fromReminderStore:(id)arg2;
+ (id)localizedPluralTypeDescriptionWithContext:(id)arg1;
+ (id)localizedTypeDescriptionWithContext:(id)arg1;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)propertyBuilders;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 permissionRequestor:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)stringConversionBehavior;
+ (bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (bool)canGenerateRepresentationForType:(id)arg1;
- (id)changeTransaction;
- (void)copyStateToItem:(id)arg1;
- (id)defaultSourceForRepresentation:(id)arg1;
- (bool)flagged;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)generateObjectRepresentations:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (bool)getListAltText:(id /* block */)arg1;
- (bool)hasAlarms;
- (bool)hasSubtasks;
- (id)imageAttachments;
- (id)parentReminder;
- (id)reminder;
- (id)reminderStore;
- (void)setReminderStore:(id)arg1;
- (id)subtasks;

@end