/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLComputePlanDeviceUsage : NSObject {
    NSArray * _deviceSupportInfoArray;
    <MLComputeDeviceProtocol> * _preferredComputeDevice;
    NSArray * _supportedComputeDevices;
}

@property (nonatomic, readonly, copy) NSArray *deviceSupportInfoArray;
@property (nonatomic, readonly) <MLComputeDeviceProtocol> *preferredComputeDevice;
@property (nonatomic, readonly, copy) NSArray *supportedComputeDevices;

- (void).cxx_destruct;
- (id)deviceSupportInfoArray;
- (id)initWithSupportedComputeDevices:(id)arg1 preferredComputeDevice:(id)arg2 deviceSupportInfoArray:(id)arg3;
- (id)preferredComputeDevice;
- (id)supportInfoForComputeDevice:(id)arg1;
- (id)supportedComputeDevices;

@end