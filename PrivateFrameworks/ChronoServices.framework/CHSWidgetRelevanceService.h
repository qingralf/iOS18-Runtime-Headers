/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
 */

@interface CHSWidgetRelevanceService : NSObject <BSInvalidatable> {
    void cachePath;
    void connection;
    void connectionClient;
    void finishLaunchingToken;
    void keybagStateProvider;
    void options;
    void queue;
    void queue_cachedWidgetRelevanceProperties;
    void queue_invalidated;
    void queue_observers;
    void queue_timelineEntryRelevanceAssertion;
    void queue_timelineEntryRelevances;
    void queue_widgetRelevanceAssertion;
    void queue_widgetRelevanceCache;
}

@property (nonatomic, readonly) <CHSChronoServicesConnectionClient> *_connectionClient;
@property (nonatomic, readonly) NSDictionary *timelineEntryRelevances;
@property (nonatomic, readonly) NSArray *widgetRelevanceProperties;

- (void).cxx_destruct;
- (id)_connectionClient;
- (void)_syncOnInternalQueue;
- (void)acquireWidgetLifetimeAssertionForWidget:(id)arg1 metrics:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)arg1 cacheURL:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)invalidate;
- (void)registerObserver:(id)arg1;
- (void)reloadWidgetRelevanceForExtensionIdentity:(id)arg1 kind:(id)arg2 completion:(id /* block */)arg3;
- (id)timelineEntryRelevances;
- (void)unregisterObserver:(id)arg1;
- (id)widgetRelevanceProperties;

@end