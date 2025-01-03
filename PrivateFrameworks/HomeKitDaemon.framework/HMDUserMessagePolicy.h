/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDUserMessagePolicy : HMFMessagePolicy <NSMutableCopying> {
    HMDHome * _home;
    NSUUID * _homeUUID;
    bool  _requiresCameraStreamingAccess;
    bool  _requiresRemoteAccess;
    unsigned long long  _userPrivilege;
}

@property (readonly) HMDHome *home;
@property (readonly) NSUUID *homeUUID;
@property bool requiresCameraStreamingAccess;
@property bool requiresRemoteAccess;
@property unsigned long long userPrivilege;
@property (readonly) bool validForAnyHomeTheUserIsPartOf;

+ (id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(bool)arg3;
+ (id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(bool)arg3 requiresCameraStreamingAccess:(bool)arg4;
+ (id)userMessagePolicyWithUserPrivilege:(unsigned long long)arg1 remoteAccessRequired:(bool)arg2;
+ (id)userMessagePolicyWithUserPrivilege:(unsigned long long)arg1 remoteAccessRequired:(bool)arg2 requiresCameraStreamingAccess:(bool)arg3;

- (void).cxx_destruct;
- (id)__initWithHome:(id)arg1 homeUUID:(id)arg2 userPrivilege:(unsigned long long)arg3 remoteAccessRequired:(bool)arg4 requiresCameraStreamingAccess:(bool)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)home;
- (id)homeUUID;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)requiresCameraStreamingAccess;
- (bool)requiresRemoteAccess;
- (void)setRequiresCameraStreamingAccess:(bool)arg1;
- (void)setRequiresRemoteAccess:(bool)arg1;
- (void)setUserPrivilege:(unsigned long long)arg1;
- (unsigned long long)userPrivilege;
- (bool)validForAnyHomeTheUserIsPartOf;

@end
