/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDCanvasAnimation : NSObject <CAAnimationDelegate> {
    bool  _allAnimationsFinishedBeforeStopping;
    TSUNoCopyDictionary * _animationDictionariesForLayers;
    NSString * _animationID;
    id /* block */  _completionBlock;
    void * _context;
    double  _delay;
    id  _delegate;
    SEL  _didStopSelector;
    double  _duration;
    id /* block */  _filterBlock;
    bool  _firstAnimationDidStart;
    TSDInteractiveCanvasController * _interactiveCanvasController;
    unsigned int  _outstandingAnimationCount;
    bool  _repeatAutoreverses;
    float  _repeatCount;
    NSDate * _startDate;
    CAMediaTimingFunction * _timingFunction;
    bool  _useRepFiltering;
    SEL  _willStartSelector;
}

@property (nonatomic, readonly, retain) NSString *animationID;
@property (nonatomic, readonly) double beginTime;
@property (nonatomic, readonly) NSString *beginTimeMode;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, readonly) void*context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) double delay;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) SEL didStopSelector;
@property (nonatomic) double duration;
@property (nonatomic, copy) id /* block */ filterBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSDInteractiveCanvasController *interactiveCanvasController;
@property (nonatomic) bool repeatAutoreverses;
@property (nonatomic) float repeatCount;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;
@property (nonatomic) bool useRepFiltering;
@property (nonatomic) SEL willStartSelector;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)animationID;
- (double)beginTime;
- (id)beginTimeMode;
- (id /* block */)completionBlock;
- (void*)context;
- (void)dealloc;
- (double)delay;
- (id)delegate;
- (SEL)didStopSelector;
- (double)duration;
- (id /* block */)filterBlock;
- (id)initWithAnimationID:(id)arg1 interactiveCanvasController:(id)arg2 context:(void*)arg3;
- (id)interactiveCanvasController;
- (bool)repeatAutoreverses;
- (float)repeatCount;
- (void)setAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDelay:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidStopSelector:(SEL)arg1;
- (void)setDuration:(double)arg1;
- (void)setFilterBlock:(id /* block */)arg1;
- (void)setRepeatAutoreverses:(bool)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setUseRepFiltering:(bool)arg1;
- (void)setWillStartSelector:(SEL)arg1;
- (id)startDate;
- (id)timingFunction;
- (bool)useRepFiltering;
- (SEL)willStartSelector;

@end
