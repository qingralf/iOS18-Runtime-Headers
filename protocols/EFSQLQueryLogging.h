/* Generated by RuntimeBrowser.
 */

@protocol EFSQLQueryLogging <NSObject>

@required

- (void)logQueryString:(NSString *)arg1 label:(NSString *)arg2 firstRowExecutionTimeInNanoseconds:(unsigned long long)arg3 totalExecutionTimeInNanoseconds:(unsigned long long)arg4 numberOfRows:(unsigned long long)arg5;
- (void)submitQueryLogData;

@end
