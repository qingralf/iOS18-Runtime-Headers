/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPAudio : NSObject <AVAssetResourceLoaderDelegate, LPCodable, NSSecureCoding> {
    NSString * _MIMEType;
    AVURLAsset * _asset;
    NSData * _data;
    NSURL * _fileURL;
    NSObject<OS_dispatch_queue> * _mediaLoadingQueue;
    LPAudioProperties * _properties;
    NSURL * _streamingURL;
}

@property (nonatomic, readonly, copy) NSString *MIMEType;
@property (nonatomic, readonly) AVAsset *_asset;
@property (nonatomic, readonly) bool _canEncodeWithoutComputation;
@property (nonatomic, readonly) unsigned long long _encodedSize;
@property (nonatomic, readonly, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) LPAudioProperties *properties;
@property (nonatomic, readonly, retain) NSURL *streamingURL;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)_asset;
- (bool)_canEncodeWithoutComputation;
- (unsigned long long)_encodedSize;
- (id)_initWithAudio:(id)arg1;
- (bool)_isSubstitute;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)init;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithStreamingURL:(id)arg1 properties:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)properties;
- (bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)setFileURL:(id)arg1;
- (id)streamingURL;

@end
