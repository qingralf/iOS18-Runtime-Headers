/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
 */

@interface PodcastsFoundation.CacheDeleteNotifications : NSObject <CacheDeleteNotificationObserverDelegate> {
    void completedCheck;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  continuation;
    void observer;
    void paths;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  stream;
}

- (void).cxx_destruct;
- (void)cacheDeleteObserver:(id)arg1 didIdentifyCacheDeletedPath:(id)arg2 deletedAtDate:(id)arg3;
- (void)cacheDeleteObserverBecameSynchronizedWithFileSystem:(id)arg1;
- (id)init;

@end
