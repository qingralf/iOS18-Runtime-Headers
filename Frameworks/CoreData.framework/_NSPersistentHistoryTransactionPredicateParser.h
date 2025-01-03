/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSPersistentHistoryTransactionPredicateParser : NSObject <NSPredicateVisitor> {
    bool  _hasDate;
    bool  _hasTimestamp;
    NSError * _localError;
    NSPredicate * _predicate;
    NSMutableDictionary * _storeTokens;
}

- (void)dealloc;
- (id)initWithPredicate:(id)arg1;
- (bool)parse:(id*)arg1;
- (id)storeTokens;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
