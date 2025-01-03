/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCSessionPeerConnectionData : NSObject {
    long long  _encryptionPreference;
    NSData * _gckSessionConnectionData;
    bool  _hasIdentitySet;
}

@property (nonatomic) long long encryptionPreference;
@property (nonatomic, retain) NSData *gckSessionConnectionData;
@property (nonatomic) bool hasIdentitySet;

+ (id)connectionDataSegmentWithEncryptionPreference:(long long)arg1 identitySet:(bool)arg2 gckSessionConnectionDataBytes:(void*)arg3 gckSessionConnectionDataLength:(unsigned long long)arg4;

- (void)dealloc;
- (long long)encryptionPreference;
- (id)gckSessionConnectionData;
- (bool)hasIdentitySet;
- (id)initWithConnectionDataBlob:(id)arg1;
- (bool)parseConnectionDataBlob:(id)arg1;
- (bool)parseConnectionDataSegmentWithBytes:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)setEncryptionPreference:(long long)arg1;
- (void)setGckSessionConnectionData:(id)arg1;
- (void)setHasIdentitySet:(bool)arg1;

@end
