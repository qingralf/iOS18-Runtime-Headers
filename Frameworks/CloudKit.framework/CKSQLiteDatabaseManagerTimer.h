/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLiteDatabaseManagerTimer : NSObject {
    NSObject<OS_dispatch_queue> * _activityQueue;
    NSObject<OS_dispatch_source> * _activityTimer;
    CKSQLiteDatabase * _db;
    NSDate * _nextActivityDate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _timerLock;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;
- (id)nextActivityDate;
- (void)runActivities;
- (void)scheduleActivityDate:(id)arg1;

@end