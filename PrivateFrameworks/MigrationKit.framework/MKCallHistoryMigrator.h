/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MigrationKit.framework/MigrationKit
 */

@interface MKCallHistoryMigrator : MKMigrator {
    CHManager * _callHistoryManager;
    <MKSIMLabel> * _label;
}

@property (nonatomic) <MKSIMLabel> *label;

- (void).cxx_destruct;
- (void)didImportCallHistory:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (void)import:(id)arg1;
- (void)importCallHistory:(id)arg1 size:(unsigned long long)arg2;
- (void)importDataEncodedInJSON:(id)arg1;
- (void)importNumbers:(id)arg1;
- (id)init;
- (id)label;
- (void)setLabel:(id)arg1;

@end