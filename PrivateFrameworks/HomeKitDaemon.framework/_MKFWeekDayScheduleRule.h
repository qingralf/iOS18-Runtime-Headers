/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface _MKFWeekDayScheduleRule : _MKFModel <MKFWeekDayScheduleRule, MKFWeekDayScheduleRulePrivateExtensions>

@property (nonatomic, readonly, copy) MKFWeekDayScheduleRuleDatabaseID *databaseID;
@property (nonatomic, copy) NSNumber *daysOfTheWeek;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *endTime;
@property (nonatomic, retain) _MKFGuest *guest;
@property (nonatomic, retain) <MKFGuest> *guest;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _MKFInvitation *invitation;
@property (nonatomic, retain) <MKFInvitation> *invitation;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSNumber *startTime;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;
+ (id)initWeekDayScheduleRuleWithModelID:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 daysOfTheWeek:(id)arg4 context:(id)arg5;
+ (id)populateWeekDayScheduleRuleFromDictionary:(id)arg1 existingLocalModels:(id)arg2 context:(id)arg3;

- (id)castIfWeekDayScheduleRule;
- (id)databaseID;
- (id)dictionaryRepresentation;
- (bool)isValid;
- (void)updateFromWeekDayScheduleRule:(id)arg1;
- (id)weekDayScheduleRule;

@end