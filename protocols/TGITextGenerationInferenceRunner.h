/* Generated by RuntimeBrowser.
 */

@protocol TGITextGenerationInferenceRunner <NSObject>

@required

- (void)cancel;
- (struct shared_ptr<TGITextGenerationInferenceModelInterface> { struct TGITextGenerationInferenceModelInterface {} *x1; struct __shared_weak_count {} *x2; })model;
- (void)run;
- (void)setModel:(struct shared_ptr<TGITextGenerationInferenceModelInterface> { struct TGITextGenerationInferenceModelInterface {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
