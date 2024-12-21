/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityAudit.framework/AccessibilityAudit
 */

@interface AXAuditDeduplicatorModels : NSObject {
    long long  _activePlatform;
    NSObject<OS_dispatch_queue> * _dedupeQueue;
    UIUDeduplicator * _deduplicator;
    NSObject<OS_os_log> * _log;
}

@property long long activePlatform;
@property (retain) NSObject<OS_dispatch_queue> *dedupeQueue;
@property (retain) UIUDeduplicator *deduplicator;
@property (retain) NSObject<OS_os_log> *log;

- (void).cxx_destruct;
- (long long)activePlatform;
- (id)createUIUScreenShotForImage:(struct CGImage { }*)arg1 withTimestamp:(id)arg2;
- (id)dedupeQueue;
- (int)deduplicateIssues:(id)arg1 onImage:(struct CGImage { }*)arg2 forPlatform:(id)arg3;
- (int)deduplicateIssues:(id)arg1 onImage:(struct CGImage { }*)arg2 forUIUPlatform:(long long)arg3;
- (id)deduplicator;
- (bool)determineUIPlatform:(id)arg1 outPlatform:(long long*)arg2;
- (id)init;
- (id)log;
- (id)packIssueRects:(id)arg1;
- (void)setActivePlatform:(long long)arg1;
- (void)setDedupeQueue:(id)arg1;
- (void)setDeduplicator:(id)arg1;
- (void)setLog:(id)arg1;

@end