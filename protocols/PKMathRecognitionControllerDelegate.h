/* Generated by RuntimeBrowser.
 */

@protocol PKMathRecognitionControllerDelegate <NSObject>

@required

- (void)mathRecognitionController:(PKMathRecognitionController *)arg1 didUpdateExpressions:(NSSet *)arg2 newItems:(NSSet *)arg3 removedItems:(NSSet *)arg4 mathItems:(NSArray *)arg5;

@optional

- (void)mathRecognitionController:(PKMathRecognitionController *)arg1 didEraseStrokesInExpressions:(NSSet *)arg2;
- (void)mathRecognitionController:(PKMathRecognitionController *)arg1 solveStateChangedForExpressions:(NSSet *)arg2 mathItems:(NSArray *)arg3;
- (double)mathRecognitionControllerTimestampForLatestUserInteraction:(PKMathRecognitionController *)arg1;

@end