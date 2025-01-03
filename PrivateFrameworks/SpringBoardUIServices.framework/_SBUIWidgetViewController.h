/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface _SBUIWidgetViewController : UIViewController <_SBUIWidgetHost> {
    <_SBUIWidgetHost> * _widgetHost;
    NSString * _widgetIdentifier;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredViewSize;
@property (readonly) Class superclass;
@property (nonatomic) <_SBUIWidgetHost> *widgetHost;
@property (nonatomic, copy) NSString *widgetIdentifier;

- (void).cxx_destruct;
- (void)hostDidDismiss;
- (void)hostDidPresent;
- (void)hostWillDismiss;
- (void)hostWillPresent;
- (void)invalidatePreferredViewSize;
- (struct CGSize { double x1; double x2; })preferredViewSize;
- (void)requestLaunchOfURL:(id)arg1;
- (void)setVisibleWidgetsIDs:(id)arg1;
- (void)setWidgetHost:(id)arg1;
- (void)setWidgetIdentifier:(id)arg1;
- (id)widgetHost;
- (id)widgetIdentifier;

@end
