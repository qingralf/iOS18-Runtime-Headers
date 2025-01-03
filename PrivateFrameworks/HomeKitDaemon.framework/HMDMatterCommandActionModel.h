/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMatterCommandActionModel : HMDActionModel <HMDBackingStoreModelObjectCDRepresentable>

@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *enforceExecutionOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *matterPathUUIDs;
@property (readonly) Class superclass;

+ (Class)cd_entityClass;
+ (id)properties;

- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;
- (id)decodeSerializedMatterCommands:(id)arg1 home:(id)arg2;
- (id)dependentUUIDs;
- (void)loadModelWithActionInformation:(id)arg1;

@end
