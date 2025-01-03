/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLEEDMediaItem : NSObject <NSSecureCoding> {
    NSURL * _URL;
    NSString * _assetIdentifier;
    NSData * _authTag;
    bool  _didApplyDelayMitigation;
    long long  _durationCopyMs;
    long long  _durationEncryptionMs;
    long long  _durationTranscodeMs;
    long long  _durationUploadMs;
    NSURL * _encryptedFileURL;
    NSString * _mediaItemFormat;
    NSUUID * _mediaItemID;
    unsigned long long  _mediaItemSizeBytes;
    bool  _metricProcessed;
    unsigned long long  _originalSizeBytes;
    NSString * _sandboxExtension;
    long long  _serverUploadStatus;
    NSURL * _stagingURL;
    long long  _type;
    unsigned long long  _uploadAttempts;
    long long  _uploadStatus;
}

@property (nonatomic, readonly, retain) NSURL *URL;
@property (nonatomic, readonly, retain) NSString *assetIdentifier;
@property (nonatomic, retain) NSData *authTag;
@property (nonatomic) bool didApplyDelayMitigation;
@property (nonatomic) long long durationCopyMs;
@property (nonatomic) long long durationEncryptionMs;
@property (nonatomic) long long durationTranscodeMs;
@property (nonatomic) long long durationUploadMs;
@property (nonatomic, retain) NSURL *encryptedFileURL;
@property (nonatomic, retain) NSString *mediaItemFormat;
@property (nonatomic, retain) NSUUID *mediaItemID;
@property (nonatomic) unsigned long long mediaItemSizeBytes;
@property (nonatomic) bool metricProcessed;
@property (nonatomic) unsigned long long originalSizeBytes;
@property (nonatomic, readonly, retain) NSString *sandboxExtension;
@property (nonatomic) long long serverUploadStatus;
@property (nonatomic, retain) NSURL *stagingURL;
@property (nonatomic, readonly) long long type;
@property (nonatomic) unsigned long long uploadAttempts;
@property (nonatomic) long long uploadStatus;

+ (id)createMediaItemFromDict:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)URL;
- (id)assetIdentifier;
- (id)authTag;
- (id)createMediaItemDict;
- (void)dealloc;
- (id)description;
- (bool)didApplyDelayMitigation;
- (long long)durationCopyMs;
- (long long)durationEncryptionMs;
- (long long)durationTranscodeMs;
- (long long)durationUploadMs;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedFileURL;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 assetIdentifier:(id)arg2 sandboxExtension:(id)arg3 mediaType:(long long)arg4;
- (id)initWithURL:(id)arg1 sandboxExtension:(id)arg2 mediaType:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)mediaItemFormat;
- (id)mediaItemID;
- (unsigned long long)mediaItemSizeBytes;
- (bool)metricProcessed;
- (unsigned long long)originalSizeBytes;
- (id)sandboxExtension;
- (long long)serverUploadStatus;
- (void)setAuthTag:(id)arg1;
- (void)setDidApplyDelayMitigation:(bool)arg1;
- (void)setDurationCopyMs:(long long)arg1;
- (void)setDurationEncryptionMs:(long long)arg1;
- (void)setDurationTranscodeMs:(long long)arg1;
- (void)setDurationUploadMs:(long long)arg1;
- (void)setEncryptedFileURL:(id)arg1;
- (void)setMediaItemFormat:(id)arg1;
- (void)setMediaItemID:(id)arg1;
- (void)setMediaItemSizeBytes:(unsigned long long)arg1;
- (void)setMetricProcessed:(bool)arg1;
- (void)setOriginalSizeBytes:(unsigned long long)arg1;
- (void)setServerUploadStatus:(long long)arg1;
- (void)setStagingURL:(id)arg1;
- (void)setUploadAttempts:(unsigned long long)arg1;
- (void)setUploadStatus:(long long)arg1;
- (id)stagingURL;
- (long long)type;
- (unsigned long long)uploadAttempts;
- (long long)uploadStatus;

@end
