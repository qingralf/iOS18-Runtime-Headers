/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitCore.framework/HomeKitCore
 */

@interface HMCDHomeModel : NSManagedObject

@property (nonatomic, copy) NSSet *accessories;
@property (nonatomic, retain) HMCDHomesTopologyModel *homesTopology;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSSet *rooms;
@property (nonatomic, copy) NSSet *users;
@property (nonatomic, copy) NSSet *zones;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
