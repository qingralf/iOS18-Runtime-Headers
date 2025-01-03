/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceAccess.framework/DeviceAccess
 */

@interface DADeviceSettings : NSObject <CUXPCCodable, NSCopying> {
    NSString * _SSID;
    NSData * _bridgingIdentifier;
    NSString * _displayName;
    UTType * _iconType;
    bool  _userInitiated;
}

@property (nonatomic, copy) NSString *SSID;
@property (nonatomic, copy) NSData *bridgingIdentifier;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) UTType *iconType;
@property (nonatomic) bool userInitiated;

- (void).cxx_destruct;
- (id)SSID;
- (id)bridgingIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)displayName;
- (void)encodeWithXPCObject:(id)arg1;
- (id)iconType;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (void)setBridgingIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIconType:(id)arg1;
- (void)setSSID:(id)arg1;
- (void)setUserInitiated:(bool)arg1;
- (bool)userInitiated;

@end
