/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FinanceKitUI.framework/FinanceKitUI
 */

@interface FinanceKitUI.LocationSearchService : NSObject <MKLocalSearchCompleterDelegate> {
    void completer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  resultsContinuation;
}

- (void).cxx_destruct;
- (void)completer:(id)arg1 didFailWithError:(id)arg2;
- (void)completerDidUpdateResults:(id)arg1;
- (void)dealloc;
- (id)init;

@end