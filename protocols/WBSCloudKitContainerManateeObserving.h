/* Generated by RuntimeBrowser.
 */

@protocol WBSCloudKitContainerManateeObserving <NSObject>

@required

- (NSString *)containerIdentifier;
- (void)determineAccountStateWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, long long, NSError *, void*
- (id)initWithContainerIdentifier:(NSString *)arg1 appleAccountInformationProvider:(id <WBSAppleAccountInformationProviding>)arg2;
- (void)setStateChangeObserver:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, long long, void*
- (id /* block */)stateChangeObserver:(void *)arg1; // needs 1 arg types, found 6: id /* block */, long long, long long, void*, id, SEL

@end