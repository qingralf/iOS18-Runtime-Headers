/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FinanceKit.framework/FinanceKit
 */

@interface FinanceKit.ManagedOrderReturn : NSManagedObject

@property (nonatomic, copy) NSString *carrier;
@property (nonatomic, copy) NSDate *dropOffDate;
@property (nonatomic, copy) NSDate *initiationDate;
@property (nonatomic, copy) NSSet *lineItemObjects;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *notes;
@property (nonatomic) short positionIndex;
@property (nonatomic, copy) NSDate *returnDate;
@property (nonatomic, copy) NSString *returnIdentifier;
@property (nonatomic, copy) NSString *returnLabel;
@property (nonatomic, copy) NSURL *returnManagementURL;
@property (nonatomic, copy) NSString *returnNumber;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *statusDescription;
@property (nonatomic) short statusValue;
@property (nonatomic, copy) NSString *trackingNumber;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
