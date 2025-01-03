/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAutomaticallyPlacedStickerCommSafetySendContext : CKCommSafetySendContext {
    id /* block */  _animationCompletionHandler;
    CKMessagePartChatItem * _chatItem;
    CKMessagePartChatItem * _parentChatItem;
    IMSticker * _sticker;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _stickerFrame;
    CKStickerReactionSession * _stickerReactionSession;
}

@property (nonatomic, readonly, copy) id /* block */ animationCompletionHandler;
@property (nonatomic, readonly) CKMessagePartChatItem *chatItem;
@property (nonatomic, readonly) CKMessagePartChatItem *parentChatItem;
@property (nonatomic, readonly) IMSticker *sticker;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } stickerFrame;
@property (nonatomic, readonly) CKStickerReactionSession *stickerReactionSession;

+ (id)contextKey;
+ (id)contextWithAutomaticallyPlacedSticker:(id)arg1 stickerReactionSession:(id)arg2 chatItem:(id)arg3 parentChatItem:(id)arg4 stickerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 animationCompletionHandler:(id /* block */)arg6;

- (void).cxx_destruct;
- (id /* block */)animationCompletionHandler;
- (id)chatItem;
- (id)initWithAutomaticallyPlacedSticker:(id)arg1 stickerReactionSession:(id)arg2 chatItem:(id)arg3 parentChatItem:(id)arg4 stickerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 animationCompletionHandler:(id /* block */)arg6;
- (id)parentChatItem;
- (id)sticker;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stickerFrame;
- (id)stickerReactionSession;

@end
