/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMComputeSourceClient : NSObject {
    NSXPCConnection * _connection;
    NSXPCListenerEndpoint * _listenerEndpoint;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _machServiceName;
    BMComputeXPCPublisherStorage * _storage;
    NSString * _streamIdentifier;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readonly) BMComputeXPCPublisherStorage *storage;
@property (nonatomic, readonly, copy) NSString *streamIdentifier;

+ (id)new;
+ (void)setUseSynchronousXPCMessageSending:(bool)arg1;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)description;
- (void)eventsPrunedForAccount:(id)arg1 remoteName:(id)arg2 reason:(unsigned long long)arg3;
- (id)init;
- (id)initWithStreamIdentifier:(id)arg1 domain:(unsigned long long)arg2 useCase:(id)arg3;
- (id)initWithStreamIdentifier:(id)arg1 listenerEndpoint:(id)arg2 storage:(id)arg3;
- (id)initWithStreamIdentifier:(id)arg1 machServiceName:(id)arg2 listenerEndpoint:(id)arg3 storage:(id)arg4;
- (void)sendEvent:(id)arg1 account:(id)arg2 remoteName:(id)arg3 timestamp:(double)arg4 signpostID:(unsigned long long)arg5 sendFullEvent:(bool)arg6;
- (id)storage;
- (id)streamIdentifier;

@end