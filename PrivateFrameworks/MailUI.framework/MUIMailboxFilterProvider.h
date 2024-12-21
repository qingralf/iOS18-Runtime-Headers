/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI
 */

@interface MUIMailboxFilterProvider : NSObject <MUIMailboxFilterProvider> {
    NSArray * _accountFilters;
    MUIMailboxFilterGroup * _accountsFilterGroup;
    NSArray * _accountsInSmartMailboxScope;
    NSArray * _filtersGroups;
    EMFocus * _focus;
    Class  _mailboxFilterClass;
    NSArray * _mailboxes;
    MUIMailboxFilter * _senderFilter;
}

@property (nonatomic, copy) NSArray *accountFilters;
@property (nonatomic, retain) MUIMailboxFilterGroup *accountsFilterGroup;
@property (nonatomic, copy) NSArray *accountsInSmartMailboxScope;
@property (nonatomic, readonly, copy) NSArray *allFilters;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSArray *defaultFilters;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *filtersGroups;
@property (nonatomic, retain) EMFocus *focus;
@property (nonatomic, readonly, copy) NSArray *focusFilters;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MUIMailboxFilterGroup *individualVIPFilterGroup;
@property (nonatomic, retain) Class mailboxFilterClass;
@property (nonatomic, readonly, copy) NSArray *mailboxes;
@property (nonatomic, retain) MUIMailboxFilter *senderFilter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accountsInSmartMailboxScope;
- (id)_addressedGroup;
- (id)_andFilterGroup;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (id)_flagsFilterGroup;
- (bool)_isInbox;
- (bool)_isMailboxOfSmartMailboxType:(long long)arg1;
- (void)_vipsDidChange:(id)arg1;
- (id)accountFilters;
- (id)accountsFilterGroup;
- (id)accountsInSmartMailboxScope;
- (id)allFilters;
- (void)dealloc;
- (id)defaultFilters;
- (id)filtersGroups;
- (id)focus;
- (id)focusFilters;
- (id)groupContainingFilter:(id)arg1;
- (id)individualVIPFilterGroup;
- (id)initWithFilterContext:(id)arg1 mailboxFilterClass:(Class)arg2;
- (Class)mailboxFilterClass;
- (id)mailboxes;
- (id)reduce:(id)arg1;
- (id)senderFilter;
- (void)setAccountFilters:(id)arg1;
- (void)setAccountsFilterGroup:(id)arg1;
- (void)setAccountsInSmartMailboxScope:(id)arg1;
- (void)setFiltersGroups:(id)arg1;
- (void)setFocus:(id)arg1;
- (void)setIndividualVIPFilterGroup:(id)arg1;
- (void)setMailboxFilterClass:(Class)arg1;
- (void)setSenderFilter:(id)arg1;

@end