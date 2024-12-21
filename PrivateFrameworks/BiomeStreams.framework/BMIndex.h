/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMIndex : NSObject {
    NSArray * _fields;
    NSString * _name;
    BMSQLSchema * _schema;
    NSString * _streamIdentifier;
    NSString * _viewName;
}

@property (nonatomic, readonly) NSArray *fields;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) BMSQLSchema *schema;
@property (nonatomic, readonly) NSString *streamIdentifier;
@property (nonatomic, readonly) NSString *viewName;

+ (id)_indexTableSchemaWithName:(id)arg1 fields:(id)arg2;
+ (id)_viewNameWithStreamIdentifier:(id)arg1 indexName:(id)arg2;

- (void).cxx_destruct;
- (id)createTableSQL;
- (id)createViewSQL;
- (id)description;
- (id)fields;
- (id)initWithName:(id)arg1 fields:(id)arg2 streamIdentifier:(id)arg3;
- (id)name;
- (id)schema;
- (id)streamIdentifier;
- (id)viewName;

@end