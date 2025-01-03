/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MigrationKit.framework/MigrationKit
 */

@interface MKMigrator : NSObject {
    MKImportAnalytics * _analytics;
    <MKMigratorDelegate> * _delegate;
    unsigned long long  _importCount;
    unsigned long long  _importErrorCount;
    NSMutableSet * _importErrors;
    MKTime * _importTime;
    unsigned long long  _size;
    double  _totalImportTime;
    long long  _type;
}

@property (nonatomic) <MKMigratorDelegate> *delegate;
@property (nonatomic) long long type;

+ (void)initialize;

- (void).cxx_destruct;
- (void)addError:(id)arg1;
- (void)cancel;
- (id)delegate;
- (void)import;
- (bool)importAndWait;
- (unsigned long long)importCount;
- (unsigned long long)importErrorCount;
- (double)importTime;
- (id)init;
- (void)migratorDidAppendDataSize:(unsigned long long)arg1;
- (void)migratorDidFailWithImportError:(id)arg1;
- (void)migratorDidFailWithImportError:(id)arg1 count:(unsigned long long)arg2;
- (void)migratorDidImport;
- (void)migratorDidImportWithCount:(unsigned long long)arg1;
- (void)migratorDidMeasureImport;
- (void)migratorDidResetImport;
- (void)migratorWillMeasureImport;
- (void)sendAnalytics;
- (void)setDelegate:(id)arg1;
- (void)setType:(long long)arg1;
- (unsigned long long)size;
- (long long)type;

@end
