/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIHomeScreenModel : NSObject <APSubjectMonitor> {
    SBHSelectedApplicationDataSource * _dataSource;
    SBHIconModel * _iconModel;
    NSObject<OS_dispatch_queue> * _serialQueue;
    <APSubjectMonitorSubscription> * _subscription;
}

@property (nonatomic, retain) SBHSelectedApplicationDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHIconModel *iconModel;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, retain) <APSubjectMonitorSubscription> *subscription;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)appIconForApplicationBundleIdentifier:(id)arg1;
- (void)appProtectionSubjectsChanged:(id)arg1 forSubscription:(id)arg2;
- (id)clipIconForIdentifier:(id)arg1;
- (id)dataSource;
- (id)iconModel;
- (id)init;
- (void)resetIconModel;
- (id)serialQueue;
- (void)setDataSource:(id)arg1;
- (void)setIconModel:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setSubscription:(id)arg1;
- (id)subscription;

@end