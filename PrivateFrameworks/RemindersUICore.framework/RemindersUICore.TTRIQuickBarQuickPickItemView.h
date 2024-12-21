/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore
 */

@interface RemindersUICore.TTRIQuickBarQuickPickItemView : UIView {
    void button;
    void itemID;
    void label;
}

@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic) bool isAccessibilityElement;
@property (nonatomic, retain) UIImage *largeContentImage;
@property (nonatomic, copy) NSString *largeContentTitle;
@property (nonatomic) bool scalesLargeContentImage;
@property (nonatomic) bool showsLargeContentViewer;

- (void).cxx_destruct;
- (bool)accessibilityActivate;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (id)largeContentImage;
- (id)largeContentTitle;
- (bool)scalesLargeContentImage;
- (void)setAccessibilityElements:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;
- (void)setLargeContentImage:(id)arg1;
- (void)setLargeContentTitle:(id)arg1;
- (void)setScalesLargeContentImage:(bool)arg1;
- (void)setShowsLargeContentViewer:(bool)arg1;
- (bool)showsLargeContentViewer;

@end