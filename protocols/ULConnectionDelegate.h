/* Generated by RuntimeBrowser.
 */

@protocol ULConnectionDelegate <NSObject>

@optional

- (void)connection:(ULConnection *)arg1 didEnableMicrolocationAtCurrentLocationWithError:(NSError *)arg2;
- (void)connection:(ULConnection *)arg1 didFailWithError:(NSError *)arg2;
- (void)connection:(ULConnection *)arg1 didUpdatePrediction:(ULPrediction *)arg2;
- (void)connection:(ULConnection *)arg1 didUpdateServiceStatus:(ULServiceStatus *)arg2;

@end