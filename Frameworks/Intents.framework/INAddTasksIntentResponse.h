/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INAddTasksIntentResponse : INIntentResponse <INAddTasksIntentResponseExport>

@property (nonatomic, copy) NSArray *addedTasks;
@property (nonatomic, readonly) long long code;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) INTaskList *modifiedTaskList;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long warnings;

+ (bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(bool)arg3;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (bool)supportsSecureCoding;

- (long long)_codeWithName:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (long long)_intentResponseCode;
- (id)addedTasks;
- (long long)code;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)modifiedTaskList;
- (id)propertiesByName;
- (void)setAddedTasks:(id)arg1;
- (void)setModifiedTaskList:(id)arg1;
- (void)setPropertiesByName:(id)arg1;
- (void)setWarnings:(unsigned long long)arg1;
- (unsigned long long)warnings;

@end
