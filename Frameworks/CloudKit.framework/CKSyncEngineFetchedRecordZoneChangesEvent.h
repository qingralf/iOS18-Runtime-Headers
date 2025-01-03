/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSyncEngineFetchedRecordZoneChangesEvent : CKSyncEngineEvent {
    NSArray * _deletions;
    NSArray * _modifications;
    NSArray * _zoneAttributesModifications;
}

@property (nonatomic, readonly, copy) NSArray *deletions;
@property (nonatomic, readonly, copy) NSArray *modifications;
@property (nonatomic, readonly, copy) NSArray *zoneAttributesModifications;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)deletions;
- (id)initWithModifications:(id)arg1 deletions:(id)arg2 zoneAttributesModifications:(id)arg3;
- (id)modifications;
- (long long)type;
- (id)zoneAttributesModifications;

@end
