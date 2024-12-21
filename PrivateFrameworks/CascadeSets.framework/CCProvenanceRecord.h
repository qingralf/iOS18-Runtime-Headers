/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CascadeSets.framework/CascadeSets
 */

@interface CCProvenanceRecord : NSObject <CCDatabaseRecord> {
    NSNumber * _contentHash;
    NSNumber * _contentSequenceNumber;
    NSNumber * _contentSequenceNumberEndOfRun;
    NSNumber * _contentState;
    NSNumber * _deviceRowId;
    NSNumber * _instanceHash;
    NSNumber * _metaContentSequenceNumber;
    NSNumber * _metaContentSequenceNumberEndOfRun;
    NSNumber * _metaContentState;
    NSNumber * _provenanceRowId;
}

@property (nonatomic, readonly) NSNumber *contentHash;
@property (nonatomic, readonly) NSNumber *contentSequenceNumber;
@property (nonatomic, readonly) NSNumber *contentSequenceNumberEndOfRun;
@property (nonatomic, readonly) NSNumber *contentState;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSNumber *deviceRowId;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *instanceHash;
@property (nonatomic, readonly) NSNumber *metaContentSequenceNumber;
@property (nonatomic, readonly) NSNumber *metaContentSequenceNumberEndOfRun;
@property (nonatomic, readonly) NSNumber *metaContentState;
@property (nonatomic, readonly) NSNumber *provenanceRowId;
@property (readonly) Class superclass;

+ (id)genSQLCreateStatements;
+ (id)recordFromDatabaseValueRow:(id)arg1;
+ (id)tableName;

- (void).cxx_destruct;
- (id)contentHash;
- (id)contentSequenceNumber;
- (id)contentSequenceNumberEndOfRun;
- (id)contentState;
- (id)description;
- (id)deviceRowId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDatabaseValueRow:(id)arg1;
- (id)instanceHash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItemRecord:(id)arg1;
- (id)metaContentSequenceNumber;
- (id)metaContentSequenceNumberEndOfRun;
- (id)metaContentState;
- (id)provenanceRowId;

@end