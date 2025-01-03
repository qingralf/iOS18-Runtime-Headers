/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoComponentAnalyticsReporting : NSObject <SXAnalyticsReporting> {
    <SXAnalyticsReporting> * _analyticsReporting;
    SXVideoComponent * _component;
}

@property (nonatomic, readonly) <SXAnalyticsReporting> *analyticsReporting;
@property (nonatomic, readonly) SXVideoComponent *component;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)analyticsReporting;
- (id)component;
- (id)initWithComponent:(id)arg1 analyticsProviding:(id)arg2;
- (void)reportEvent:(id)arg1;

@end
