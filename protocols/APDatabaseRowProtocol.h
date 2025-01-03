/* Generated by RuntimeBrowser.
 */

@protocol APDatabaseRowProtocol <NSObject>

@required

- (NSSet *)readOnlyColumns;
- (void)setValue:(id)arg1 forColumnName:(NSString *)arg2;
- (<APDatabaseTableProtocol> *)table;
- (long long)typeForColumnName:(NSString *)arg1;
- (id)valueForColumnName:(NSString *)arg1;

@end
