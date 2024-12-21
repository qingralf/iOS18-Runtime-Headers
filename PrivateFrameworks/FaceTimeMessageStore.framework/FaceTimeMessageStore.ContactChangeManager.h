/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FaceTimeMessageStore.framework/FaceTimeMessageStore
 */

@interface FaceTimeMessageStore.ContactChangeManager : NSObject <CNChangeHistoryEventVisitor> {
    void analyticsManager;
    void contactStore;
    void delegate;
    void featureFlags;
    void processingNotification;
    void userDefaults;
}

- (void).cxx_destruct;
- (void)contactStoreDidChange:(id)arg1;
- (id)init;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;

@end