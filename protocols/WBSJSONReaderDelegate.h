/* Generated by RuntimeBrowser.
 */

@protocol WBSJSONReaderDelegate

@required

- (bool)jsonReader:(WBSJSONReader *)arg1 appendKey:(NSString *)arg2;
- (bool)jsonReader:(WBSJSONReader *)arg1 error:(NSError *)arg2;
- (bool)jsonReader:(WBSJSONReader *)arg1 scalarValue:(id)arg2;
- (bool)jsonReaderBeginArray:(WBSJSONReader *)arg1;
- (bool)jsonReaderBeginObject:(WBSJSONReader *)arg1;
- (bool)jsonReaderEndArray:(WBSJSONReader *)arg1;
- (bool)jsonReaderEndObject:(WBSJSONReader *)arg1;

@end
