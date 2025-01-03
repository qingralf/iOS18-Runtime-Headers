/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface ConversationKit.PeoplePickerViewController : UIViewController <CNAutocompleteSearchControllerDelegate, MFMessageComposeViewControllerDelegate, TPPillViewDelegate, TUCallProviderManagerDelegate> {
    void $__lazy_storage_$_maxParticipantLimit;
    void $__lazy_storage_$_smsAccount;
    void actionBar;
    void addButtonHandler;
    void addPeopleButton;
    void appName;
    void audioButton;
    void availableRecipientTintColor;
    void callProviderManager;
    void constants;
    void currentConversation;
    void currentConversationLink;
    void delegate;
    void existingAddresses;
    void gondolaRecipientTintColor;
    void idsDestinations;
    void idsGroupDestinations;
    void initialRecipientDestinations;
    void keyboardHeight;
    void linkShareCoordinator;
    void loggedInvalidRecipients;
    void meHandles;
    void possibleRecipients;
    void reporter;
    void restrictedRecipientTintColor;
    void restrictionPolicy;
    void scheduleIDSCachedQueryDebouncer;
    void scheduleIDSCachedQuerySubject;
    void scheduleIDSQueryDebouncer;
    void scheduleIDSQueryGroupDebouncer;
    void scheduleIDSQueryGroupSubject;
    void scheduleIDSQuerySubject;
    void searchController;
    void selectedSenderIdentity;
    void senderIdentityPillView;
    void setPreventsApplicationTerminationWhenModal;
    void stackView;
    void stagedActivity;
    void style;
    void unavailableRecipientTintColor;
    void videoButton;
    void viewModel;
}

- (void).cxx_destruct;
- (void)cancelButtonTapped;
- (void)didTapTextViewAccessoryButtonForSearchController:(id)arg1 anchoredToView:(id)arg2;
- (void)handleIDSStatusChangedWithNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)keyboardWillHideWithNotification:(id)arg1;
- (void)keyboardWillShowWithNotification:(id)arg1;
- (id)menuForPillView:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)providersChangedForProviderManager:(id)arg1;
- (id)searchController:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)searchController:(id)arg1 contextMenuConfigurationForRecipient:(id)arg2;
- (void)searchController:(id)arg1 didAddRecipient:(id)arg2;
- (void)searchController:(id)arg1 didEndDisplayingRowForRecipient:(id)arg2;
- (void)searchController:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)searchController:(id)arg1 didTapTableAccessoryForRecipient:(id)arg2;
- (id)searchController:(id)arg1 preferredRecipientForRecipient:(id)arg2;
- (unsigned long long)searchController:(id)arg1 presentationOptionsForRecipient:(id)arg2;
- (id)searchController:(id)arg1 tintColorForRecipient:(id)arg2;
- (void)searchController:(id)arg1 willDisplayRowForRecipient:(id)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willDismissViewAnimated:(bool)arg1;

@end
