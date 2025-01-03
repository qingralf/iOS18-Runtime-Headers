/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface _OSLogStreamFilter : NSObject <NSPredicateVisitor> {
    NSMutableDictionary * _categories;
    NSMutableDictionary * _filter;
    NSMutableDictionary * _pids;
    NSMutableDictionary * _processImagePaths;
    NSMutableDictionary * _processes;
    NSMutableDictionary * _subsystems;
    NSMutableDictionary * _uids;
}

@property (nonatomic, readonly) NSData *data;

- (void).cxx_destruct;
- (void)addCategory:(id)arg1 flags:(unsigned long long)arg2 returningDict:(id*)arg3;
- (void)addProcess:(id)arg1 flags:(unsigned long long)arg2 returningDict:(id*)arg3;
- (void)addProcessID:(id)arg1 flags:(unsigned long long)arg2 returningDict:(id*)arg3;
- (void)addProcessImagePath:(id)arg1 flags:(unsigned long long)arg2 returningDict:(id*)arg3;
- (void)addSubsystem:(id)arg1 flags:(unsigned long long)arg2 returningDict:(id*)arg3;
- (void)addUserID:(id)arg1 flags:(unsigned long long)arg2 returningDict:(id*)arg3;
- (id)data;
- (id)dictionaryForComparisonPredicate:(id)arg1;
- (id)encodePredicate:(id)arg1;
- (unsigned long long)flagsForPredicate:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (void)processComparisonPredicate:(id)arg1;
- (void)processLeftExpression:(id)arg1 andRightExpression:(id)arg2 flags:(unsigned long long)arg3;
- (void)processLeftExpression:(id)arg1 andRightExpression:(id)arg2 flags:(unsigned long long)arg3 returningDict:(id*)arg4;
- (void)reduceFilter:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
