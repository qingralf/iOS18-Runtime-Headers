/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSCreditCardImporter : NSObject <WBSJSONReaderDelegate> {
    NSString * _cardName;
    NSString * _cardNumber;
    NSString * _cardholderName;
    <WBSCreditCardImporterDelegate> * _delegate;
    NSNumber * _expirationDateMonth;
    NSNumber * _expirationDateYear;
    bool  _foundCreditCardArray;
    NSError * _lastError;
    NSNumber * _lastUsedDateTimeInterval;
    NSMutableArray * _stack;
}

@property (nonatomic) <WBSCreditCardImporterDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_checkNotAtRootLevel;
- (bool)_isParsingCreditCard;
- (bool)_isParsingCreditCardArray;
- (id)_popKeyFromStackIfPossible;
- (id)_sanitizedCardNumberFromImportedCardNumber:(id)arg1;
- (id)delegate;
- (bool)jsonReader:(id)arg1 appendKey:(id)arg2;
- (bool)jsonReader:(id)arg1 error:(id)arg2;
- (bool)jsonReader:(id)arg1 scalarValue:(id)arg2;
- (bool)jsonReaderBeginArray:(id)arg1;
- (bool)jsonReaderBeginObject:(id)arg1;
- (bool)jsonReaderEndArray:(id)arg1;
- (bool)jsonReaderEndObject:(id)arg1;
- (bool)parseFileHandle:(id)arg1 error:(id*)arg2;
- (bool)parseURL:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;

@end