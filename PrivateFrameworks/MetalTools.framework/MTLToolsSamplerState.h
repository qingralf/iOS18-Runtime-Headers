/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsSamplerState : MTLToolsObject <MTLSamplerState, MTLSamplerStateSPI>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long gpuAddress; /* unknown property attribute: ? */
@property (readonly) unsigned long long gpuHandle; /* unknown property attribute: ? */
@property (readonly) struct MTLResourceID { unsigned long long x1; } gpuResourceID;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, readonly) unsigned long long resourceIndex; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (readonly) unsigned long long uniqueIdentifier; /* unknown property attribute: ? */

- (void)dealloc;
- (id)device;
- (unsigned long long)gpuAddress;
- (unsigned long long)gpuHandle;
- (struct MTLResourceID { unsigned long long x1; })gpuResourceID;
- (id)initWithSamplerState:(id)arg1 descriptor:(id)arg2 device:(id)arg3;
- (id)label;
- (unsigned long long)pixelFormat;
- (unsigned long long)resourceIndex;
- (unsigned long long)uniqueIdentifier;

@end
