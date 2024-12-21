/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraOverlayServices.framework/CameraOverlayServices
 */

@interface CAMOverlayServicePicker : CAMAbstractOverlayServiceControl {
    NSString * _captureSessionUniqueID;
    long long  _pickerType;
    NSArray * _valueTitles;
}

@property (nonatomic, readonly) NSString *captureSessionUniqueID;
@property (nonatomic, readonly) long long pickerType;
@property (nonatomic, readonly) NSArray *valueTitles;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)captureSessionUniqueID;
- (long long)controlType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 pickerType:(long long)arg2 captureUniqueID:(id)arg3;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 imageName:(id)arg3 valueTitles:(id)arg4;
- (bool)isContentEqual:(id)arg1;
- (bool)isEnabled;
- (long long)pickerType;
- (id)updateWithIndexValue:(long long)arg1;
- (id)updateWithStyleDictionary:(id)arg1;
- (id)valueTitles;

@end