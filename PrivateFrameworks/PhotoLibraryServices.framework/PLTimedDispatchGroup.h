/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLTimedDispatchGroup : NSObject {
    double  _defaultTimeout;
    NSObject<OS_dispatch_group> * _group;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _lock_sessions;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)defaultPreferredResult;
- (id)description;
- (id)enterWithName:(id)arg1;
- (id)enterWithTimeout:(double)arg1 name:(id)arg2;
- (id)initWithQueue:(id)arg1 name:(id)arg2;
- (id)initWithQueue:(id)arg1 name:(id)arg2 defaultTimeout:(double)arg3;
- (void)notify:(id /* block */)arg1;

@end
