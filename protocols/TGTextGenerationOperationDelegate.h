/* Generated by RuntimeBrowser.
 */

@protocol TGTextGenerationOperationDelegate <NSObject>

@required

- (void)didStartOperationWithExecutionUUID:(NSUUID *)arg1;
- (void)operationWithExecutionUUID:(NSUUID *)arg1 didFailWithError:(NSError *)arg2;
- (void)operationWithExecutionUUID:(NSUUID *)arg1 didFinishWithOutputs:(NSArray *)arg2;
- (void)operationWithExecutionUUID:(NSUUID *)arg1 didStreamOutput:(TGTextGenerationOutput *)arg2;

@end
