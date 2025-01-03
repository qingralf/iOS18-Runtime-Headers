/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLiteTableSearchResultEnumerator : NSEnumerator {
    id  _entry;
    bool  _enumerationStarted;
    NSError * _error;
    NSString * _groupName;
    CKSQLiteCompiledStatement * _statement;
    CKSQLiteTable * _table;
    NSString * _tableName;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, retain) CKSQLiteCompiledStatement *statement;

- (void).cxx_destruct;
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)currentObject;
- (void)dealloc;
- (id)error;
- (id)initWithTable:(id)arg1 statement:(id)arg2;
- (void)invalidate;
- (id)nextObject;
- (void)setStatement:(id)arg1;
- (id)statement;

@end
