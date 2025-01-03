/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIAttributedStringView : UIView <SUUIReusableView> {
    long long  _badgePlacement;
    double  _calculatedTopInset;
    bool  _containsLinks;
    long long  _firstLineTopInset;
    SUUIAttributedStringLayout * _layout;
    NSLayoutManager * _layoutManager;
    <SUUILinkHandler> * _linkDelegate;
    NSArray * _requiredBadges;
    long long  _stringTreatment;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _textBounds;
    UIColor * _textColor;
    bool  _textColorFollowsTintColor;
    NSTextContainer * _textContainer;
    NSTextStorage * _textStorage;
    bool  _touchInside;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _trackingRange;
    bool  _trackingTouch;
    UIColor * _treatmentColor;
}

@property (nonatomic) long long badgePlacement;
@property (nonatomic, readonly) double baselineOffset;
@property (nonatomic) bool containsLinks;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double firstBaselineOffset;
@property (nonatomic) long long firstLineTopInset;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUUIAttributedStringLayout *layout;
@property (nonatomic) <SUUILinkHandler> *linkDelegate;
@property (nonatomic, copy) NSArray *requiredBadges;
@property (nonatomic) long long stringTreatment;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) bool textColorFollowsTintColor;
@property (nonatomic, retain) UIColor *treatmentColor;
@property (nonatomic, readonly) bool usesTallCharacterSet;

+ (struct CGSize { double x1; double x2; })sizeWithLayout:(id)arg1 treatment:(long long)arg2;

- (void).cxx_destruct;
- (void)_reloadTopInset;
- (void)_setTouchInside:(bool)arg1;
- (void)_setTrackingTouch:(bool)arg1;
- (void)_setupTapLocatorContainer;
- (bool)_touchInsideLinkText:(struct CGPoint { double x1; double x2; })arg1 linkTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (long long)badgePlacement;
- (double)baselineOffset;
- (bool)containsLinks;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)firstBaselineOffset;
- (long long)firstLineTopInset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layout;
- (id)linkDelegate;
- (id)requiredBadges;
- (void)setBadgePlacement:(long long)arg1;
- (void)setContainsLinks:(bool)arg1;
- (void)setFirstLineTopInset:(long long)arg1;
- (void)setLayout:(id)arg1;
- (void)setLinkDelegate:(id)arg1;
- (void)setRequiredBadges:(id)arg1;
- (void)setStringTreatment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextColorFollowsTintColor:(bool)arg1;
- (void)setTreatmentColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)stringTreatment;
- (id)textColor;
- (bool)textColorFollowsTintColor;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)treatmentColor;
- (bool)usesTallCharacterSet;
- (void)viewWasRecycled;

@end
