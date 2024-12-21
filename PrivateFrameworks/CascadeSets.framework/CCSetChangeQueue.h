/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CascadeSets.framework/CascadeSets
 */

@interface CCSetChangeQueue : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _setChanges;
}

+ (void)groupSetsByPersonaIdentifier:(id)arg1 enumerateGroupsUsingBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)dequeueAll;
- (void)enqueue:(id)arg1;
- (id)init;

@end