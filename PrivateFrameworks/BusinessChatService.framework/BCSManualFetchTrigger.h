/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSManualFetchTrigger : NSObject <BCSFetchTrigger> {
    id /* block */  _fetchBlock;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)scheduleFetchBlock:(id /* block */)arg1;
- (void)triggerFetchForReason:(unsigned long long)arg1 completion:(id /* block */)arg2;

@end
