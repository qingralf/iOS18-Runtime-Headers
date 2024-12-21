/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UniversalDrag.framework/UniversalDrag
 */

@interface _TtCC13UniversalDrag16DragObserver_iOSP33_46F4F7DBF7EBE5237C36EDB049F4D13E20InternalDragObserver : NSObject <_UIDragMonitorDelegate, _UIDragMonitorSessionDelegate> {
    void delegate;
    void imageRetryCountBySession;
    void trackedSessions;
}

- (void).cxx_destruct;
- (void)dragMonitor:(id)arg1 didBeginDragSession:(id)arg2;
- (void)dragMonitor:(id)arg1 didEndDragSessionWithIdentifier:(unsigned int)arg2;
- (void)dragMonitorSession:(id)arg1 didConnectWithItems:(id)arg2;
- (void)dragMonitorSession:(id)arg1 didUpdateDragPresentation:(id)arg2;
- (bool)dragMonitorSessionShouldHideLocalDragDisplay:(id)arg1;
- (id)init;

@end