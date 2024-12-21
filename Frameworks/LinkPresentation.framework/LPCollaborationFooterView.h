/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPCollaborationFooterView : LPComponentView {
    id /* block */  _action;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _additionalPadding;
    UIImageView * _indicatorView;
    LPTextView * _optionsView;
    UIView * _separatorView;
    LPCollaborationFooterStyle * _style;
    LPTextView * _subtitleView;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } additionalPadding;

- (void).cxx_destruct;
- (void)_footerTapRecognized:(id)arg1;
- (struct CGSize { double x1; double x2; })_layoutFooterForSize:(struct CGSize { double x1; double x2; })arg1 applyingLayout:(bool)arg2;
- (id)_resolvedGlyphAttachmentImageFromImage:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalPadding;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 properties:(id)arg2 style:(id)arg3;
- (void)layoutComponentView;
- (void)setAdditionalPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateIndicator;

@end