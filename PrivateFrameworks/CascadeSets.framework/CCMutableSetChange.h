/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CascadeSets.framework/CascadeSets
 */

@interface CCMutableSetChange : NSObject <NSCopying> {
    NSMutableOrderedSet * _addedDevices;
    NSMutableOrderedSet * _addedLocalInstances;
    NSMutableOrderedSet * _allDevices;
    NSMutableOrderedSet * _allLocalInstances;
    NSMutableOrderedSet * _removedDevices;
    NSMutableOrderedSet * _removedLocalInstances;
    CCSharedItem * _sharedItem;
    unsigned short  _sharedItemChangeType;
}

@property (nonatomic, readonly) NSMutableOrderedSet *addedDevices;
@property (nonatomic, readonly) NSMutableOrderedSet *addedLocalInstances;
@property (nonatomic, readonly) NSMutableOrderedSet *allDevices;
@property (nonatomic, readonly) NSMutableOrderedSet *allLocalInstances;
@property (nonatomic, readonly) NSMutableOrderedSet *removedDevices;
@property (nonatomic, readonly) NSMutableOrderedSet *removedLocalInstances;
@property (nonatomic, readonly) CCSharedItem *sharedItem;
@property (nonatomic) unsigned short sharedItemChangeType;

- (void).cxx_destruct;
- (id)addedDevices;
- (id)addedLocalInstances;
- (id)allDevices;
- (id)allLocalInstances;
- (bool)containsChanges;
- (bool)containsContentHash:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSharedItem:(id)arg1 changeType:(unsigned short)arg2;
- (id)removedDevices;
- (id)removedLocalInstances;
- (void)setSharedItemChangeType:(unsigned short)arg1;
- (id)sharedItem;
- (unsigned short)sharedItemChangeType;

@end