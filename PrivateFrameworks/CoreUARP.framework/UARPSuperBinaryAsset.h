/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
 */

@interface UARPSuperBinaryAsset : NSObject {
    UARPAssetTag * _assetTag;
    UARPAssetVersion * _assetVersion;
    unsigned long long  _formatVersion;
    NSMutableData * _metaData;
    UARPSuperBinaryMetaDataTable * _metaDataTable;
    NSMutableArray * _payloads;
    NSURL * _plist;
    NSDictionary * _plistDictionary;
    NSURL * _plistMetaData;
    struct UARPSuperBinaryHeader { 
        unsigned int superBinaryFormatVersion; 
        unsigned int superBinaryHeaderLength; 
        unsigned int superBinaryLength; 
        struct UARPVersion { 
            unsigned int major; 
            unsigned int minor; 
            unsigned int release; 
            unsigned int build; 
        } superBinaryVersion; 
        unsigned int superBinaryMetadataOffset; 
        unsigned int superBinaryMetadataLength; 
        unsigned int payloadHeadersOffset; 
        unsigned int payloadHeadersLength; 
    }  _superBinaryHeader;
    NSDate * _timeCreated;
    NSMutableArray * _tlvs;
    NSURL * _url;
}

@property (readonly) UARPAssetTag *assetTag;
@property (readonly) UARPAssetVersion *assetVersion;
@property (readonly) NSArray *payloads;
@property (readonly) NSDate *timeCreated;
@property (readonly) NSArray *tlvs;
@property (readonly) NSURL *url;

+ (bool)versionFromBNIString:(id)arg1 version:(struct UARPVersion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg2;
+ (bool)versionFromString:(id)arg1 version:(struct UARPVersion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg2;

- (void).cxx_destruct;
- (void)addMetaDataTLV:(id)arg1;
- (void)addPayload:(id)arg1;
- (id)assetTag;
- (id)assetVersion;
- (id)computeHash;
- (bool)decomposeToURL:(id)arg1 error:(id*)arg2;
- (id)description;
- (bool)expandHeadersAndTLVs:(id*)arg1;
- (bool)expandPlistWithPayloadsFolder:(id)arg1 error:(id*)arg2;
- (bool)exportSuperBinaryContentToFilepath:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 error:(id*)arg3;
- (id)init;
- (id)initWithFormatVersion:(unsigned long long)arg1 assetVersion:(id)arg2;
- (id)initWithFormatVersion:(id)arg1 majorVersion:(id)arg2 minorVersion:(id)arg3 releaseVersion:(id)arg4 buildVersion:(id)arg5;
- (id)initWithPlist:(id)arg1 metadataPlist:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 assetTag:(id)arg2;
- (bool)parseFromPlistFormatVersion:(id)arg1 error:(id*)arg2;
- (bool)parseFromPlistSuperBinaryMetaDataTLVs:(id)arg1 payloadsURL:(id)arg2 error:(id*)arg3;
- (bool)parseFromPlistSuperBinaryMetaDataValuesTable:(id*)arg1;
- (bool)parseFromPlistSuperBinaryPayloads:(id)arg1 payloadsURL:(id)arg2 error:(id*)arg3;
- (bool)parseFromPlistSuperBinaryVersion:(id)arg1 error:(id*)arg2;
- (id)payloadData:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 error:(id*)arg3;
- (id)payloads;
- (id)prepareMetaData;
- (void)processBVERVersionString:(id)arg1;
- (void)processVersionString:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeMetadata;
- (id)timeCreated;
- (id)tlvs;
- (id)url;
- (bool)writeToURL:(id)arg1 error:(out id*)arg2;
- (bool)writeToURL:(id)arg1 payloadStartOffset:(unsigned long long)arg2 error:(out id*)arg3;

@end
