/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FinanceKit.framework/FinanceKit
 */

@interface FinanceKit.ManagedAccount : NSManagedObject

@property (nonatomic, copy) NSString *accountDescription;
@property (nonatomic) short accountTypeValue;
@property (nonatomic, retain) NSDecimalNumber *creditLimitAmountValue;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, copy) NSString *institutionName;
@property (nonatomic, retain) NSDecimalNumber *minimumPaymentAmountValue;
@property (nonatomic, copy) NSDate *nextPaymentDate;
@property (nonatomic, copy) NSDate *openingDate;
@property (nonatomic, retain) NSDecimalNumber *overduePaymentAmountValue;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
