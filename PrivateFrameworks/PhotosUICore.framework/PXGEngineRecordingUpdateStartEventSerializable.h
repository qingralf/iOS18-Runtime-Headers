/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGEngineRecordingUpdateStartEventSerializable : NSObject <PXGTungstenRecordingSerializable> {
    unsigned long long  _needsUpdate;
    unsigned long long  _pendingUpdateEntities;
    double  _targetTimestamp;
}

@property (nonatomic) unsigned long long needsUpdate;
@property (nonatomic) unsigned long long pendingUpdateEntities;
@property (nonatomic) double targetTimestamp;

- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)arg1;
- (unsigned long long)needsUpdate;
- (unsigned long long)pendingUpdateEntities;
- (void)setNeedsUpdate:(unsigned long long)arg1;
- (void)setPendingUpdateEntities:(unsigned long long)arg1;
- (void)setTargetTimestamp:(double)arg1;
- (double)targetTimestamp;

@end
