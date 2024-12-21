/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DisembarkUI.framework/DisembarkUI
 */

@interface DKFindMyProvider : NSObject <DKFindMyProvider> {
    id /* block */  _stateChangeBlock;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ stateChangeBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_locatorStateDidChange:(id)arg1;
- (void)disableFindMyWithPresentingViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchFindMyState:(id /* block */)arg1;
- (void)preheatFindMyState;
- (void)setStateChangeBlock:(id /* block */)arg1;
- (id /* block */)stateChangeBlock;

@end