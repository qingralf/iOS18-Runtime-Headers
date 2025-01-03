/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSAsset : NSObject <MMCSAsset, NSCopying, NSSecureCoding> {
    NSString * _GUID;
    NSString * _MMCSAccessHeader;
    NSDate * _MMCSAccessHeaderTimeStamp;
    NSString * _MMCSReceipt;
    NSURL * _MMCSURL;
    NSString * _assetCollectionGUID;
    bool  _assetDataAvailableOnServer;
    NSDate * _batchCreationDate;
    NSError * _error;
    NSData * _fileData;
    NSData * _fileHash;
    NSData * _masterAssetHash;
    unsigned long long  _mediaAssetType;
    NSDictionary * _metadata;
    NSString * _path;
    NSDate * _photoCreationDate;
    unsigned long long  _protocolFileSize;
    NSString * _type;
    id  _userInfo;
}

@property (nonatomic, retain) NSString *GUID;
@property (nonatomic, retain) NSString *MMCSAccessHeader;
@property (nonatomic, retain) NSDate *MMCSAccessHeaderTimeStamp;
@property (nonatomic, retain) NSError *MMCSError;
@property (nonatomic, retain) NSData *MMCSHash;
@property (nonatomic) unsigned int MMCSItemFlags;
@property (nonatomic) unsigned long long MMCSItemID;
@property (nonatomic) unsigned long long MMCSItemSize;
@property (nonatomic, retain) NSString *MMCSReceipt;
@property (nonatomic, retain) NSURL *MMCSURL;
@property (nonatomic, retain) NSString *MMCSUTI;
@property (nonatomic, retain) NSString *assetCollectionGUID;
@property (nonatomic) bool assetDataAvailableOnServer;
@property (nonatomic, retain) NSDate *batchCreationDate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSData *fileData;
@property (nonatomic, retain) NSData *fileHash;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *masterAssetHash;
@property (nonatomic) unsigned long long mediaAssetType;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSDate *photoCreationDate;
@property (nonatomic) unsigned long long protocolFileSize;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) id userInfo;

+ (id)MSASPAssetFromProtocolDictionary:(id)arg1;
+ (id)asset;
+ (id)assetWithAsset:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)GUID;
- (id)MMCSAccessHeader;
- (id)MMCSAccessHeaderTimeStamp;
- (id)MMCSError;
- (id)MMCSHash;
- (unsigned int)MMCSItemFlags;
- (unsigned long long)MMCSItemID;
- (unsigned long long)MMCSItemSize;
- (id)MMCSItemType;
- (int)MMCSOpenNewFileDescriptor;
- (id)MMCSReceipt;
- (id)MMCSURL;
- (id)MMCSUTI;
- (id)MSASPProtocolDictionary;
- (unsigned long long)_fileSize;
- (unsigned long long)_fileSizeOnDisk;
- (void)addMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)assetCollectionGUID;
- (bool)assetDataAvailableOnServer;
- (id)batchCreationDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)fileData;
- (id)fileHash;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPhoto;
- (bool)isVideo;
- (id)masterAssetHash;
- (unsigned long long)mediaAssetType;
- (id)metadata;
- (id)metadataValueForKey:(id)arg1;
- (id)path;
- (id)photoCreationDate;
- (unsigned long long)protocolFileSize;
- (void)setAssetCollectionGUID:(id)arg1;
- (void)setAssetDataAvailableOnServer:(bool)arg1;
- (void)setBatchCreationDate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFileData:(id)arg1;
- (void)setFileHash:(id)arg1;
- (void)setGUID:(id)arg1;
- (void)setMMCSAccessHeader:(id)arg1;
- (void)setMMCSAccessHeader:(id)arg1 andTimeStamp:(id)arg2;
- (void)setMMCSAccessHeaderTimeStamp:(id)arg1;
- (void)setMMCSError:(id)arg1;
- (void)setMMCSHash:(id)arg1;
- (void)setMMCSItemFlags:(unsigned int)arg1;
- (void)setMMCSItemID:(unsigned long long)arg1;
- (void)setMMCSItemSize:(unsigned long long)arg1;
- (void)setMMCSReceipt:(id)arg1;
- (void)setMMCSURL:(id)arg1;
- (void)setMMCSUTI:(id)arg1;
- (void)setMasterAssetHash:(id)arg1;
- (void)setMediaAssetType:(unsigned long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setPath:(id)arg1;
- (void)setPhotoCreationDate:(id)arg1;
- (void)setProtocolFileSize:(unsigned long long)arg1;
- (void)setType:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)type;
- (id)userInfo;

@end
