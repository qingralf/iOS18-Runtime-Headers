/* Generated by RuntimeBrowser.
 */

@protocol SEMDatabaseReadWriteAccess <SEMDatabaseReadOnlyAccess>

@required

- (bool)executeCommand:(SEMDatabaseCommand *)arg1 error:(id*)arg2;
- (bool)executeCommand:(SEMDatabaseCommand *)arg1 error:(id*)arg2 returningRow:(id*)arg3;
- (int)rowsModified:(id*)arg1;

@end
