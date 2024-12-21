/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface PageLoad : NSObject {
    NSURL * _URL;
    NSDate * _allSubresourcesLoadedDate;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSizeAtPageLoad;
    NSDate * _domContentLoadedDate;
    NSDate * _endLoadDate;
    NSDate * _endRenderDate;
    long long  _endRenderFrameCount;
    NSDate * _endRenderFrameCountDate;
    NSError * _error;
    NSDate * _firstMeaningfulPaintDate;
    NSDate * _firstVisualLayoutDate;
    struct { 
        int nodes; 
        int bytes; 
    }  _heapAfter;
    struct { 
        int nodes; 
        int bytes; 
    }  _heapBefore;
    unsigned long long  _memoryAfterWarning;
    unsigned long long  _memoryBeforeWarning;
    NSDate * _redirectDate;
    NSURL * _redirectURL;
    NSDate * _startRenderDate;
    long long  _startRenderFrameCount;
    NSDate * _startRenderFrameCountDate;
    int  _status;
    bool  _swapProcess;
    NSTimer * _timer;
    bool  _tooShortToScroll;
    NSDate * _uiProcessStartDate;
    unsigned long long  _uiProcessStartTime;
    NSDate * _webContentProcessStartLoadDate;
    unsigned long long  memoryAfterWarning;
    unsigned long long  memoryBeforeWarning;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) NSDate *allSubresourcesLoadedDate;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSizeAtPageLoad;
@property (nonatomic, retain) NSDate *domContentLoadedDate;
@property (nonatomic, retain) NSDate *endLoadDate;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSDate *firstMeaningfulPaintDate;
@property (nonatomic, retain) NSDate *firstVisualLayoutDate;
@property (nonatomic) struct { int x1; int x2; } heapAfter;
@property (nonatomic) struct { int x1; int x2; } heapBefore;
@property (nonatomic) unsigned long long memoryAfterWarning;
@property (nonatomic) unsigned long long memoryBeforeWarning;
@property (nonatomic, retain) NSDate *redirectDate;
@property (nonatomic, retain) NSURL *redirectURL;
@property (nonatomic, retain) NSDate *startRenderDate;
@property (nonatomic) bool swapProcess;
@property (getter=isTooShortToScroll, nonatomic) bool tooShortToScroll;
@property (nonatomic, retain) NSDate *uiProcessStartDate;
@property (nonatomic) unsigned long long uiProcessStartTime;
@property (nonatomic, retain) NSDate *webContentProcessStartLoadDate;

- (void).cxx_destruct;
- (id)URL;
- (id)allSubresourcesLoadedDate;
- (struct CGSize { double x1; double x2; })contentSizeAtPageLoad;
- (void)dealloc;
- (id)description;
- (id)domContentLoadedDate;
- (id)endLoadDate;
- (id)error;
- (void)finishRenderFps:(id)arg1;
- (void)finishRenderTime:(id)arg1;
- (id)firstMeaningfulPaintDate;
- (id)firstVisualLayoutDate;
- (double)framesPerSecond;
- (struct { int x1; int x2; })heapAfter;
- (struct { int x1; int x2; })heapBefore;
- (id)initWithURL:(id)arg1 withProcessSwap:(bool)arg2;
- (bool)isTooShortToScroll;
- (unsigned long long)memoryAfterWarning;
- (unsigned long long)memoryBeforeWarning;
- (id)redirectDate;
- (id)redirectURL;
- (double)renderDuration;
- (void)setAllSubresourcesLoadedDate:(id)arg1;
- (void)setContentSizeAtPageLoad:(struct CGSize { double x1; double x2; })arg1;
- (void)setDomContentLoadedDate:(id)arg1;
- (void)setEndLoadDate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFirstMeaningfulPaintDate:(id)arg1;
- (void)setFirstVisualLayoutDate:(id)arg1;
- (void)setHeapAfter:(struct { int x1; int x2; })arg1;
- (void)setHeapBefore:(struct { int x1; int x2; })arg1;
- (void)setMemoryAfterWarning:(unsigned long long)arg1;
- (void)setMemoryBeforeWarning:(unsigned long long)arg1;
- (void)setRedirectDate:(id)arg1;
- (void)setRedirectURL:(id)arg1;
- (void)setStartRenderDate:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setSwapProcess:(bool)arg1;
- (void)setTimer:(id)arg1;
- (void)setTooShortToScroll:(bool)arg1;
- (void)setURL:(id)arg1;
- (void)setUiProcessStartDate:(id)arg1;
- (void)setUiProcessStartTime:(unsigned long long)arg1;
- (void)setWebContentProcessStartLoadDate:(id)arg1;
- (id)startRenderDate;
- (void)startRenderFps:(id)arg1;
- (void)startRenderTime:(id)arg1;
- (int)status;
- (id)statusString;
- (bool)swapProcess;
- (id)timer;
- (id)uiProcessStartDate;
- (unsigned long long)uiProcessStartTime;
- (id)webContentProcessStartLoadDate;

@end