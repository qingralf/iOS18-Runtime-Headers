/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIIntegrationAlertDisplayer : NSObject <CUIKIntegrationAlertDisplayer> {
    unsigned long long  _options;
    UIViewController * _viewControllerForPresentingAlerts;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UIViewController *viewControllerForPresentingAlerts;

+ (id)alertControllerForAlert:(id)arg1 viewController:(id)arg2 options:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)_effectiveViewControllerForPresentation;
- (void)displayIntegrationAlert:(id)arg1;
- (id)initWithViewController:(id)arg1 options:(unsigned long long)arg2;
- (void)setViewControllerForPresentingAlerts:(id)arg1;
- (id)viewControllerForPresentingAlerts;

@end