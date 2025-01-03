/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FamilyCircleUI.FamilySettingsApplication : NSObject <AIDAAccountManagerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _state;
    void accountStore;
    void aidaAccountManager;
    void appleCardStore;
    void checklistRankingConfigStore;
    void familyCircleStore;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  launchDate;
    void navigationPathSubject;
    void servicesOwnerManager;
    void servicesStore;
}

- (void).cxx_destruct;
- (id)accountsForAccountManager:(id)arg1;
- (void)appMovedToBackground;
- (void)appMovedToForeground;
- (id)init;

@end
