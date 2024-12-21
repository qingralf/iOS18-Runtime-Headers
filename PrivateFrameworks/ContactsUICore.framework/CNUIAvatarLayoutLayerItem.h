/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIAvatarLayoutLayerItem : NSObject {
    <CNCancelable> * _avatarImageRendererToken;
    NSString * _identifier;
    CALayer * _layer;
}

@property (nonatomic, retain) <CNCancelable> *avatarImageRendererToken;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) CALayer *layer;

- (void).cxx_destruct;
- (id)avatarImageRendererToken;
- (id)identifier;
- (id)initWithLayer:(id)arg1;
- (id)layer;
- (void)resetToken;
- (void)setAvatarImageRendererToken:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLayer:(id)arg1;

@end