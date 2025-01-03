/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISystemKeyboardDockController : UIViewController <UIKeyboardDockViewDelegate> {
    UIKeyboardDockItem * _dictationDockItem;
    bool  _dictationHasUsedServerManualEndpointing;
    struct CGPoint { 
        double x; 
        double y; 
    }  _dictationItemButtonTouchDownLocationInView;
    NSDate * _dictationItemButtonTouchDownTime;
    UIKeyboardDockItem * _dictationRunningDockItem;
    bool  _dictationUsingServerManualEndpointing;
    UIKeyboardDockView * _dockView;
    UIKeyboardDockItem * _globeDockItem;
    struct CGPoint { 
        double x; 
        double y; 
    }  _globeItemButtonTouchDownLocationInView;
    NSDate * _globeItemButtonTouchDownTime;
    bool  _isSuppressingDockItemTouch;
    UIKeyboardDockItem * _keyboardDockItem;
    NSBundle * _priorityGlyphBundle;
    UIButton * _stopDictationButton;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIKeyboardDockView *dockView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_dictationDidBeginNotification:(id)arg1;
- (id)configuredGlyphWithName:(id)arg1;
- (void)customDockItemWasTapped:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)dictationItemButtonWasPressed:(id)arg1 withEvent:(id)arg2 isRunningButton:(bool)arg3;
- (id)dockView;
- (void)globeItemButtonWasPressed:(id)arg1 withEvent:(id)arg2;
- (id)imageConfig;
- (void)keyboardDockView:(id)arg1 didPressDockItem:(id)arg2 withEvent:(id)arg3;
- (void)keyboardItemButtonWasTapped:(id)arg1 withEvent:(id)arg2;
- (void)loadView;
- (void)setDockView:(id)arg1;
- (void)setKeyboardDockItem;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateDockItemsVisibility;
- (void)updateDockItemsVisibilityWithCustomDictationAction:(id)arg1;
- (void)updateRightButtonItemWithCustomAction:(id)arg1;
- (void)viewDidLoad;

@end
