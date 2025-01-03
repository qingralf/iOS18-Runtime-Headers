/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarouselPreferenceServices.framework/CarouselPreferenceServices
 */

@interface CSLPRFAppViewChoiceView : UIStackView <CSLPRFWatchChoiceProviding> {
    long long  _choice;
    <CSLPRFWatchChoiceDelegate> * _delegate;
    double  _horizontalOffset;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _watchViews;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CSLPRFWatchChoiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalOffset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateSelectedChoice:(long long)arg1;
- (void)_withLock:(id /* block */)arg1;
- (long long)currentWatchChoice;
- (id)delegate;
- (double)horizontalOffset;
- (id)initWithDelegate:(id)arg1 horizontalOffset:(double)arg2 choices:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setHorizontalOffset:(double)arg1;
- (void)setWatchChoice:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
