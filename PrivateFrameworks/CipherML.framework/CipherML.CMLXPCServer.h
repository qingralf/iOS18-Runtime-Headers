/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CipherML.framework/CipherML
 */

@interface CipherML.CMLXPCServer : NSObject <NSXPCListenerDelegate> {
    void cacheCleaner;
    void requestsManager;
    void rotationTask;
    void tokenFetcherTask;
}

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end