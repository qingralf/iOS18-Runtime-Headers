/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreUtilities.framework/AppStoreUtilities
 */

@interface ASUSQLiteStatement : NSObject <ASUSQLiteBinding> {
    ASUSQLiteConnection * _connection;
    struct sqlite3_stmt { } * _statement;
    ASUSQLiteStatement * _strongSelf;
}

@property (nonatomic, readonly, copy) NSString *SQL;
@property (nonatomic, readonly, copy) NSDictionary *columnIndexByName;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isReadOnly, nonatomic, readonly) bool readOnly;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)SQL;
- (void)bindArray:(id)arg1 atPosition:(int)arg2;
- (void)bindData:(id)arg1 atPosition:(int)arg2;
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;
- (void)bindDate:(id)arg1 atPosition:(int)arg2;
- (void)bindDictionary:(id)arg1 atPosition:(int)arg2;
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;
- (void)bindInt:(int)arg1 atPosition:(int)arg2;
- (void)bindNullAtPosition:(int)arg1;
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;
- (void)bindString:(id)arg1 atPosition:(int)arg2;
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;
- (void)bindURL:(id)arg1 atPosition:(int)arg2;
- (void)bindUUID:(id)arg1 atPosition:(int)arg2;
- (int)clearBindings;
- (id)columnIndexByName;
- (int)finalizeStatement;
- (id)initWithStatement:(struct sqlite3_stmt { }*)arg1 onConnection:(id)arg2;
- (bool)isReadOnly;
- (int)reset;
- (int)step;

@end
