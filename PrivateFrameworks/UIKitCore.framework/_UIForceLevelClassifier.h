/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIForceLevelClassifier : NSObject <NSObserver> {
    NSMutableDictionary * _cachedProgressObservables;
    long long  _currentForceLevel;
    double  _currentTouchForceMultiplier;
    <_UIForceLevelClassifierDelegate> * _delegate;
    NSArray * _delegateObservations;
    NSObservationSource * _progressTouchForceObservable;
    bool  _respectsSystemGestureTouchFiltering;
}

@property (nonatomic, readonly) long long currentForceLevel;
@property (nonatomic) double currentTouchForceMultiplier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <_UIForceLevelClassifierDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool respectsSystemGestureTouchFiltering;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessibilityForceSensitivityChanged:(id)arg1;
- (void)_notifyDelegateOfProgress:(double)arg1 toForceLevel:(long long)arg2;
- (long long)currentForceLevel;
- (double)currentTouchForceMultiplier;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)observableForProgressToForceLevel:(long long)arg1;
- (id)observableForProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2;
- (void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)receiveObservedValue:(id)arg1;
- (void)reset;
- (bool)respectsSystemGestureTouchFiltering;
- (void)setCurrentForceLevel:(long long)arg1;
- (void)setCurrentTouchForceMultiplier:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRespectsSystemGestureTouchFiltering:(bool)arg1;
- (void)touchForceMultiplierDidChange;
- (bool)wantsUnclampedForceValues;

@end
