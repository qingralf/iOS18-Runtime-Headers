/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface _CNAutocompleteFetchDelegateSafeWrapper : NSObject <CNAutocompleteFetchDelegate> {
    <CNAutocompleteFetchDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (bool)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)autocompleteFetch:(id)arg1 willAdjustResults:(id)arg2;
- (void)autocompleteFetch:(id)arg1 willSortResults:(id)arg2;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)arg1;
- (void)autocompleteFetchDidEndNetworkActivity:(id)arg1;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id /* block */)resultComparatorForAutocompleteFetch:(id)arg1;

@end
