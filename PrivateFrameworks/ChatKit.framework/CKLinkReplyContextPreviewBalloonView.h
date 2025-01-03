/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKLinkReplyContextPreviewBalloonView : CKColoredBalloonView <LPLinkViewDelegate> {
    LPLinkView * _linkView;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPLinkView *linkView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_linkViewMetadataDidBecomeComplete:(id)arg1;
- (void)layoutSubviews;
- (id)linkView;
- (void)linkViewNeedsResize:(id)arg1;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setLinkView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;

@end
