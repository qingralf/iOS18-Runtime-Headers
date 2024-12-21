/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DMCEnrollmentProvider.framework/DMCEnrollmentProvider
 */

@interface DMCPayloadDetailsCell : UITableViewCell <UIEditMenuInteractionDelegate> {
    NSString * _copyableText;
    UIEditMenuInteraction * _editMenuInteraction;
    UILongPressGestureRecognizer * _longPress;
}

@property (nonatomic, retain) NSString *copyableText;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIEditMenuInteraction *editMenuInteraction;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addCopyEditMenuAction;
- (void)_didLongPress:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (id)copyableText;
- (id)editMenuInteraction;
- (id)longPress;
- (void)setCopyableText:(id)arg1;
- (void)setDetail:(id)arg1 value:(id)arg2;
- (void)setEditMenuInteraction:(id)arg1;
- (void)setLongPress:(id)arg1;

@end