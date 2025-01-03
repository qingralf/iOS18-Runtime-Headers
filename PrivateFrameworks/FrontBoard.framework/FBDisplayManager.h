/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBDisplayManager : FBSDisplayMonitor

@property (nonatomic, readonly, copy) FBSDisplayConfiguration *mainDisplay;

+ (id)mainConfiguration;
+ (id)mainDisplay;
+ (id)mainIdentity;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)initWithInitializationCompletion:(id /* block */)arg1;
- (id)initWithTransformer:(id)arg1;
- (void)invalidate;
- (id)mainDisplay;
- (void)postBookendConnections;

@end
