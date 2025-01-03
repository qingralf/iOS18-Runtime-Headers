/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUTransactionManager : NSObject {
    bool  _keepAliveClearable;
    NSMutableSet * _keepAliveTransactions;
    NSMutableDictionary * _openTransactions;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_hasOpenTransactionForName:(id)arg1;
- (bool)_isKeepAliveEnabled:(id*)arg1;
- (void)_setKeepAlive:(bool)arg1;
- (void)_toggleKeepAliveStatus;
- (void)beginTransaction:(id)arg1;
- (void)beginTransaction:(id)arg1 keepAlive:(bool)arg2;
- (void)clearKeepAliveIfNecessary:(bool)arg1;
- (id)copyTransactions;
- (void)dealloc;
- (void)endTransaction:(id)arg1;
- (bool)hasOpenTransactionForName:(id)arg1;
- (id)init;
- (bool)isKeepAliveEnabled;
- (void)setKeepAliveClearable:(bool)arg1;

@end
