/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
 */

@interface VOSOutputEvent : NSObject {
    NSString * _rawValue;
    bool  _supportsHaptic;
    bool  _supportsSoundEffect;
}

@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *rawValue;
@property (nonatomic) bool supportsHaptic;
@property (nonatomic) bool supportsSoundEffect;

+ (id)AlertDidAppear;
+ (id)AutofillDidAppear;
+ (id)AutofillDidDismiss;
+ (id)BSIDidCalibrate;
+ (id)BSIDidCarriageReturn;
+ (id)BSIDidDelete;
+ (id)BSIDidDisable;
+ (id)BSIDidEnableCommand;
+ (id)BSIDidEnableTyping;
+ (id)BSIDidEnterChord;
+ (id)BSIDidEnterSpace;
+ (id)BSIDidType;
+ (id)BoundaryEncountered;
+ (id)BrailleDisplayConnected;
+ (id)BrailleDisplayDisconnected;
+ (id)BrailleDisplayReconnectionTriggered;
+ (id)CollaborationOccurred;
+ (id)DidActivateElement;
+ (id)DidBeginPassthrough;
+ (id)DidChangeTextSelectionDirection;
+ (id)DidChangeVolume;
+ (id)DidDisableQuickNav;
+ (id)DidEnableQuickNav;
+ (id)DidEnterSecureText;
+ (id)DidEnterTargetArea;
+ (id)DidEnterTouchContainer;
+ (id)DidFocusOnElement;
+ (id)DidFocusOnScreenRecognitionElement;
+ (id)DidLeaveTargetArea;
+ (id)DidRecognizeMLContent;
+ (id)DidReorderItem;
+ (id)DidScrollByPage;
+ (id)DidSelectAutofill;
+ (id)DidSelectNextRotor;
+ (id)DidSelectPreviousRotor;
+ (id)DidSyncWithSystemFocus;
+ (id)DidWrapBackwards;
+ (id)DidWrapForwards;
+ (id)DockDidAppear;
+ (id)DockDidDisappear;
+ (id)FolderDidClose;
+ (id)FolderDidOpen;
+ (id)FolderWillOpen;
+ (id)InsertionPointDidMove;
+ (id)InteractIn;
+ (id)InteractOut;
+ (id)IsInteractable;
+ (id)ItemDidLoad;
+ (id)ItemIsLoading;
+ (id)ItemMemorizationFailed;
+ (id)ItemMemorizationInProgress;
+ (id)ItemMemorizationSucceeded;
+ (id)KeyboardAppeared;
+ (id)KeyboardDisappeared;
+ (id)NextRotorProgress;
+ (id)NoItemExists;
+ (id)NoResultsFound;
+ (id)NotificationDidAppear;
+ (id)PopoverDidAppear;
+ (id)PreviousRotorProgress;
+ (id)ReachabilityDidBegin;
+ (id)ReachabilityDidEnd;
+ (id)ScreenDidChange;
+ (id)ScreenDidTurnOff;
+ (id)SensitiveContent;
+ (id)Startup;
+ (id)TVDidBeginInteractionWithRotor;
+ (id)TVDidEndInteractionWithRotor;
+ (id)TouchIDAuthenticated;
+ (id)TouchIDFailed;
+ (id)TutorialMagicTapStart;
+ (id)TutorialMagicTapStop;
+ (id)TutorialSuccess;
+ (id)UnknownCommand;
+ (id)allOutputEvents;
+ (id)eventWithStringValue:(id)arg1;

- (void).cxx_destruct;
- (id)_initOutputEventWithRawValue:(id)arg1 supportsSoundEffect:(bool)arg2 supportsHaptic:(bool)arg3;
- (id)description;
- (id)localizedName;
- (id)rawValue;
- (void)setSupportsHaptic:(bool)arg1;
- (void)setSupportsSoundEffect:(bool)arg1;
- (bool)supportsHaptic;
- (bool)supportsSoundEffect;

@end