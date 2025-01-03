/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRMetricsCollector : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _metricsDataCollection;
    struct DarwinTracingBackend { 
        int (**_vptr$Backend)(); 
        struct IntrusiveListNodePrivateBase {} *mPrev; 
        struct IntrusiveListNodePrivateBase {} *mNext; 
        id /* block */ mClientCallback; 
    }  _tracingBackend;
    bool  _tracingBackendRegistered;
}

+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleMetricEvent:(struct MetricEvent { int x1; char *x2; struct Value { union Store { int x_1_2_1; unsigned int x_1_2_2; } x_3_1_1; unsigned char x_3_1_2; } x3; })arg1;
- (id)init;
- (id)metricSnapshot:(bool)arg1;
- (void)registerTracingBackend;
- (void)resetMetrics;
- (void)unregisterTracingBackend;

@end
