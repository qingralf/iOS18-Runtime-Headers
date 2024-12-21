/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDActionSetNotificationRegistration : HMFObject {
    NSUUID * _actionSetUUID;
    NSString * _deviceIdsDestination;
    bool  _enabled;
    NSDate * _lastModified;
    NSUUID * _userUUID;
}

@property (readonly) NSUUID *actionSetUUID;
@property (readonly, copy) NSString *deviceIdsDestination;
@property (readonly) bool enabled;
@property (readonly) NSDate *lastModified;
@property (readonly) NSUUID *userUUID;

- (void).cxx_destruct;
- (id)actionSetUUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceIdsDestination;
- (bool)enabled;
- (unsigned long long)hash;
- (id)initWithActionSetUUID:(id)arg1 deviceIdsDestination:(id)arg2 userUUID:(id)arg3 lastModified:(id)arg4 enabled:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (id)lastModified;
- (id)userUUID;

@end