/* Generated by RuntimeBrowser.
 */

@protocol PQLStatementMetrics

@required

- (double)executionTime;
- (double)preparationTime;
- (unsigned long long)returnedRows;
- (struct sqlite3_stmt { }*)stmt;

@end
