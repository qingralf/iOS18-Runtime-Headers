/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriEntityMatcher.framework/SiriEntityMatcher
 */

@interface SEMDatabaseCommandBuilder : NSObject {
    SEMSQLCommandCriterion * _criterion;
    NSString * _tableName;
}

@property (nonatomic, readonly) SEMSQLCommandCriterion *criterion;
@property (nonatomic, readonly) NSString *tableName;

- (void).cxx_destruct;
- (id)criterion;
- (id)init;
- (id)initWithTableName:(id)arg1;
- (void)setCommandCriterion:(id)arg1;
- (id)tableName;

@end