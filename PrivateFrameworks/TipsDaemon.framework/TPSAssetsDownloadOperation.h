/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
 */

@interface TPSAssetsDownloadOperation : TPSAsyncOperation {
    void assetIdentifier;
    void assetURLPath;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  downloadedURL;
    void priority;
    void urlSessionItem;
}

@property (nonatomic, copy) NSString *assetIdentifier;
@property (nonatomic, copy) NSURL *downloadedURL;

- (void).cxx_destruct;
- (id)assetIdentifier;
- (id)downloadedURL;
- (id)init;
- (id)initWithAssetIdentifier:(id)arg1 assetURLPath:(id)arg2;
- (void)main;
- (void)setAssetIdentifier:(id)arg1;
- (void)setDownloadedURL:(id)arg1;

@end
