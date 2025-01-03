/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices
 */

@interface LNFetchSuggestedActionsFromViewAppIntentConnectionOperation : LNInterfaceConnectionOperation {
    id /* block */  _completionHandler;
    NSArray * _results;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSArray *results;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)results;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setResults:(id)arg1;
- (void)start;

@end
