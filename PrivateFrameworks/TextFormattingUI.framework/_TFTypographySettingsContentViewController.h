/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextFormattingUI.framework/TextFormattingUI
 */

@interface _TFTypographySettingsContentViewController : UIViewController <TypographyPanel, TypographyPanelDelegate> {
    void _delegate;
    void _typographyPanel;
    void delegate;
}

@property (nonatomic, retain) <__TFTypographySettingsContentViewControllerDelegate> *_delegate;
@property (nonatomic, retain) <TypographyPanelDelegate> *delegate;

- (void).cxx_destruct;
- (id)_delegate;
- (void)_setSelectedFont:(id)arg1;
- (id)delegate;
- (void)hide;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)setSelectedFont:(id)arg1;
- (void)set_delegate:(id)arg1;
- (void)typographyPanelDidUpdateWithFont:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
