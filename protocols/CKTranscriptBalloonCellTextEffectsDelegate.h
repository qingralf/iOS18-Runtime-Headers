/* Generated by RuntimeBrowser.
 */

@protocol CKTranscriptBalloonCellTextEffectsDelegate <NSObject>

@required

- (unsigned long long)transcriptBalloonCell:(CKTranscriptBalloonCell *)arg1 allowedLayoutActionForTextBalloonView:(CKTextBalloonView *)arg2;
- (<_NSCustomTextRenderingDisplayLink> *)transcriptBalloonCell:(CKTranscriptBalloonCell *)arg1 customTextRenderingDisplayLinkForTextBalloonViewTextView:(CKTextBalloonView *)arg2;
- (void)transcriptBalloonCell:(CKTranscriptBalloonCell *)arg1 didChangeRenderBoundsOfTextBalloonView:(CKTextBalloonView *)arg2;
- (void)transcriptBalloonCell:(CKTranscriptBalloonCell *)arg1 didLayoutTextBalloonView:(CKTextBalloonView *)arg2;
- (_TtC7ChatKit36CKMessageDisplayViewLayoutAttributes *)transcriptBalloonCell:(CKTranscriptBalloonCell *)arg1 layoutAttributesForTextBalloonView:(CKTextBalloonView *)arg2 messageDisplayViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 proposedAttributes:(_TtC7ChatKit36CKMessageDisplayViewLayoutAttributes *)arg5;
- (void)transcriptBalloonCell:(CKTranscriptBalloonCell *)arg1 textBalloonView:(CKTextBalloonView *)arg2 didChangeTextEffectPlaybackCandidateStatus:(bool)arg3;
- (void)transcriptBalloonCell:(CKTranscriptBalloonCell *)arg1 willLayoutTextBalloonView:(CKTextBalloonView *)arg2;

@end