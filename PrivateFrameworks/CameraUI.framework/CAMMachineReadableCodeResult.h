/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMMachineReadableCodeResult : NSObject <CAMMetadataObjectResult> {
    AVMetadataMachineReadableCodeObject * _underlyingMachineReadableCodeObject;
    NSString * _uniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *metadataType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *symbolString;
@property (nonatomic, readonly) unsigned long long syntheticFocusMode; /* unknown property attribute: ? */
@property (nonatomic, readonly) AVMetadataMachineReadableCodeObject *underlyingMachineReadableCodeObject;
@property (nonatomic, readonly) AVMetadataObject *underlyingMetadataObject;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)initWithMachineReadableCodeObject:(id)arg1;
- (bool)isOfSignificantSize;
- (id)metadataType;
- (long long)mrcType;
- (id)symbolString;
- (id)underlyingMachineReadableCodeObject;
- (id)underlyingMetadataObject;
- (id)uniqueIdentifier;

@end
