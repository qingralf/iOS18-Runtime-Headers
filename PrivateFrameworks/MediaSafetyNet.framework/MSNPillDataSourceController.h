/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSafetyNet.framework/MediaSafetyNet
 */

@interface MSNPillDataSourceController : NSObject {
    <MSNPillDataSourceProtocol> * _dataSource;
    NSSet * _identifiers;
    NSObject<OS_dispatch_queue> * _queue;
    int  _token;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) <MSNPillDataSourceProtocol> *dataSource;
@property (nonatomic, copy) NSSet *identifiers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) int token;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)dataSource;
- (void)dealloc;
- (id)identifiers;
- (id)initWithQueue:(id)arg1;
- (id)queue;
- (void)registerPillDataSource:(id)arg1 forIdentifiers:(id)arg2;
- (void)setDataSource:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (int)token;
- (id)xpcConnection;

@end
