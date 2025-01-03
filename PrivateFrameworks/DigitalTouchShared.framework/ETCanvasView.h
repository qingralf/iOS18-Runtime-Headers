/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETCanvasView : UIView <ETMessageDelegate, UIGestureRecognizerDelegate> {
    NSTimer * _angerDurationLimitTimer;
    UILongPressGestureRecognizer * _angerRecognizer;
    bool  _angerUsesForceTouch;
    bool  _canComposeAnger;
    bool  _canComposeHeartbeat;
    bool  _canComposeKiss;
    bool  _canComposeTap;
    <ETCanvasViewDelegate> * _canvasDelegate;
    ETAngerMessage * _currentAnger;
    ETHeartbeatMessage * _currentHeartbeat;
    ETKissMessage * _currentKissMessage;
    ETGLSketchView * _currentSketchView;
    ETTapMessage * _currentTaps;
    bool  _didIgnoreTouchesBegan;
    UIColor * _drawingColor;
    UITouch * _drawingTouch;
    double  _drawingTouchMovedDistance;
    bool  _drawingTouchStartedStroke;
    NSTimer * _fastTapAllowableMovementTimer;
    NSTimer * _heartbeatDurationTimer;
    UILongPressGestureRecognizer * _heartbeatRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _heartbeatStartCenter;
    NSTimer * _idleTimer;
    bool  _ignoreTouchesUntilAllTouchesEnded;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _ignoredTouchesRect;
    bool  _isComposing;
    UITapGestureRecognizer * _kissRecognizer;
    double  _lastActivityTimestamp;
    double  _lastFastTapTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastPt;
    NSMutableDictionary * _messageIdentifierToDoodleView;
    unsigned short  _messageType;
    ETMessage * _parentMessage;
    bool  _paused;
    UIImageView * _photoView;
    NSMutableSet * _playingMessages;
    SKScene * _scene;
    DTSSceneView * _sceneView;
    NSTimer * _sendMessageTimer;
    bool  _setAlwaysPaused;
    bool  _sketchDidReachSizeLimit;
    UITapGestureRecognizer * _tapRecognizer;
    <ETMessageTimeSource> * _timeSource;
    double  _touchesBeganTimestamp;
    NSMutableSet * _touchesDown;
    bool  _useFastVerticalWisp;
    bool  _usesMediaAppearance;
    AVPlayerLayer * _videoLayer;
    UIView * _videoView;
    double  _wispDelay;
}

@property (nonatomic) bool angerUsesForceTouch;
@property (nonatomic) bool canComposeAnger;
@property (nonatomic) bool canComposeHeartbeat;
@property (nonatomic) bool canComposeKiss;
@property (nonatomic) bool canComposeTap;
@property (nonatomic) <ETCanvasViewDelegate> *canvasDelegate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *drawingColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isComposing;
@property (nonatomic, retain) ETMessage *parentMessage;
@property (getter=isPaused, nonatomic) bool paused;
@property (readonly) Class superclass;
@property (nonatomic) <ETMessageTimeSource> *timeSource;
@property (nonatomic) bool useFastVerticalWisp;
@property (nonatomic) bool usesMediaAppearance;

