/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRDoorLockClusterLockOperationEvent : NSObject <NSCopying> {
    NSArray * _credentials;
    NSNumber * _fabricIndex;
    NSNumber * _lockOperationType;
    NSNumber * _operationSource;
    NSNumber * _sourceNode;
    NSNumber * _userIndex;
}

@property (nonatomic, copy) NSArray *credentials;
@property (nonatomic, copy) NSNumber *fabricIndex;
@property (nonatomic, copy) NSNumber *lockOperationType;
@property (nonatomic, copy) NSNumber *operationSource;
@property (nonatomic, copy) NSNumber *sourceNode;
@property (nonatomic, copy) NSNumber *userIndex;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentials;
- (id)description;
- (id)fabricIndex;
- (id)init;
- (id)lockOperationType;
- (id)operationSource;
- (void)setCredentials:(id)arg1;
- (void)setFabricIndex:(id)arg1;
- (void)setLockOperationType:(id)arg1;
- (void)setOperationSource:(id)arg1;
- (void)setSourceNode:(id)arg1;
- (void)setUserIndex:(id)arg1;
- (id)sourceNode;
- (id)userIndex;

@end
