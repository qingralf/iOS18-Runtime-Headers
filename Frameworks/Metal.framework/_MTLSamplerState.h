/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLSamplerState : NSObject <MTLSamplerStateSPI> {
    <MTLDevice> * _device;
    unsigned long long  _gpuAddress;
    NSString * _label;
    unsigned long long  _pixelFormat;
    unsigned long long  _resourceIndex;
}

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
@property (readonly) unsigned long long uniqueIdentifier;

- (void)dealloc;
- (id)description;
- (id)device;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)gpuAddress;
- (unsigned long long)gpuHandle;
- (struct MTLResourceID { unsigned long long x1; })gpuResourceID;
- (id)initWithDevice:(id)arg1 samplerDescriptor:(id)arg2;
- (id)label;
- (unsigned long long)pixelFormat;
- (unsigned long long)resourceIndex;
- (unsigned long long)uniqueIdentifier;

@end
