/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PhotosUICore.GenerativeStoryPromptSuggestionManager : _TtCs12_SwiftObject <PhotosIntelligence.PromptSuggestionValidationObserver> {
    void $__lazy_storage_$_suggestionProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _$observationRegistrar;
    void _currentFetchTask;
    void _currentSuggestions;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lastFetchDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void photoLibrary;
    void refetchInterval;
    void wantsMockSuggestions;
}

- (void)suggestionsDidGetInvalidated;

@end
