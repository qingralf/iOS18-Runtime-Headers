/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RequestDispatcherBridges.framework/RequestDispatcherBridges
 */

@interface _TtCO24RequestDispatcherBridges16IFSessionService6Server : NSObject <SRDIFSessionServiceXPCServer> {
    void clientProxy;
    void jsonDecoder;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)getCurrentSessionIdentifierWithReply:(id /* block */)arg1;
- (id)init;
- (void)sendWithMessageData:(id)arg1 with:(id /* block */)arg2;

@end
