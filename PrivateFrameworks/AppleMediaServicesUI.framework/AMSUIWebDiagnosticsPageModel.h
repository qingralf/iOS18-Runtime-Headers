/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebDiagnosticsPageModel : NSObject <AMSUIWebPageProvider> {
    NSString * _backgroundColor;
    AMSUIWebClientContext * _context;
    AMSMetricsEvent * _impressionEvent;
    AMSUIWebNavigationBarModel * _navigationBar;
    NSArray * _requiredSerialNumbers;
    NSArray * _selectableSerialNumbers;
    NSString * _sessionToken;
    struct CGSize { 
        double width; 
        double height; 
    }  _windowSize;
}

@property (nonatomic, readonly) NSString *backgroundColor;
@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disableReappearPlaceholder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AMSMetricsEvent *impressionEvent;
@property (nonatomic, readonly) AMSUIWebNavigationBarModel *navigationBar;
@property (nonatomic, retain) NSArray *requiredSerialNumbers;
@property (nonatomic, retain) NSArray *selectableSerialNumbers;
@property (nonatomic, retain) NSString *sessionToken;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } windowSize;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)context;
- (id)createViewControllerForContainer:(id)arg1;
- (bool)disableReappearPlaceholder;
- (id)impressionEvent;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)loadPage;
- (id)navigationBar;
- (id)requiredSerialNumbers;
- (id)selectableSerialNumbers;
- (id)sessionToken;
- (void)setContext:(id)arg1;
- (void)setRequiredSerialNumbers:(id)arg1;
- (void)setSelectableSerialNumbers:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (struct CGSize { double x1; double x2; })windowSize;

@end
