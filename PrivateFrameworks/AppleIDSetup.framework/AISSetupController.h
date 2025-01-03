/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleIDSetup.framework/AppleIDSetup
 */

@interface AISSetupController : NSObject {
    __AISSetupController * _implementation;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) __AISSetupController *implementation;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)implementation;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)queue;
- (void)setImplementation:(id)arg1;
- (void)setupWithContext:(id)arg1 completionHandler:(id /* block */)arg2;

@end
