/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

@interface ENGroupContextNotifyingObserver : NSObject <ENGroupContextObserverMiddleware> {
    id /* block */  _onGroupCache;
    id /* block */  _onGroupCreate;
    id /* block */  _onGroupUpdate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ onGroupCache;
@property (nonatomic, copy) id /* block */ onGroupCreate;
@property (nonatomic, copy) id /* block */ onGroupUpdate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)groupContext:(id)arg1 didCacheGroup:(id)arg2;
- (void)groupContext:(id)arg1 didCreateGroup:(id)arg2;
- (void)groupContext:(id)arg1 didUpdateGroup:(id)arg2 withNewGroup:(id)arg3;
- (id)initWithQueue:(id)arg1;
- (id /* block */)onGroupCache;
- (id /* block */)onGroupCreate;
- (id /* block */)onGroupUpdate;
- (id)queue;
- (void)setOnGroupCache:(id /* block */)arg1;
- (void)setOnGroupCreate:(id /* block */)arg1;
- (void)setOnGroupUpdate:(id /* block */)arg1;
- (void)setQueue:(id)arg1;

@end
