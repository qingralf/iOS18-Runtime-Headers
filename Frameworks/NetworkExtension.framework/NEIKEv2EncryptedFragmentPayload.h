/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2EncryptedFragmentPayload : NEIKEv2EncryptedPayload {
    unsigned int  _fragmentNumber;
    unsigned int  _totalFragments;
}

+ (id)copyTypeDescription;

- (bool)hasRequiredFields;
- (bool)parsePayloadData;
- (unsigned long long)type;

@end