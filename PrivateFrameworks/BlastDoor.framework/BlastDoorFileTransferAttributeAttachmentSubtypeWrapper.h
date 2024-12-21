/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
 */

@interface BlastDoorFileTransferAttributeAttachmentSubtypeWrapper : NSObject {
    void fileTransferAttribute_AttachmentSubtype;
}

@property (nonatomic, readonly) BlastDoorAudioMessageAttachmentInfo *audioMessage;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorEmojiImageAttachmentInfo *emojiImage;
@property (nonatomic, readonly) BlastDoorLivePhotoAttachmentInfo *livePhoto;
@property (nonatomic, readonly) BlastDoorStickerAttachmentInfo *sticker;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) BlastDoorGeneralAttachmentInfo *unspecified;

- (void).cxx_destruct;
- (id)audioMessage;
- (id)description;
- (id)emojiImage;
- (id)init;
- (id)livePhoto;
- (id)sticker;
- (unsigned long long)type;
- (id)unspecified;

@end