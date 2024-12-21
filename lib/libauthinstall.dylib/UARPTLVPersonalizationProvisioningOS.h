/* Generated by RuntimeBrowser
   Image: /usr/lib/libauthinstall.dylib
 */

@interface UARPTLVPersonalizationProvisioningOS : UARPMetaDataTLV8OS {
    unsigned char  _provisioning;
}

@property (readonly) unsigned char provisioning;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)description;
- (id)generateTLV;
- (id)init;
- (unsigned char)provisioning;
- (void)setProvisioning:(unsigned char)arg1;
- (id)tlvValue;

@end