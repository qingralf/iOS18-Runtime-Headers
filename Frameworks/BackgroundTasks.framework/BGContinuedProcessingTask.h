/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/BackgroundTasks.framework/BackgroundTasks
 */

@interface BGContinuedProcessingTask : BGTask {
    id /* block */  __progressHandler;
    NSString * _reason;
    NSString * _title;
}

@property (setter=_setProgressHandler:, nonatomic, copy) id /* block */ _progressHandler;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 activity:(id)arg2;
- (id /* block */)_progressHandler;
- (void)_setProgressHandler:(id /* block */)arg1;
- (id)description;
- (id)reason;
- (void)setReason:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)updateProgress:(id)arg1;

@end
