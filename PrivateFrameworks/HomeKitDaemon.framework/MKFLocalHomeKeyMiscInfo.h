/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface MKFLocalHomeKeyMiscInfo : HMDManagedObject

@property (nonatomic, copy) NSUUID *clientWalletKeyUUID;
@property (nonatomic, copy) NSNumber *dismissedWalletKeyUWBUnlockOnboarding;
@property (nonatomic, copy) NSUUID *homeUUID;

+ (id)fetchLocalHomeKeyMiscInfoWithHomeUUID:(id)arg1 managedObjectContext:(id)arg2;
+ (id)fetchRequest;

@end
