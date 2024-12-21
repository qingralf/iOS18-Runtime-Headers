/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreUtilities.framework/AppStoreUtilities
 */

@interface ASUSQLiteDatabaseStoreDescriptor : NSObject {
    NSString * _schemaName;
    Class  _sessionClass;
    NSArray * _tableNames;
    Class  _transactionClass;
}

@property (readonly) NSString *schemaName;
@property (readonly) Class sessionClass;
@property (readonly, copy) NSArray *tableNames;
@property (readonly) Class transactionClass;

- (void).cxx_destruct;
- (id)initWithSchemaName:(id)arg1 tableNames:(id)arg2 sessionClass:(Class)arg3 transactionClass:(Class)arg4;
- (id)schemaName;
- (Class)sessionClass;
- (id)tableNames;
- (Class)transactionClass;

@end