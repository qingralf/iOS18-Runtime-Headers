/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKWebExtensionSQLiteRow : NSObject {
    struct sqlite3_stmt { } * _handle;
    _WKWebExtensionSQLiteStatement * _statement;
}

- (void).cxx_destruct;
- (bool)_isNullAtIndex:(unsigned long long)arg1;
- (bool)boolAtIndex:(unsigned long long)arg1;
- (id)dataAtIndex:(unsigned long long)arg1;
- (double)doubleAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithCurrentRowOfEnumerator:(id)arg1;
- (id)initWithStatement:(id)arg1;
- (long long)int64AtIndex:(unsigned long long)arg1;
- (int)intAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)stringAtIndex:(unsigned long long)arg1;
- (id)uncopiedDataAtIndex:(unsigned long long)arg1;
- (struct RawData { bool x1; void *x2; int x3; })uncopiedRawDataAtIndex:(unsigned long long)arg1;

@end