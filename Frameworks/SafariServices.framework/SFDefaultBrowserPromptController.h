/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFDefaultBrowserPromptController : NSObject <SFQueueingServiceViewControllerProxyDelegate, UIAlertControllerVisualStyleProviding> {
    _UIAsyncInvocation * _cancelViewServiceRequest;
    _UIRemoteViewController * _remoteViewController;
    SFQueueingServiceViewControllerProxy<SFDefaultBrowserPromptServiceProtocol> * _serviceProxy;
    SFDefaultBrowserAlertControllerVisualStyle * _visualStyle;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasShownBrowserChoiceScreenOnOtherDevices;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldPerformPromptCheck;
@property (readonly) Class superclass;

+ (id)_directoryURLWithKey:(id)arg1;
+ (id)_fileURLWithKey:(id)arg1;
+ (id)sharedController;

- (void).cxx_destruct;
- (void)_connectToService;
- (bool)_didStorePlistWithDictionary:(id)arg1 fileNameKey:(id)arg2 shouldExcludeFromBackup:(bool)arg3;
- (bool)_hasPerformedPromptCheck;
- (id)browserIconReplacementAlertController:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)determineIfBrowserIconSwapAlertNeedsDisplayWithCompletionHandler:(id /* block */)arg1;
- (void)determineIfBrowserSheetNeedsDisplayWithCompletionHandler:(id /* block */)arg1;
- (bool)didCompleteBrowserSheet;
- (bool)hasShownBrowserChoiceScreenOnOtherDevices;
- (id)init;
- (id)platformStyleViewForAlertController:(id)arg1 inIdiom:(long long)arg2;
- (void)serviceProxyWillQueueInvocation:(id)arg1;
- (bool)shouldPerformPromptCheck;
- (id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3;

@end
