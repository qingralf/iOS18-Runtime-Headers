/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DigitalSeparationUI.framework/DigitalSeparationUI
 */

@interface DSPasscodeChangedController : DSOBWelcomeController <DSController> {
    DSAlternateDeviceAccessManager * _accessManager;
    <DSNavigationDelegate> * _delegate;
}

@property (nonatomic, retain) DSAlternateDeviceAccessManager *accessManager;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessManager;
- (id)delegate;
- (void)finishFlow;
- (id)init;
- (void)reviewAccessPressed;
- (void)setAccessManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
