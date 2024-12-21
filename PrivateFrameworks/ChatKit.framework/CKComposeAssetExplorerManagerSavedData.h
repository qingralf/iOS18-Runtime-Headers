/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKComposeAssetExplorerManagerSavedData : NSObject {
    NSURL * _appendedVideoURL;
    NSURL * _fileURL;
    NSString * _filename;
    UIImage * _fullyRealizedPreview;
    UIImage * _rawPreview;
    NSDictionary * _transcoderUserInfo;
}

@property (nonatomic, readonly) NSURL *appendedVideoURL;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) UIImage *fullyRealizedPreview;
@property (nonatomic, readonly) UIImage *rawPreview;
@property (nonatomic, readonly) NSDictionary *transcoderUserInfo;

- (void).cxx_destruct;
- (id)appendedVideoURL;
- (id)fileURL;
- (id)filename;
- (id)fullyRealizedPreview;
- (id)initWithFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 fullyRealizedPreview:(id)arg4 rawPreview:(id)arg5 appendedVideoURL:(id)arg6;
- (id)rawPreview;
- (id)transcoderUserInfo;

@end