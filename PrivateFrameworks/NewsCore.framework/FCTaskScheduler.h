/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTaskScheduler : NSObject

+ (id)backgroundDownloadOperationQueue;
+ (void)boostBackgroundDownloads;
+ (void)disableOptionalPrefetching;
+ (void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+ (void)executeOptionalPrefetchBlock:(id /* block */)arg1;
+ (id)lowPriorityOperationQueue;
+ (id)lowPriorityQueue;
+ (void)popHighPriorityTaskInFlight;
+ (id)postLaunchQueue;
+ (void)pushHighPriorityTaskInFlight;
+ (void)scheduleBackgroundDownloadOperation:(id)arg1;
+ (void)scheduleLowPriorityAsyncBlock:(id /* block */)arg1;
+ (void)scheduleLowPriorityBlock:(id /* block */)arg1;
+ (void)scheduleLowPriorityBlockForMainThread:(id /* block */)arg1;
+ (void)scheduleLowPriorityOperation:(id)arg1;
+ (void)scheduleOptionalPrefetchBlock:(id /* block */)arg1;
+ (void)schedulePostLaunchBlockForMainThread:(id /* block */)arg1;

@end
