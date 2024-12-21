/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNotificationPayloadOperation : FCOperation {
    id /* block */  _completionHandler;
    <FCContentContext> * _context;
    NSArray * _notificationItems;
    NSArray * _resultNotificationPayloads;
}

@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)init;
- (id)initWithContext:(id)arg1 notificationItems:(id)arg2;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setCompletionHandler:(id /* block */)arg1;

@end