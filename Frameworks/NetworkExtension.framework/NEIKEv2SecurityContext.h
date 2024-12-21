/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2SecurityContext : NSObject {
    unsigned int  _minimumEncryptedPayloadSize;
}

- (id)constructEncryptedPacketFromPayloadData:(id)arg1 authenticatedHeaders:(id)arg2;
- (id)decryptPayloadData:(id)arg1 authenticatedHeaders:(id)arg2;
- (unsigned int)maximumPayloadSizeWithinLimit:(unsigned int)arg1;
- (unsigned int)overheadForPlaintextLength:(unsigned int)arg1;

@end