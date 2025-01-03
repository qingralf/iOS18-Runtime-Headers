/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSCopyOnWriteState : NSObject {
    unsigned long long  _count;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void)decrementCount;
- (id)forkIfNeededWithHandler:(id /* block */)arg1;
- (void)incrementCount;
- (id)init;

@end
