/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MDM.framework/MDM
 */

@interface MDMRequestRestartDeviceCommand : MDMRequestBase {
    NSArray * _commandKextPaths;
    NSNumber * _commandNotifyUser;
    NSNumber * _commandRebuildKernelCache;
}

@property (nonatomic, copy) NSArray *commandKextPaths;
@property (nonatomic, copy) NSNumber *commandNotifyUser;
@property (nonatomic, copy) NSNumber *commandRebuildKernelCache;

+ (id)requestType;
+ (id)requestWithRebuildKernelCache:(id)arg1 kextPaths:(id)arg2 notifyUser:(id)arg3;
+ (unsigned long long)requiredAccessRights;

- (void).cxx_destruct;
- (id)commandKextPaths;
- (id)commandNotifyUser;
- (id)commandRebuildKernelCache;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (void)processRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serializeWithType:(short)arg1;
- (void)setCommandKextPaths:(id)arg1;
- (void)setCommandNotifyUser:(id)arg1;
- (void)setCommandRebuildKernelCache:(id)arg1;

@end
