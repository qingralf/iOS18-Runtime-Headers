/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFSilentModeSettingsClient : WFSettingsClient <WFReversibleBooleanStateSetting>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canRunIntent;
+ (void)createClientWithCompletionHandler:(id /* block */)arg1;
+ (void)getBookmarkForCurrentStateWithCompletionHandler:(id /* block */)arg1;
+ (void)getReversalStateWithBookmark:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)publisher;
+ (id)reversalArbiter;
+ (id)reversePublisher;

- (void)getStateWithCompletionHandler:(id /* block */)arg1;
- (void)setState:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
