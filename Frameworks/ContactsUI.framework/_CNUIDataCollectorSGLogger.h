/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface _CNUIDataCollectorSGLogger : NSObject <CNUIDataCollectorSGLogger> {
    id /* block */  _serviceProvider;
    <CNScheduler> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) id /* block */ serviceProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CNScheduler> *workQueue;

- (void).cxx_destruct;
- (id)initWithSuggestionsServiceProvider:(id /* block */)arg1 schedulerProvider:(id)arg2;
- (void)logContactCreated:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3;
- (void)logContactSearchResultSelected:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3;
- (void)logSearchResultsIncludedPureSuggestionsWithBundleID:(id)arg1;
- (void)logSuggestedContactDetailShown:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3;
- (void)logSuggestedContactDetailUsed:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3;
- (void)performBlockWithService:(id /* block */)arg1;
- (id /* block */)serviceProvider;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
