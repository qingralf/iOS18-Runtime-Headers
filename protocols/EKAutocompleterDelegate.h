/* Generated by RuntimeBrowser.
 */

@protocol EKAutocompleterDelegate <NSObject>

@required

- (void)autcompleterUpdated:(EKAutocompleter *)arg1;

@optional

- (void)autcompleterDidBeginNetworkActivity:(EKAutocompleter *)arg1;
- (void)autcompleterDidFinishNetworkActivity:(EKAutocompleter *)arg1;
- (void)autcompleterSetCNAutocompleteStore:(CNAutocompleteStore *)arg1;

@end