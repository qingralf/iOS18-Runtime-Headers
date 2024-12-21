/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICHostedNotesAppearanceCoordinator : NSObject {
    <ICHostedNotesAppearanceCoordinating> * _delegate;
    UIViewController * _modeButtonHidingPresentedViewController;
}

@property (nonatomic) <ICHostedNotesAppearanceCoordinating> *delegate;
@property (nonatomic, readonly) _UIHostedWindowScene *hostedWindowScene;
@property (nonatomic, readonly) NSSet *modeButtonHidingModalTypes;
@property (nonatomic, readonly) NSSet *modeButtonHidingPopoverTypes;
@property (nonatomic, retain) UIViewController *modeButtonHidingPresentedViewController;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)delegate;
- (void)didDismissViewController:(id)arg1;
- (id)hostedWindowScene;
- (id)initWithDelegate:(id)arg1;
- (id)modeButtonHidingModalTypes;
- (id)modeButtonHidingPopoverTypes;
- (id)modeButtonHidingPresentedViewController;
- (void)setDelegate:(id)arg1;
- (void)setModeButtonHidingPresentedViewController:(id)arg1;
- (bool)shouldHideModeButtonWithPresentedViewController:(id)arg1;
- (void)updateAppearance;
- (id)view;
- (id)viewController;
- (void)willDismissViewController:(id)arg1;
- (void)willPresentViewController:(id)arg1;

@end