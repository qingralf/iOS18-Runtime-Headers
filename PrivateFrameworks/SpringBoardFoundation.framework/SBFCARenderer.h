/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFCARenderer : NSObject {
    NSXPCConnection * _rendererServiceConnection;
}

+ (id)sharedInstance;
+ (bool)shouldUseXPCServiceForRendering;

- (void).cxx_destruct;
- (void)_createConnection;
- (id)_remoteObjectProxy;
- (void)warmup;

@end