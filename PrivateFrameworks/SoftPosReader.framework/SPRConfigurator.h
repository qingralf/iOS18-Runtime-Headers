/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftPosReader.framework/SoftPosReader
 */

@interface SPRConfigurator : SPRObject {
    NSObject<OS_dispatch_queue> * _relayQueue;
    NSString * _tokenKey;
}

- (void).cxx_destruct;
- (id)initWithConnector:(id /* block */)arg1;
- (void)installAsyncWithToken:(id)arg1 callback:(id)arg2;
- (void)installAsyncWithToken:(id)arg1 force:(bool)arg2 callback:(id)arg3;
- (id)installWithToken:(id)arg1 error:(id*)arg2;
- (void)installWithToken:(id)arg1 force:(bool)arg2 delegate:(id)arg3 completion:(id /* block */)arg4;
- (id)installWithToken:(id)arg1 force:(bool)arg2 error:(id*)arg3;
- (id)prepare:(id*)arg1;
- (id)prepareAndReturnError:(id*)arg1;
- (id)prepareAndWarnAndReturnError:(id*)arg1;
- (id)prepareAndWarnWithForce:(bool)arg1 error:(id*)arg2;
- (id)prepareAndWarnWithToken:(id)arg1 force:(bool)arg2 enableStoreAndForward:(bool)arg3 error:(id*)arg4;
- (id)prepareWithForce:(bool)arg1 error:(id*)arg2;
- (id)statusAndReturnError:(id*)arg1;
- (id)statusWithToken:(id)arg1 error:(id*)arg2;
- (id)statusWithToken:(id)arg1 options:(long long)arg2 error:(id*)arg3;

@end