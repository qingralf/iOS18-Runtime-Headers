/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FSKit.framework/FSKit
 */

@interface FSKitDiskArbHelper : NSObject

+ (int)DAMountFSKitVolume:(id)arg1 deviceName:(id)arg2 mountPoint:(id)arg3 volumeName:(id)arg4 mountOptions:(id)arg5;
+ (int)DAMountUserFSVolume:(id)arg1 deviceName:(id)arg2 mountPoint:(id)arg3 volumeName:(id)arg4 auditToken:(struct { unsigned int x1[8]; })arg5 mountOptions:(id)arg6;
+ (int)DAMountUserFSVolume:(id)arg1 deviceName:(id)arg2 mountPoint:(id)arg3 volumeName:(id)arg4 mountOptions:(id)arg5;
+ (id)getFileProviderID;
+ (id)waitForPreviousTasksToComplete:(id)arg1 client:(id)arg2;

@end