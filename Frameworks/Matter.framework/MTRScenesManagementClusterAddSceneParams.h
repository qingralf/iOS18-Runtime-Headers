/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRScenesManagementClusterAddSceneParams : NSObject <NSCopying> {
    NSArray * _extensionFieldSets;
    NSNumber * _groupID;
    NSNumber * _sceneID;
    NSString * _sceneName;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _transitionTime;
}

@property (nonatomic, copy) NSArray *extensionFieldSets;
@property (nonatomic, copy) NSNumber *groupID;
@property (nonatomic, copy) NSNumber *sceneID;
@property (nonatomic, copy) NSString *sceneName;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *transitionTime;

- (void).cxx_destruct;
- (id)_encodeAsDataValue:(id*)arg1;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_encodeToTLVReader:(struct PacketBufferTLVReader { unsigned int x1; void *x2; struct Tag { unsigned long long x_3_1_1; } x3; unsigned long long x4; struct TLVBackingStore {} *x5; char *x6; char *x7; unsigned int x8; unsigned int x9; int x10; unsigned short x11; bool x12; struct PacketBufferHandle { struct PacketBuffer {} *x_13_1_1; } x13; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)extensionFieldSets;
- (id)groupID;
- (id)init;
- (id)sceneID;
- (id)sceneName;
- (id)serverSideProcessingTimeout;
- (void)setExtensionFieldSets:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setSceneID:(id)arg1;
- (void)setSceneName:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setTransitionTime:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)transitionTime;

@end