- (void).cxx_destruct;
- (void)_angerDurationLimitTimerFired;
- (void)_angerRecognized:(id)arg1;
- (double)_angleOfRotationBetweenTwoFingers:(id)arg1;
- (void)_animateOutSketchView:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)_areRecognizersTrackingMultipleFingers;
- (bool)_canComposeExclusiveMessage;
- (void)_checkForIdle;
- (void)_clearDoodleViewForMessage:(id)arg1;
- (void)_clearSendMessageTimer;
- (void)_configureAngerRecognizer;
- (void)_createSketchViewWithColor:(id)arg1 time:(double)arg2 message:(id)arg3;
- (void)_doodleEndedWithTouches:(id)arg1 cancelled:(bool)arg2;
- (void)_endMessage:(id)arg1 withSend:(bool)arg2;
- (void)_fastTapAllowableMovementTimerFired;
- (void)_heartbeatRecognized:(id)arg1;
- (void)_hideAnger;
- (void)_hideHeartbeat;
- (void)_hideHeartbeatTimerFired;
- (bool)_isTapTooRecentAfterKissGesture;
- (void)_kissRecognized:(id)arg1;
- (struct CGPoint { double x1; double x2; })_normalizedGesturePoint:(id)arg1;
- (void)_sendAnger;
- (void)_sendHeartbeat;
- (void)_sendKiss;
- (bool)_sendMessageTimerFired;
- (void)_sendSketch;
- (void)_sendTaps;
- (void)_setIsComposingMessageOfType:(unsigned short)arg1;
- (void)_setSketchesPaused:(bool)arg1;
- (void)_showAngerAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_showHeartbeatAtNormalizedPoint:(struct CGPoint { double x1; double x2; })arg1 rotation:(double)arg2;
- (bool)_sketchInProgress;
- (bool)_sketchesPaused;
- (void)_startCheckForIdleTimer;
- (void)_startDoodleMessageCompositionAtTime:(double)arg1;
- (void)_startFastTapAllowableMovementTimer;
- (void)_startSendMessageTimer;
- (void)_stopCheckForIdleTimer;
- (void)_tapRecognized:(id)arg1;
- (bool)_tapsInProgress;
- (void)_updatePhotoViewFrame;
- (void)_updateRecognizersAtEndOfComposition;
- (void)_updateVideoViewFrame;
- (struct CGPoint { double x1; double x2; })_viewPointNormalizedInSceneSpace:(struct CGPoint { double x1; double x2; })arg1;
- (bool)angerUsesForceTouch;
- (bool)canComposeAnger;
- (bool)canComposeHeartbeat;
- (bool)canComposeKiss;
- (bool)canComposeTap;
- (id)canvasDelegate;
- (void)clearCanvasAnimated:(bool)arg1;
- (id)composedSketchMessage;
- (void)dealloc;
- (id)drawingColor;
- (void)endMessageComposition;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleDotAtX:(float)arg1 Y:(float)arg2 color:(id)arg3 time:(double)arg4 isRemote:(bool)arg5;
- (void)handlePanAtX:(float)arg1 Y:(float)arg2 color:(id)arg3 time:(double)arg4 state:(long long)arg5 isRemote:(bool)arg6;
- (void)handleTapAtX:(float)arg1 Y:(float)arg2 color:(id)arg3 time:(double)arg4 isRemote:(bool)arg5;
- (void)hidePhoto;
- (void)hideVideo;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isComposing;
- (bool)isComposingHeartbeat;
- (bool)isComposingSketch;
- (bool)isPaused;
- (void)layoutSubviews;
- (void)messageDidStopPlaying:(id)arg1;
- (void)messageWillReachSizeLimit:(id)arg1;
- (void)messageWillStopPlaying:(id)arg1;
- (id)parentMessage;
- (void)playMessage:(id)arg1;
- (void)playTestStrokeWithColor:(id)arg1 duration:(double)arg2;
- (void)sendCurrentMessage;
- (void)setAlwaysPaused:(bool)arg1;
- (void)setAngerUsesForceTouch:(bool)arg1;
- (void)setCanComposeAnger:(bool)arg1;
- (void)setCanComposeHeartbeat:(bool)arg1;
- (void)setCanComposeKiss:(bool)arg1;
- (void)setCanComposeTap:(bool)arg1;
- (void)setCanvasDelegate:(id)arg1;
- (void)setDrawingColor:(id)arg1;
- (void)setForceTouchEnabled:(bool)arg1;
- (void)setParentMessage:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setTimeSource:(id)arg1;
- (void)setUseFastVerticalWisp:(bool)arg1;
- (void)setUsesMediaAppearance:(bool)arg1;
- (void)showPhotoForImage:(id)arg1;
- (void)showVideoForPlayer:(id)arg1;
- (void)startDoodleMessageComposition;
- (id)timeSource;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCurrentMessageWithHeartRate:(unsigned long long)arg1;
- (void)updateIgnoredTouchesRectForStatusBarSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)useFastVerticalWisp;
- (bool)usesMediaAppearance;
- (void)willMoveToWindow:(id)arg1;
- (void)wispVisibleSketchViewsWithCompletion:(id /* block */)arg1;

@end
