/* Generated by RuntimeBrowser.
 */

@protocol GPInProcessMagicPaperViewControllerDelegate <NSObject>

@required

- (void)magicPaperViewController:(GPInProcessMagicPaperViewController *)arg1 didGenerateImage:(UIImage *)arg2;
- (void)magicPaperViewControllerDidCancel:(GPInProcessMagicPaperViewController *)arg1;

@optional

- (void)magicPaperViewControllerDidPrewarmEffect:(GPInProcessMagicPaperViewController *)arg1;
- (<GPMagicPaperImageGenerationEvent> *)magicPaperViewControllerImageGenerationEvent:(GPInProcessMagicPaperViewController *)arg1;

@end