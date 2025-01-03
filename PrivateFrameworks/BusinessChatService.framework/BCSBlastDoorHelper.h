/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSBlastDoorHelper : NSObject {
    IMMessagesBlastDoorInterface * _blastdoor;
    <BCSBlastDoorImageCache> * _store;
}

@property (nonatomic, retain) <BCSBlastDoorImageCache> *store;

+ (id)defaultHelper;

- (void).cxx_destruct;
- (id)_blastDoorImagePreviewFromImageURL:(id)arg1 maxPixelDimension:(float)arg2 scale:(float)arg3 error:(id*)arg4;
- (id)_dataFromCGImageRef:(struct CGImage { }*)arg1;
- (id)_fileURLAfterWritingData:(id)arg1 extension:(id)arg2 error:(id*)arg3;
- (id)initWithPersistentStore:(id)arg1;
- (id)safeCSSFromData:(id)arg1 error:(id*)arg2;
- (id)safeImageFromImage:(id)arg1 maxPixelDimension:(float)arg2 scale:(float)arg3 error:(id*)arg4;
- (id)safeImageURLFromImage:(id)arg1 imageFormat:(id)arg2 error:(id*)arg3;
- (id)safeImageURLFromImage:(id)arg1 imageFormat:(id)arg2 maxPixelDimension:(float)arg3 scale:(float)arg4 error:(id*)arg5;
- (id)safeImageURLFromImageURL:(id)arg1 error:(id*)arg2;
- (id)safeImageURLFromImageURL:(id)arg1 maxPixelDimension:(float)arg2 scale:(float)arg3 error:(id*)arg4;
- (void)setStore:(id)arg1;
- (id)store;
- (void)warmUpBlastDoor;

@end
