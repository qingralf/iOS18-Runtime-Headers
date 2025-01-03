/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CopresenceCore.framework/CopresenceCore
 */

@interface CopresenceCore.AttachmentDataReport : NSObject <NSSecureCoding> {
    void assetTotalSize;
    void downloadSpeed;
    void endToEndAttachmentLatency;
    void isServerBlocked;
    void isSubscribe;
    void isUpload;
    void loadTime;
    void reportType;
    void responseTime;
    void totalAttachments;
    void totalDownloadBytes;
    void totalUploadBytes;
    void uploadSpeed;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
