/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIToggleViewController : CCUIButtonModuleViewController {
    CCUIToggleModule * _module;
}

@property (nonatomic) CCUIToggleModule *module;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_reconfigureView;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;
- (id)module;
- (double)preferredExpandedContentHeight;
- (void)reconfigureView;
- (void)refreshStateAnimated:(bool)arg1;
- (void)setContentRenderingMode:(unsigned long long)arg1;
- (void)setModule:(id)arg1;
- (bool)shouldFinishTransitionToExpandedContentModule;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end