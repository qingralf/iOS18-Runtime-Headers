/* Generated by RuntimeBrowser.
 */

@protocol CHRecognizingSketch <CHRecognizing>

@required

- (NSCharacterSet *)activeCharacterSet;
- (void)setActiveCharacterSet:(NSCharacterSet *)arg1;
- (NSArray *)sketchRecognitionResultsForDrawing:(CHDrawing *)arg1 options:(NSDictionary *)arg2;

@end
