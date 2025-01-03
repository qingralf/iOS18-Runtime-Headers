/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUITemplatedStackSnippetView : UIView <SiriUITemplatedView> {
    UIView * _auxiliaryView;
    double  _auxiliaryViewHeight;
    <SiriUITemplatedStackSnippetViewDataSource> * _dataSource;
    <SiriUITemplatedStackSnippetViewDelegate> * _delegate;
    NSMutableArray * _keylines;
    UILabel * _navigationTitleLabel;
    UIImageView * _sashImageView;
    UIView * _sashOverlayView;
    UILabel * _sashTitleLabel;
    NSMutableArray * _stackedSubviews;
    UITapGestureRecognizer * _tapRecognizer;
    NSMutableSet * _templateSubviews;
    UIView * _touchInterceptView;
}

@property (nonatomic, readonly) UIView *auxiliaryView;
@property (nonatomic) <SiriUITemplatedStackSnippetViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SiriUITemplatedStackSnippetViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *stackedSubviews;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } templatedContentMargins;

- (void).cxx_destruct;
- (void)_handleTapGesture:(id)arg1;
- (void)_triggerLayoutAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)addTemplateSubview:(id)arg1;
- (void)adjustAuxiliaryViewHeight:(double)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)auxiliaryView;
- (id)dataSource;
- (id)delegate;
- (double)desiredHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setAuxiliaryView:(id)arg1 atIndex:(unsigned long long)arg2 initialHeight:(double)arg3 animated:(bool)arg4 completion:(id /* block */)arg5;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)stackedSubviews;
- (void)templateSubviewWantsToBeRemovedFromHierarchy:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })templatedContentMargins;

@end
