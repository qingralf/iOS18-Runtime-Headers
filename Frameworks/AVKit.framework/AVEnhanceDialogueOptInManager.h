/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVEnhanceDialogueOptInManager : NSObject {
    NSMutableSet * _enhanceDialogueControllers;
    long long  _enhanceDialoguePreference;
}

@property (nonatomic, retain) NSMutableSet *enhanceDialogueControllers;
@property (nonatomic) long long enhanceDialoguePreference;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)enhanceDialogueControllers;
- (long long)enhanceDialoguePreference;
- (id)init;
- (bool)isEnhanceDialogueControllerOptedIn:(id)arg1;
- (void)optInEnhanceDialogueController:(id)arg1;
- (void)optOutEnhanceDialogueController:(id)arg1;
- (void)setEnhanceDialogueControllers:(id)arg1;
- (void)setEnhanceDialoguePreference:(long long)arg1;

@end