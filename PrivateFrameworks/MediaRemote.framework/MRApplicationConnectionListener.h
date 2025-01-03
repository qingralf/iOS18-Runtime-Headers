/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRApplicationConnectionListener : NSObject {
    id /* block */  _handler;
    MRPlayerPath * _playerPath;
    NSString * _serviceName;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, readonly) MRPlayerPath *playerPath;
@property (nonatomic, readonly) NSString *serviceName;

- (void).cxx_destruct;
- (bool)handleIncomingConnection:(id)arg1 requestInfo:(id)arg2;
- (id /* block */)handler;
- (id)initWithServiceName:(id)arg1 playerPath:(id)arg2 incomingConnectionHandler:(id /* block */)arg3;
- (id)playerPath;
- (id)serviceName;
- (void)setHandler:(id /* block */)arg1;

@end
