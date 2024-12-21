/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentSummaryItem : PBCodable <NSCopying> {
    long long  _amount;
    PKProtobufAutomaticReloadPaymentSummaryItem * _automaticReloadPaymentSummaryItem;
    PKProtobufCustomPrecisionAmount * _customPrecisionAmount;
    PKProtobufNSDecimalNumber * _decimalAmount;
    PKProtobufDeferredPaymentSummaryItem * _deferredPaymentSummaryItem;
    PKProtobufDisbursementSummaryItem * _disbursementSummaryItem;
    struct { 
        unsigned int amount : 1; 
        unsigned int type : 1; 
    }  _has;
    PKProtobufInstantFundsOutFeeSummaryItem * _instantFundsOutFeeSummaryItem;
    NSString * _label;
    PKProtobufRecurringPaymentSummaryItem * _recurringPaymentSummaryItem;
    PKProtobufShippingMethod * _shippingMethodSummaryItem;
    unsigned int  _type;
}

@property (nonatomic) long long amount;
@property (nonatomic, retain) PKProtobufAutomaticReloadPaymentSummaryItem *automaticReloadPaymentSummaryItem;
@property (nonatomic, retain) PKProtobufCustomPrecisionAmount *customPrecisionAmount;
@property (nonatomic, retain) PKProtobufNSDecimalNumber *decimalAmount;
@property (nonatomic, retain) PKProtobufDeferredPaymentSummaryItem *deferredPaymentSummaryItem;
@property (nonatomic, retain) PKProtobufDisbursementSummaryItem *disbursementSummaryItem;
@property (nonatomic) bool hasAmount;
@property (nonatomic, readonly) bool hasAutomaticReloadPaymentSummaryItem;
@property (nonatomic, readonly) bool hasCustomPrecisionAmount;
@property (nonatomic, readonly) bool hasDecimalAmount;
@property (nonatomic, readonly) bool hasDeferredPaymentSummaryItem;
@property (nonatomic, readonly) bool hasDisbursementSummaryItem;
@property (nonatomic, readonly) bool hasInstantFundsOutFeeSummaryItem;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic, readonly) bool hasRecurringPaymentSummaryItem;
@property (nonatomic, readonly) bool hasShippingMethodSummaryItem;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) PKProtobufInstantFundsOutFeeSummaryItem *instantFundsOutFeeSummaryItem;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) PKProtobufRecurringPaymentSummaryItem *recurringPaymentSummaryItem;
@property (nonatomic, retain) PKProtobufShippingMethod *shippingMethodSummaryItem;
@property (nonatomic) unsigned int type;

- (void).cxx_destruct;
- (long long)amount;
- (id)automaticReloadPaymentSummaryItem;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customPrecisionAmount;
- (id)decimalAmount;
- (id)deferredPaymentSummaryItem;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disbursementSummaryItem;
- (bool)hasAmount;
- (bool)hasAutomaticReloadPaymentSummaryItem;
- (bool)hasCustomPrecisionAmount;
- (bool)hasDecimalAmount;
- (bool)hasDeferredPaymentSummaryItem;
- (bool)hasDisbursementSummaryItem;
- (bool)hasInstantFundsOutFeeSummaryItem;
- (bool)hasLabel;
- (bool)hasRecurringPaymentSummaryItem;
- (bool)hasShippingMethodSummaryItem;
- (bool)hasType;
- (unsigned long long)hash;
- (id)instantFundsOutFeeSummaryItem;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recurringPaymentSummaryItem;
- (void)setAmount:(long long)arg1;
- (void)setAutomaticReloadPaymentSummaryItem:(id)arg1;
- (void)setCustomPrecisionAmount:(id)arg1;
- (void)setDecimalAmount:(id)arg1;
- (void)setDeferredPaymentSummaryItem:(id)arg1;
- (void)setDisbursementSummaryItem:(id)arg1;
- (void)setHasAmount:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setInstantFundsOutFeeSummaryItem:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setRecurringPaymentSummaryItem:(id)arg1;
- (void)setShippingMethodSummaryItem:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (id)shippingMethodSummaryItem;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end