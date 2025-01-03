/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPCaptionButtonPresentationProperties : NSObject {
    NSArray * _actions;
    NSAttributedString * _attributedText;
    UIColor * _backgroundColor;
    id /* block */  _callback;
    LPCaptionButtonCollapsedPresentationProperties * _collapsedButton;
    bool  _disabled;
    UIColor * _foregroundColor;
    LPImage * _icon;
    double  _minimumWidth;
    NSNumber * _requiresInlineButton;
    long long  _shape;
    NSString * _text;
    long long  _type;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) LPCaptionButtonCollapsedPresentationProperties *collapsedButton;
@property (nonatomic) bool disabled;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (nonatomic, retain) LPImage *icon;
@property (nonatomic) double minimumWidth;
@property (nonatomic, retain) NSNumber *requiresInlineButton;
@property (nonatomic) long long shape;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)actions;
- (id)attributedText;
- (id)backgroundColor;
- (id /* block */)callback;
- (id)collapsedButton;
- (bool)disabled;
- (id)foregroundColor;
- (id)icon;
- (double)minimumWidth;
- (id)requiresInlineButton;
- (void)setActions:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCallback:(id /* block */)arg1;
- (void)setCollapsedButton:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setMinimumWidth:(double)arg1;
- (void)setRequiresInlineButton:(id)arg1;
- (void)setShape:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)shape;
- (id)text;
- (long long)type;

@end
