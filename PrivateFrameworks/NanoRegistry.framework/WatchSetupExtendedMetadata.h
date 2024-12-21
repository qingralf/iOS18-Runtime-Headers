/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface WatchSetupExtendedMetadata : NSObject {
    unsigned int  _encodedSystemVersion;
    unsigned char  _pairingVersion;
    bool  _postFailSafeObliteration;
    unsigned char  _productVersionMajor;
    unsigned char  _productVersionMinor;
}

@property (nonatomic, readonly) unsigned int encodedSystemVersion;
@property (nonatomic, readonly) unsigned char pairingVersion;
@property (nonatomic, readonly) bool postFailSafeObliteration;
@property (nonatomic, readonly) unsigned char productVersionMajor;
@property (nonatomic, readonly) unsigned char productVersionMinor;

+ (bool)_consistencyCheckForPairingVersion:(unsigned char)arg1 productVersionMajor:(unsigned char)arg2 productVersionMinor:(unsigned char)arg3 postFailSafeObliteration:(bool)arg4 encodedSystemVersion:(unsigned int)arg5;

- (unsigned int)encodedSystemVersion;
- (id)initWithPackedExtendedMetadataData:(id)arg1;
- (id)initWithPairingVersion:(unsigned char)arg1 productVersionMajor:(unsigned char)arg2 productVersionMinor:(unsigned char)arg3 postFailSafeObliteration:(bool)arg4 encodedSystemVersion:(unsigned int)arg5;
- (id)packedExtendedMetadataData;
- (unsigned char)pairingVersion;
- (bool)postFailSafeObliteration;
- (unsigned char)productVersionMajor;
- (unsigned char)productVersionMinor;

@end