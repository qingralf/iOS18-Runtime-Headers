/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FinHealthCore.framework/FinHealthCore
 */

@interface FHDatabaseClauseFromBuilder : NSObject {
    NSArray * _clauseList;
}

@property (nonatomic, readonly) NSArray *clauseList;

+ (id)initWithBuilder:(id /* block */)arg1;
+ (id)initWithBuilder:(id /* block */)arg1 logicalOperator:(id)arg2;

- (void).cxx_destruct;
- (void)_extractDeepLinkedClauses:(id)arg1 clausesAndOperatorsInReversOrder:(id)arg2;
- (id)_init:(id)arg1 logicalOperator:(id)arg2;
- (id)clauseList;
- (id)clausesAndOperatorsInOrder;
- (id)description;
- (id)expressionFromClausesAndOperators;

@end