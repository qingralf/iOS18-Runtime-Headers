/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKRecordMapping : NSObject {
    FCCKRecordSchema * _fromRecordSchema;
    FCCKZoneSchema * _fromZoneSchema;
    FCCKRecordIDMapping * _recordIDMapping;
    FCCKRecordSchema * _toRecordSchema;
    FCCKZoneSchema * _toZoneSchema;
}

@property (nonatomic, readonly) FCCKRecordSchema *fromRecordSchema;
@property (nonatomic, readonly) FCCKZoneSchema *fromZoneSchema;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic, readonly) FCCKRecordIDMapping *recordIDMapping;
@property (nonatomic, readonly) FCCKRecordSchema *toRecordSchema;
@property (nonatomic, readonly) FCCKZoneSchema *toZoneSchema;

- (void).cxx_destruct;
- (id)fromRecordSchema;
- (id)fromZoneSchema;
- (bool)hasChanges;
- (id)initWithFromZoneSchema:(id)arg1 toZoneSchema:(id)arg2 fromRecordSchema:(id)arg3 toRecordSchema:(id)arg4 recordIDMapping:(id)arg5;
- (id)recordIDMapping;
- (id)toRecordSchema;
- (id)toZoneSchema;

@end