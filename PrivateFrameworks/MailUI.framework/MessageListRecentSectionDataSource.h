/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI
 */

@interface MessageListRecentSectionDataSource : MessageListSectionDataSource {
    UICollectionViewCellRegistration * _cellRegistration;
    bool  _hideFollowUp;
    <EFCancelable> * _hideFollowUpUserDefaultsObserver;
    bool  _localMailboxSearchScope;
    <EFCancelable> * _localMailboxSearchScopeUserDefaultsObserver;
    NSDictionary * _snippetHintsByGlobalMessageID;
}

@property (getter=shouldHideFollowUp, nonatomic) bool hideFollowUp;
@property (nonatomic, retain) <EFCancelable> *hideFollowUpUserDefaultsObserver;
@property (getter=isLocalMailboxSearchScope, nonatomic) bool localMailboxSearchScope;
@property (nonatomic, retain) <EFCancelable> *localMailboxSearchScopeUserDefaultsObserver;
@property (nonatomic, retain) NSDictionary *snippetHintsByGlobalMessageID;

- (void).cxx_destruct;
- (void)_configureCell:(id)arg1 atIndexPath:(id)arg2 itemID:(id)arg3;
- (id)_indexPathsForSelectedItems;
- (void)collection:(id)arg1 shouldHighlightSnippetHints:(id)arg2;
- (id)configuredCollectionViewCellForCollectionView:(id)arg1 indexPath:(id)arg2 itemID:(id)arg3 cellIdentifier:(id)arg4;
- (id)hideFollowUpUserDefaultsObserver;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithIdentifier:(id)arg1 section:(id)arg2 collectionView:(id)arg3 messageList:(id)arg4 initialLoadCompletedPromise:(id)arg5 layoutValuesHelper:(id)arg6 state:(id)arg7 headerType:(unsigned long long)arg8;
- (bool)isLocalMailboxSearchScope;
- (id)localMailboxSearchScopeUserDefaultsObserver;
- (id)sectionForCollection:(id)arg1;
- (void)setHideFollowUp:(bool)arg1;
- (void)setHideFollowUpUserDefaultsObserver:(id)arg1;
- (void)setLocalMailboxSearchScope:(bool)arg1;
- (void)setLocalMailboxSearchScopeUserDefaultsObserver:(id)arg1;
- (void)setSnippetHintsByGlobalMessageID:(id)arg1;
- (bool)shouldHideFollowUp;
- (id)snippetHintsByGlobalMessageID;

@end