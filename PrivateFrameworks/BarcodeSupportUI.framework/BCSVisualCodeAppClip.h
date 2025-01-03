/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BarcodeSupportUI.framework/BarcodeSupportUI
 */

@interface BCSVisualCodeAppClip : BCSVisualCode <NSSecureCoding> {
    unsigned long long  _codeVersion;
    NSString * _payloadString;
    NSData * _rawDataPayload;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (long long)codeType;
- (unsigned long long)codeVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayloadString:(id)arg1 version:(unsigned long long)arg2;
- (id)initWithRawPayload:(id)arg1 version:(unsigned long long)arg2;
- (id)payloadString;
- (id)rawPayload;

@end
