/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMResidentDevice : NSObject <HFHomeContainedObject, HFStateDumpBuildable, HMFLogging, HMFObject, HMObjectMerge, NSSecureCoding> {
    NSString * _IDSDestination;
    NSUUID * _IDSIdentifier;
    unsigned long long  _capabilities;
    _HMContext * _context;
    <HMResidentDeviceDelegate> * _delegate;
    HMDevice * _device;
    NSData * _deviceIRKData;
    bool  _enabled;
    HMHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _residentName;
    unsigned long long  _status;
    bool  _supportsResidentSelection;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (copy) NSString *IDSDestination;
@property (copy) NSUUID *IDSIdentifier;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions; /* unknown property attribute: ? */
@property unsigned long long capabilities;
@property (nonatomic, retain) _HMContext *context;
@property (getter=isCurrentDevice, readonly) bool currentDevice;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <HMResidentDeviceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) HMDevice *device;
@property (readonly, copy) NSData *deviceIRKData;
@property (getter=isEnabled) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *hf_displayName;
@property (nonatomic, readonly) HMAccessory *hf_linkedAccessory;
@property (nonatomic, readonly) HMHome *home;
@property HMHome *home;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription; /* unknown property attribute: ? */
@property (copy) NSString *residentName;
@property (readonly, copy) NSString *shortDescription;
@property unsigned long long status;
@property (readonly) Class superclass;
@property bool supportsResidentSelection;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)IDSDestination;
- (id)IDSIdentifier;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_unconfigure;
- (id)attributeDescriptions;
- (unsigned long long)capabilities;
- (id)context;
- (id)delegate;
- (id)description;
- (id)device;
- (id)deviceIRKData;
- (void)encodeWithCoder:(id)arg1;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCurrentDevice;
- (bool)isEnabled;
- (id)logIdentifier;
- (bool)mergeFromNewObject:(id)arg1;
- (id)name;
- (id)privateDescription;
- (id)residentName;
- (void)setCapabilities:(unsigned long long)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceIRKData:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setIDSDestination:(id)arg1;
- (void)setIDSIdentifier:(id)arg1;
- (void)setResidentName:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setSupportsResidentSelection:(bool)arg1;
- (id)shortDescription;
- (unsigned long long)status;
- (bool)supportsResidentSelection;
- (id)uniqueIdentifier;
- (void)updatedEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_displayName;
- (bool)hf_isEnabled;
- (bool)hf_isReachable;
- (bool)hf_isResidentAppleTV;
- (bool)hf_isResidentiPad;
- (id)hf_linkedAccessory;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
