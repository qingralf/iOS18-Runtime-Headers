/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StickerKit.framework/StickerKit
 */

@interface _TtC10StickerKitP33_19FC6B4034B7CA5830119A91FEF116A027StickerPhotosCreationResult : NSObject {
    void isLive;
    void representations;
    void sticker;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  stickerUUID;
}

@property (nonatomic) bool isLive;
@property (nonatomic, copy) NSArray *representations;
@property (nonatomic, retain) STKSticker *sticker;
@property (nonatomic, copy) NSUUID *stickerUUID;

- (void).cxx_destruct;
- (id)init;
- (bool)isLive;
- (id)representations;
- (void)setIsLive:(bool)arg1;
- (void)setRepresentations:(id)arg1;
- (void)setSticker:(id)arg1;
- (void)setStickerUUID:(id)arg1;
- (id)sticker;
- (id)stickerUUID;

@end
