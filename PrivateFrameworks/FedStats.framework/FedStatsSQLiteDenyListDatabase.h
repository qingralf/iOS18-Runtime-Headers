/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FedStats.framework/FedStats
 */

@interface FedStatsSQLiteDenyListDatabase : NSObject {
    NSString * _columnName;
    FedStatsSQLiteDatabase * _denyListDB;
    FedStatsSQLiteDatabase * _sqliteDB;
    NSString * _tableName;
}

@property (nonatomic, readonly, copy) NSString *columnName;
@property (nonatomic, readonly, copy) FedStatsSQLiteDatabase *denyListDB;
@property (readonly) FedStatsSQLiteDatabase *sqliteDB;
@property (nonatomic, readonly, copy) NSString *tableName;

+ (id)databaseWithFileURL:(id)arg1 tableName:(id)arg2 columnName:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)columnName;
- (id)denyListDB;
- (id)initWithDenyList:(id)arg1 tableName:(id)arg2 columnName:(id)arg3;
- (bool)isInDenyList:(id)arg1 partialMatch:(bool)arg2;
- (id)sqliteDB;
- (id)tableName;

@end
