/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestions.MapsSuggestionsWalletStreamer : MapsSuggestions.MapsSuggestionsEventStreamer {
    void _keyListenerBlock;
    void _passKitChangedCanKicker;
    void _passKitObserver;
    void _resourceDepot;
    void _wallet;
}

- (void).cxx_destruct;
- (void)_setupWallet;
- (void)_tearDownWallet;
- (void)dealloc;
- (id)initWithLookAheadPeriod:(double)arg1 pingInterval:(double)arg2 notificationName:(id)arg3 identifyingName:(id)arg4;
- (id)initWithResourceDepot:(id)arg1 notificationName:(id)arg2;
- (void)scanForStreamableEvents;

@end
