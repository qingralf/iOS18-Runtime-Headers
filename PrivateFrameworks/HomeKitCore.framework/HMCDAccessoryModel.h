/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitCore.framework/HomeKitCore
 */

@interface HMCDAccessoryModel : NSManagedObject

@property (nonatomic, retain) HMCDAppleMediaDeviceModel *appleMediaDevice;
@property (nonatomic) long long category;
@property (nonatomic, copy) NSString *firmwareVersion;
@property (nonatomic, retain) HMCDHomeModel *home;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) HMCDRoomModel *room;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end