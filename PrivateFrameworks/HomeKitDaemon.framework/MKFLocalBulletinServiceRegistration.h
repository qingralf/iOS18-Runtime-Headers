/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface MKFLocalBulletinServiceRegistration : MKFLocalBulletinAccessoryRegistration

@property (nonatomic, retain) MKFLocalBulletinServiceGroup *bulletinServiceGroup;
@property (nonatomic) long long serviceInstanceID;

+ (id)fetchRequest;
+ (id)fetchServiceRegistrationForAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 managedObjectContext:(id)arg3;

@end
