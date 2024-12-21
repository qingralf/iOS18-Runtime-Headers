/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafetyMonitor.framework/SafetyMonitor
 */

@interface SMAppDeletionManager : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (void)_applicationsDidInstall:(id)arg1;
- (void)_applicationsDidUninstall:(id)arg1;
- (void)_databaseWasRebuilt;
- (void)_notifyObserversForMessagesAppInstalled;
- (void)_notifyObserversForMessagesAppUninstalled;
- (void)_notifyObserversWithUpdatedMessagesInstallation;
- (void)_removeObserver:(id)arg1;
- (void)_setup;
- (void)addObserver:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)databaseWasRebuilt;
- (void)dealloc;
- (id)init;
- (bool)isMessagesAppInstalled;
- (id)observers;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setup;

@end