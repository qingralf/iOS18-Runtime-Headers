/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDMessageFromStorageMonitor : NSObject {
    void messageCount;
    void totalElapsedTimeSec;
}

+ (id)sharedStorageMonitor;

- (void).cxx_destruct;
- (void)incomingMessageProcessedWithElapsedTime:(double)arg1;
- (id)init;
- (void)showTapToRadarOnSlowDelivery;

@end
