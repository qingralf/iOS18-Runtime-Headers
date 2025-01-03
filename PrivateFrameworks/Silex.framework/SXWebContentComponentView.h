/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentComponentView : SXComponentView <SWReachabilityObserver, SXViewportChangeListener> {
    <SXAnalyticsReporting> * _analyticsReporting;
    SXWebContentComponentExposureEvent * _componentExposureEvent;
    SXComponentExposureMonitor * _componentExposureMonitor;
    <SXWebContentConfigurationProvider> * _configurationProvider;
    SWContainerViewController * _containerViewController;
    <SXWebContentDataSourceProviding> * _dataSourceProvider;
    UILabel * _errorLabel;
    SXWebContentComponentInteractionManager * _interactionManager;
    NFPendingPromise * _invalidationPromise;
    <SXLayoutInvalidator> * _layoutInvalidator;
    UIActivityIndicatorView * _loadingIndicator;
    <SWLoadingPolicyProvider> * _loadingPolicyProvider;
    <SWNavigationManager> * _navigationManager;
    <SWReachabilityProvider> * _reachabilityProvider;
    <SXResourceDataSource> * _resourceDataSource;
    NFStateMachine * _stateMachine;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, readonly) <SXAnalyticsReporting> *analyticsReporting;
@property (nonatomic, retain) SXWebContentComponentExposureEvent *componentExposureEvent;
@property (nonatomic, readonly) SXComponentExposureMonitor *componentExposureMonitor;
@property (nonatomic, readonly) <SXWebContentConfigurationProvider> *configurationProvider;
@property (nonatomic, readonly) SWContainerViewController *containerViewController;
@property (nonatomic, readonly) <SXWebContentDataSourceProviding> *dataSourceProvider;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *errorLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SXWebContentComponentInteractionManager *interactionManager;
@property (nonatomic, retain) NFPendingPromise *invalidationPromise;
@property (nonatomic, readonly) <SXLayoutInvalidator> *layoutInvalidator;
@property (nonatomic, readonly) UIActivityIndicatorView *loadingIndicator;
@property (nonatomic, readonly) <SWLoadingPolicyProvider> *loadingPolicyProvider;
@property (nonatomic, readonly) <SWNavigationManager> *navigationManager;
@property (nonatomic, readonly) <SWReachabilityProvider> *reachabilityProvider;
@property (nonatomic, readonly) <SXResourceDataSource> *resourceDataSource;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (id)analyticsReporting;
- (id)componentExposureEvent;
- (id)componentExposureMonitor;
- (id)configurationProvider;
- (void)configure;
- (void)configureComponentExposureMonitor;
- (void)configureConfigurationProvider;
- (void)configureErrorProvider;
- (void)configurePresentationManager;
- (void)configureViewController;
- (id)containerViewController;
- (id)createDisabledState;
- (id)createErrorState;
- (id)createLoadingState;
- (id)createPresentationState;
- (id)createStateMachine;
- (id)dataSourceProvider;
- (id)errorLabel;
- (id)foregroundColor:(long long)arg1;
- (void)handleTap:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 containerViewController:(id)arg5 configurationProvider:(id)arg6 navigationManager:(id)arg7 analyticsReporting:(id)arg8 componentExposureMonitor:(id)arg9 interactionManagerFactory:(id)arg10 reachabilityProvider:(id)arg11 resourceDataSource:(id)arg12 loadingPolicyProvider:(id)arg13 dataSourceProvider:(id)arg14 layoutInvalidator:(id)arg15;
- (id)interactionManager;
- (id)invalidationPromise;
- (void)layout;
- (void)layoutErrorView;
- (id)layoutInvalidator;
- (void)layoutLoadingIndicator;
- (void)layoutSubviews;
- (void)layoutWebView;
- (void)loadComponent:(id)arg1;
- (void)loadWebContent;
- (id)loadingIndicator;
- (id)loadingPolicyProvider;
- (id)navigationManager;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; bool x3; })arg1;
- (void)presentWithHeight:(double)arg1;
- (void)reachabilityChanged:(bool)arg1;
- (id)reachabilityProvider;
- (void)reloadWebContent;
- (id)resourceDataSource;
- (void)setComponentExposureEvent:(id)arg1;
- (void)setErrorLabel:(id)arg1;
- (void)setInvalidationPromise:(id)arg1;
- (id)stateMachine;
- (id)tapGestureRecognizer;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;

@end
