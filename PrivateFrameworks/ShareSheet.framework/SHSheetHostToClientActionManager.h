/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface SHSheetHostToClientActionManager : NSObject {
    NSMutableDictionary * _sceneProvidersToHandlers;
}

@property (nonatomic, readonly) NSMutableDictionary *sceneProvidersToHandlers;

+ (void)receivedAction:(id)arg1 forWindowScene:(id)arg2;
+ (void)registerHandler:(id /* block */)arg1 forHostedWindowScene:(id)arg2;
+ (id)shared;
+ (void)unregisterHandlerForHostedWindowScene:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)_handlerForHostingController:(id)arg1;
- (id)init;
- (id)sceneProvidersToHandlers;

@end