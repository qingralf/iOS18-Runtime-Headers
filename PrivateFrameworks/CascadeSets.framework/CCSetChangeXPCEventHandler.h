/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CascadeSets.framework/CascadeSets
 */

@interface CCSetChangeXPCEventHandler : NSObject {
    NSMutableArray * _listeners;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSMutableArray *listeners;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleXPCEvent:(id)arg1;
- (void)addListener:(id)arg1;
- (id)init;
- (id)listeners;
- (id)queue;
- (void)removeListener:(id)arg1;

@end