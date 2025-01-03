/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIControlHostView : UIView <CCUIControlTemplateViewContextMenuDelegate, CCUIControlTemplateViewDelegate, CHUISControlInstanceObserver> {
    void applicationContext;
    void cameraCapturePrewarmReason;
    void controlInstance;
    void delegate;
    void isDisplayingLoadedViewModel;
    void templateView;
}

@property (nonatomic, copy) NSString *cameraCapturePrewarmReason;
@property (nonatomic, retain) CCUIModuleContentMetrics *contentMetrics;
@property (nonatomic, readonly) UIMenu *contextMenu;
@property (nonatomic) double continuousCornerRadius;
@property (nonatomic, readonly) CHUISControlInstance *controlInstance;
@property (nonatomic) <CCUIControlHostViewDelegate> *delegate;
@property (nonatomic) long long gridSizeClass;
@property (nonatomic, readonly) NSString *menuDisplayName;
@property (nonatomic) bool resizing;
@property (nonatomic, readonly) bool showsMenuAsPrimaryAction;

- (void).cxx_destruct;
- (id)cameraCapturePrewarmReason;
- (id)contentMetrics;
- (id)contextMenu;
- (id)contextMenuItems;
- (double)continuousCornerRadius;
- (id)controlInstance;
- (void)controlInstanceDescriptorDidChange:(id)arg1;
- (void)controlInstanceViewModelDidChange:(id)arg1;
- (id)delegate;
- (long long)gridSizeClass;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 instance:(id)arg2;
- (bool)isResizing;
- (void)layoutSubviews;
- (id)menuDisplayName;
- (bool)performPrimaryActionForControlTemplateView:(id)arg1;
- (void)setCameraCapturePrewarmReason:(id)arg1;
- (void)setContentMetrics:(id)arg1;
- (void)setContinuousCornerRadius:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGridSizeClass:(long long)arg1;
- (void)setResizing:(bool)arg1;
- (bool)showsMenuAsPrimaryAction;

@end
