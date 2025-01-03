/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailItem : NSObject <NSSecureCoding> {
    NSDictionary * _attachments;
    UTType * _contentType;
    NSData * _data;
    bool  _needStopAccessing;
    bool  _needStopAccessingParent;
    FPSandboxingURLWrapper * _parentDirectoryWrapper;
    NSURL * _temporaryURL;
    FPSandboxingURLWrapper * _urlWrapper;
}

@property (copy) NSDictionary *attachments;
@property (nonatomic, retain) UTType *contentType;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) bool needStopAccessing;
@property (nonatomic) bool needStopAccessingParent;
@property (nonatomic, retain) FPSandboxingURLWrapper *parentDirectoryWrapper;
@property (nonatomic, retain) NSURL *temporaryURL;
@property (nonatomic, retain) FPSandboxingURLWrapper *urlWrapper;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachments;
- (void)cleanup;
- (id)contentType;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)fileData;
- (id)fileURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 contentType:(id)arg2;
- (id)initWithURLWrapper:(id)arg1 parentDirectoryWrapper:(id)arg2 contentType:(id)arg3;
- (bool)needStopAccessing;
- (bool)needStopAccessingParent;
- (id)parentDirectoryWrapper;
- (void)setAttachments:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setData:(id)arg1;
- (void)setNeedStopAccessing:(bool)arg1;
- (void)setNeedStopAccessingParent:(bool)arg1;
- (void)setParentDirectoryWrapper:(id)arg1;
- (void)setTemporaryURL:(id)arg1;
- (void)setUrlWrapper:(id)arg1;
- (void)startAccessingIfNeeded;
- (id)temporaryURL;
- (id)urlWrapper;

@end
