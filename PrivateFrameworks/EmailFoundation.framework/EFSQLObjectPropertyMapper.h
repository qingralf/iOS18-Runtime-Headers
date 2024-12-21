/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface EFSQLObjectPropertyMapper : NSObject {
    NSArray * _additionalColumns;
    NSDictionary * _additionalSelectExpressions;
    NSDictionary * _keyPathMappers;
    EFSQLTableSchema * _mainTable;
    NSDictionary * _tableRelationships;
}

@property (nonatomic, readonly) NSArray *additionalColumns;
@property (nonatomic, readonly) NSDictionary *additionalSelectExpressions;
@property (nonatomic, readonly) NSDictionary *keyPathMappers;
@property (nonatomic, readonly) EFSQLTableSchema *mainTable;
@property (nonatomic, readonly) NSDictionary *tableRelationships;

- (void).cxx_destruct;
- (id)additionalColumns;
- (id)additionalSelectExpressions;
- (id)initWithTable:(id)arg1 keyPathMappers:(id)arg2 tableRelationships:(id)arg3 additionalColumns:(id)arg4 additionalSelectExpressions:(id)arg5;
- (id)keyPathMappers;
- (id)mainTable;
- (id)tableRelationships;

@end