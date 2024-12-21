/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAvatarButton : UIButton {
    CNAvatarView * _avatarView;
    CKConversation * _conversation;
}

@property (nonatomic, retain) CNAvatarView *avatarView;
@property (nonatomic, retain) CKConversation *conversation;

- (void).cxx_destruct;
- (void)_handleConversationChange:(id)arg1;
- (id)avatarView;
- (id)conversation;
- (id)initWithPrimaryAction:(id)arg1;
- (void)layoutSubviews;
- (void)setAvatarView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)updateWithConversation:(id)arg1;

@end