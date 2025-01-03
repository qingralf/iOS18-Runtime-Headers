/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchQuickActionsServices.framework/WatchQuickActionsServices
 */

@interface WatchQuickAction : NSObject <NSSecureCoding, WatchQuickActionHostObserver, _UIViewBoundingPathChangeObserver> {
    id /* block */  _activationCallback;
    bool  _allowsResizingAnimations;
    <WatchQuickActionAnimationHandler> * _animationHandler;
    <WQAHostLifecycleObserver> * _hostLifecycleObserver;
    UIView * _hostingView;
    NSString * _identifier;
    long long  _internalQuickActionType;
    NSString * _localizedTitle;
    double  _overlayCornerRadius;
    struct CGPoint { 
        double x; 
        double y; 
    }  _overlayInset;
    UIColor * _overlayTintColor;
    UIBezierPath * _path;
    bool  _started;
    UIView * _viewToOverlay;
    long long  _visualsToken;
}

@property (nonatomic, readonly, copy) id /* block */ activationCallback;
@property (nonatomic) bool allowsResizingAnimations;
@property (nonatomic) <WatchQuickActionAnimationHandler> *animationHandler;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <WQAHostLifecycleObserver> *hostLifecycleObserver;
@property (nonatomic) UIView *hostingView;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) long long internalQuickActionType;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) double overlayCornerRadius;
@property (nonatomic) struct CGPoint { double x1; double x2; } overlayInset;
@property (nonatomic, retain) UIColor *overlayTintColor;
@property (nonatomic, retain) UIBezierPath *path;
@property (nonatomic) bool started;
@property (readonly) Class superclass;
@property (nonatomic) UIView *viewToOverlay;
@property (nonatomic) long long visualsToken;

+ (id)quickActionFromSerializedData:(id)arg1 error:(id*)arg2;
+ (id)serializedDataFromQuickAction:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyOverlayFromView:(id)arg1 withHostingView:(id)arg2;
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(bool)arg2;
- (void)_commonInitLocalizedTitle:(id)arg1 quickActionType:(long long)arg2 targetView:(id)arg3 hostingView:(id)arg4 withQuickActivationCallback:(id /* block */)arg5 withQuickActivationEndCallback:(id /* block */)arg6;
- (void)_updateOverlaysIfNecessary;
- (id /* block */)activationCallback;
- (bool)allowsResizingAnimations;
- (id)animationHandler;
- (void)applyBezierPath:(id)arg1 withHostingView:(id)arg2;
- (bool)canShowOverlays;
- (void)cancel;
- (long long)currentVisualsToken;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hostLifecycleObserver;
- (id)hostingView;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedTitle:(id)arg1 activationCallback:(id /* block */)arg2;
- (id)initWithLocalizedTitle:(id)arg1 targetView:(id)arg2 activationCallback:(id /* block */)arg3;
- (id)initWithLocalizedTitle:(id)arg1 targetView:(id)arg2 hostingView:(id)arg3 activationCallback:(id /* block */)arg4;
- (long long)internalQuickActionType;
- (bool)isEqual:(id)arg1;
- (id)localizedTitle;
- (double)overlayCornerRadius;
- (struct CGPoint { double x1; double x2; })overlayInset;
- (id)overlayTintColor;
- (id)path;
- (void)quickActionHostDidInvalidate;
- (id)quickActionHostingView;
- (id)quickActionPath;
- (id)quickActionPrimaryView;
- (long long)quickActionType;
- (void)setAllowsResizingAnimations:(bool)arg1;
- (void)setAnimationHandler:(id)arg1;
- (void)setHostLifecycleObserver:(id)arg1;
- (void)setHostingView:(id)arg1;
- (void)setInternalQuickActionType:(long long)arg1;
- (void)setOverlayCornerRadius:(double)arg1;
- (void)setOverlayInset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOverlayTintColor:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)setViewToOverlay:(id)arg1;
- (void)setVisualsToken:(long long)arg1;
- (void)start;
- (void)startWithCallback:(id /* block */)arg1;
- (bool)started;
- (void)updateLocalizedTitle:(id)arg1;
- (id)viewToOverlay;
- (long long)visualsToken;
- (void)wqa_setHostLifecycleObserver:(id)arg1;

@end
