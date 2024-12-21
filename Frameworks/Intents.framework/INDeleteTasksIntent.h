/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INDeleteTasksIntent : INIntent <INDeleteTasksIntentExport>

@property (nonatomic, readonly, copy) NSNumber *all;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool rem_all;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INTaskList *taskList;
@property (nonatomic, readonly, copy) NSArray *tasks;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)all;
- (id)domain;
- (id)initWithTaskList:(id)arg1 tasks:(id)arg2 all:(id)arg3;
- (id)parametersByName;
- (void)setAll:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setTaskList:(id)arg1;
- (void)setTasks:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)taskList;
- (id)tasks;
- (id)verb;

// Image: /System/Library/PrivateFrameworks/RemindersIntentsFramework.framework/RemindersIntentsFramework

- (bool)rem_all;

@end