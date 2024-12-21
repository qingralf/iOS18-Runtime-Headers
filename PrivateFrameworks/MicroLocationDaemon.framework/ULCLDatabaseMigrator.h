/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULCLDatabaseMigrator : NSObject {
    struct ULDatabase { int (**x1)(); id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; unsigned int x18; id x19; } * _localDb;
    bool  _migrateAllData;
}

@property (nonatomic) struct ULDatabase { int (**x1)(); id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; unsigned int x18; id x19; }*localDb;
@property (nonatomic) bool migrateAllData;

- (struct unique_ptr<CLSqliteDatabase, std::default_delete<CLSqliteDatabase>> { struct __compressed_pair<CLSqliteDatabase *, std::default_delete<CLSqliteDatabase>> { struct CLSqliteDatabase {} *x_1_1_1; } x1; })_connectToLocationdDatabase:(id)arg1;
- (void)_logStatsForExportedDatabase:(struct ULMiloSqliteDatabase { struct CLSqliteDatabase {} *x1; }*)arg1;
- (void)_logStatsForLocalDatabase;
- (bool)_migrateData:(struct ULMiloSqliteDatabase { struct CLSqliteDatabase {} *x1; }*)arg1;
- (bool)_migrateTableUsingPaging:(struct ULMiloSqliteDatabase { struct CLSqliteDatabase {} *x1; }*)arg1 tableName:(const char *)arg2 migrationLimit:(unsigned int)arg3 pageSize:(unsigned int)arg4 copyPageBlock:(id /* block */)arg5;
- (id)initWithLocalDb:(struct ULDatabase { int (**x1)(); id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; unsigned int x18; id x19; }*)arg1;
- (struct ULDatabase { int (**x1)(); id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; unsigned int x18; id x19; }*)localDb;
- (bool)migrateAllData;
- (bool)migrateCLDatabaseFromPath:(id)arg1;
- (void)setLocalDb:(struct ULDatabase { int (**x1)(); id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; unsigned int x18; id x19; }*)arg1;
- (void)setMigrateAllData:(bool)arg1;

@end