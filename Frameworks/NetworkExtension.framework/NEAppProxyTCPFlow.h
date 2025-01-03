/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEAppProxyTCPFlow : NEAppProxyFlow {
    NSObject<OS_nw_endpoint> * _remoteFlowEndpoint;
}

@property (readonly) NWEndpoint *remoteEndpoint;
@property (readonly) NSObject<OS_nw_endpoint> *remoteFlowEndpoint;

- (void).cxx_destruct;
- (id)description;
- (id)initWithNEFlow:(struct _NEFlow { }*)arg1 queue:(id)arg2;
- (void)readDataWithCompletionHandler:(id /* block */)arg1;
- (id)remoteEndpoint;
- (id)remoteFlowEndpoint;
- (void)writeData:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
