/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface SearchQueryRestorationCompletionItem : NSObject <CompletionItem> {
    CompletionGroupListing * _listingToRestore;
    long long  _parsecQueryID;
    WBSCompletionQuery * _queryToRestore;
    SFSearchResult * _sfSearchResultValue;
}

@property (nonatomic, readonly) long long completionCellBackgroundModeInTopSection; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *completionTableHeaderViewReuseIdentifier; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long engagementDestination;
@property (nonatomic, retain) <CompletionItemActionHandler> *handlerForActionItem; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *lastSearchQuery; /* unknown property attribute: ? */
@property (nonatomic, retain) CompletionGroupListing *listingToRestore;
@property (nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool needsSectionHeader; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (nonatomic) long long parsecQueryID;
@property (nonatomic, retain) WBSCompletionQuery *query; /* unknown property attribute: ? */
@property (nonatomic, retain) WBSCompletionQuery *queryToRestore;
@property (nonatomic, readonly) bool restoresSearchState; /* unknown property attribute: ? */
@property (nonatomic, readonly) SFSearchResult *sfSearchResultValue;
@property (nonatomic, retain) WBSQuerySuggestion *siriSuggestion; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSString *subtextForHistoryServiceCompletionList; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *titleForHistoryServiceCompletionList;
@property (nonatomic, readonly) NSString *urlStringForHistoryServiceCompletionList; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool usesDefaultHeaderView; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSString *uuidString; /* unknown property attribute: ? */

- (void).cxx_destruct;
- (void)acceptCompletionWithActionHandler:(id)arg1;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;
- (id)completionTableViewCellForCompletionList:(id)arg1;
- (id)completionTableViewCellReuseIdentifier;
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;
- (unsigned long long)engagementDestination;
- (id)initWithQuery:(id)arg1;
- (bool)isEquivalentTo:(id)arg1;
- (id)listingToRestore;
- (bool)needsSectionHeader;
- (id)parsecDomainIdentifier;
- (long long)parsecQueryID;
- (id)queryToRestore;
- (id)reflectedStringForUserTypedString:(id)arg1;
- (void)setListingToRestore:(id)arg1;
- (void)setParsecQueryID:(long long)arg1;
- (void)setQueryToRestore:(id)arg1;
- (id)sfSearchResultValue;
- (id)titleForHistoryServiceCompletionList;

@end