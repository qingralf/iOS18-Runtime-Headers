/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CascadeSets.framework/CascadeSets
 */

@interface CCPersistedKeyValueRecord : NSObject <CCDatabaseRecord> {
    NSData * _dataValue;
    NSNumber * _integerValue;
    NSString * _key;
    NSString * _stringValue;
}

@property (nonatomic, readonly) NSData *dataValue;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *integerValue;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *stringValue;
@property (readonly) Class superclass;

+ (id)genSQLCreateStatements;
+ (id)recordFromDatabaseValueRow:(id)arg1;
+ (id)tableName;

- (void).cxx_destruct;
- (id)dataValue;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDatabaseValueRow:(id)arg1;
- (id)integerValue;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMetadataRecord:(id)arg1;
- (id)key;
- (id)stringValue;

@end
