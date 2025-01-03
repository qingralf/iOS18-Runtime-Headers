/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorSearch.framework/VectorSearch
 */

@interface VSKDisjunctiveFilter : NSObject {
    long long  _op;
    VSKDatabaseValue * _value;
}

@property (nonatomic) long long op;
@property (nonatomic, copy) VSKDatabaseValue *value;

- (void).cxx_destruct;
- (id)initWithOperator:(long long)arg1 value:(id)arg2;
- (long long)op;
- (void)setOp:(long long)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
