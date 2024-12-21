/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
 */

@interface UARPDynamicAssetTmapDatabase : NSObject <NSSecureCoding> {
    UARPSuperBinaryAsset * _asset;
    NSObject<OS_os_log> * _log;
    NSMutableArray * _tmapDatabase;
    NSURL * _url;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)addTmapMapping:(id)arg1;
- (bool)cleanUpTmapDatabaseFiles;
- (bool)createTmapDatabaseFile;
- (bool)decomposeUARP;
- (void)encodeWithCoder:(id)arg1;
- (id)expandMticData:(id)arg1 withEventID:(unsigned int)arg2 appleModelNumber:(id)arg3;
- (id)findTmapDatabaseFileUrl;
- (id)findTmapforAppleModel:(id)arg1;
- (bool)flushToDisk;
- (id)init;
- (id)initTmapDatabase:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)tmapDatabaseFileExists;

@end