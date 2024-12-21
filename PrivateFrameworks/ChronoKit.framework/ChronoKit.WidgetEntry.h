/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoKit.framework/ChronoKit
 */

@interface ChronoKit.WidgetEntry : NSObject <BSInvalidatable> {
    void _contentDidChangePublisher;
    void _descriptorDidChangePublisher;
    void _environmentProvider;
    void _lock;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lock_cachedViewableEntry;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lock_configuredDate;
    void _lock_content;
    void _lock_contentLoadError;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lock_contentLoadErrorDate;
    void _lock_currentEntry;
    void _lock_descriptor;
    void _lock_shouldSilencePublisher;
    void _objectWillChangePublisher;
    void contentDidChangePublisher;
    void descriptorDidChangePublisher;
    void descriptorObserver;
    void entrySupportsRendering;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  key;
    void objectWillChange;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  protectionType;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)invalidate;

@end