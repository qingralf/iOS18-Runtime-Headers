/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMigrationContext : NSObject {
    NSMutableDictionary * _byDestinationAssociationTable;
    NSMutableDictionary * _byMappingByDestinationAssociationTable;
    NSMutableDictionary * _byMappingBySourceAssociationTable;
    NSMutableDictionary * _bySourceAssociationTable;
    NSEntityMapping * _currentMapping;
    NSPropertyMapping * _currentPropertyMapping;
    unsigned long long  _currentStep;
    NSString * _destinationConfigurationForCloudKitValidation;
    NSMigrationManager * _migrationManager;
}

- (void)dealloc;
- (id)initWithMigrationManager:(id)arg1;

@end