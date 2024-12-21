/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
 */

@interface LARatchet : NSObject {
    LAContext * _context;
    NSString * _identifier;
    LARatchetManager * _ratchetManager;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)armWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelWithReason:(id)arg1 completion:(id /* block */)arg2;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setContext:(id)arg1;
- (void)stateWithCompletion:(id /* block */)arg1;

@end