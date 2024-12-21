/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFeedbackVisualizer : NSObject {
    NSMutableArray * _feedbackWindows;
}

@property (nonatomic, retain) NSMutableArray *feedbackWindows;

+ (id)sharedVisualizer;

- (void).cxx_destruct;
- (id)_colorForEngine:(id)arg1;
- (id)_colorForEngineState:(long long)arg1;
- (id)_colorForFeedback:(id)arg1;
- (id)_monogramForEngine:(id)arg1;
- (void)_showVisualForFeedback:(id)arg1;
- (void)_updateEngine:(id)arg1;
- (void)addEngine:(id)arg1;
- (void)cancelVisualForFeedback:(id)arg1;
- (id)engineLayersForEngine:(id)arg1;
- (id)feedbackWindows;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setFeedbackWindows:(id)arg1;
- (void)showVisualForFeedback:(id)arg1 withDelay:(double)arg2;
- (id)visualFeedbackWindowForScene:(id)arg1;

@end