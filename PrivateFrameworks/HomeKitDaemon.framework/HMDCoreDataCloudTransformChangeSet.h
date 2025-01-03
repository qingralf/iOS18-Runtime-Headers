/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCoreDataCloudTransformChangeSet : NSObject {
    NSString * _clientIdentifier;
    NSMutableSet * _deletedModelIDs;
    NSMutableDictionary * _deletes;
    NSUUID * _homeModelID;
    NSMutableSet * _inserts;
    long long  _qualityOfService;
    bool  _shouldTransform;
    NSMutableDictionary * _updates;
}

@property (nonatomic, readonly) NSSet *deletedModelIDs;

- (void).cxx_destruct;
- (id)deletedModelIDs;
- (id)description;

@end
