/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKChangeSet : NSObject <_DKProtobufConverting> {
    NSUUID * _deviceIdentifier;
    NSDate * _endDate;
    NSArray * _eventIDsToDelete;
    NSArray * _eventsToAdd;
    unsigned long long  _sequenceNumber;
    NSDate * _startDate;
    NSString * _type;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSUUID *deviceIdentifier;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSArray *eventIDsToDelete;
@property (nonatomic, retain) NSArray *eventsToAdd;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *type;

+ (id)_createFromData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5;
+ (id)additionChangeSetEntityName;
+ (id)createFromData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3;
+ (id)createFromData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5;
+ (id)dataFromCompressedChangeSet:(id)arg1;
+ (id)deletionChangeSetEntityName;
+ (id)fromPBCodable:(id)arg1;

- (void).cxx_destruct;
- (id)asData;
- (id)description;
- (id)deviceIdentifier;
- (id)endDate;
- (id)eventIDsToDelete;
- (id)eventsToAdd;
- (id)initWithEventIDsToDelete:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (id)initWithEventsToAdd:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (id)initWithEventsToAdd:(id)arg1 eventIDsToDelete:(id)arg2 deviceIdentifier:(id)arg3 sequenceNumber:(unsigned long long)arg4;
- (id)initWithEventsToAdd:(id)arg1 eventIDsToDelete:(id)arg2 deviceIdentifier:(id)arg3 sequenceNumber:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 type:(id)arg7;
- (id)initWithManagedObject:(id)arg1;
- (id)insertInManagedObjectContext:(id)arg1;
- (unsigned long long)sequenceNumber;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEventIDsToDelete:(id)arg1;
- (void)setEventsToAdd:(id)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setType:(id)arg1;
- (id)startDate;
- (id)toPBCodable;
- (id)type;

@end
