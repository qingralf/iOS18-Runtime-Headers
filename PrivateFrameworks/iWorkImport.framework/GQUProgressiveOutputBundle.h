/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQUProgressiveOutputBundle : NSObject <GQUOutputBundle> {
    struct __CFDictionary { } * mAttachmentsURLs;
    struct __CFDictionary { } * mComputedAttachments;
    GQUProgressiveHelper * mHelper;
    bool  mPreviewStarted;
    struct __CFDictionary { } * mQuickLookProperties;
    struct __CFString { } * mUriScheme;
    struct __CFString { } * mUuidStr;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)appendData:(struct __CFData { }*)arg1 mimeType:(struct __CFString { }*)arg2 resourceName:(struct __CFString { }*)arg3;
- (void)closeAttachment:(struct __CFString { }*)arg1;
- (struct __CFString { }*)createUriForResource:(struct __CFString { }*)arg1;
- (void)dealloc;
- (struct __CFURL { }*)getAttachmentURL:(struct __CFString { }*)arg1 mimeType:(struct __CFString { }*)arg2;
- (id)initWithHandler:(id)arg1;
- (void)setCurrentSheetUri:(struct __CFString { }*)arg1;
- (bool)setData:(struct __CFData { }*)arg1 mimeType:(struct __CFString { }*)arg2 forNamedResource:(struct __CFString { }*)arg3;
- (bool)setDataForMainHtmlResource:(struct __CFData { }*)arg1;
- (void)setDocumentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPageElementXPath:(struct __CFString { }*)arg1 withThumbnailsOnLeft:(bool)arg2;
- (void)startProgressiveData;

@end
