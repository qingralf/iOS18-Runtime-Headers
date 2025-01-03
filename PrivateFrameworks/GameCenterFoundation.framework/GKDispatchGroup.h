/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKDispatchGroup : NSObject {
    GKActivity * _activity;
    bool  _debugLoggingEnabled;
    NSError * _error;
    NSObject<OS_dispatch_group> * _group;
    NSString * _name;
    id  _result;
    int  _sequence;
    GKThreadsafeDictionary * _values;
    id  result;
}

@property (retain) GKActivity *activity;
@property (getter=isDebugLoggingEnabled, nonatomic) bool debugLoggingEnabled;
@property (retain) NSError *error;
@property (retain) id result;

+ (id)backgroundConcurrentQueue;
+ (id)defaultConcurrentQueue;
+ (id)dispatchGroupWithName:(id)arg1;
+ (id)mainQueue;
+ (void)waitUntilDone:(id /* block */)arg1;

- (id)_values;
- (long long)_waitWithDispatchTimeout:(unsigned long long)arg1;
- (id)activity;
- (id)allValues;
- (void)dealloc;
- (id)description;
- (void)enter;
- (id)error;
- (id)initWithName:(id)arg1;
- (bool)isDebugLoggingEnabled;
- (void)join:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (void)leave;
- (void)notifyOnMainQueueWithBlock:(id /* block */)arg1;
- (void)notifyOnQueue:(id)arg1 block:(id /* block */)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)perform:(id /* block */)arg1;
- (id)result;
- (void)setActivity:(id)arg1;
- (void)setDebugLoggingEnabled:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setResult:(id)arg1;
- (void)wait;
- (long long)waitWithTimeout:(double)arg1;

@end
