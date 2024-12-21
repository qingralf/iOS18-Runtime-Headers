/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDUPIAction : DDAction {
    NSString * _appName;
    LSApplicationRecord * _appRecord;
    NSString * _upiIdentifier;
}

+ (bool)actionAvailableForResult:(struct __DDResult { }*)arg1 url:(id)arg2 context:(id)arg3;
+ (id)actionsWithURL:(id)arg1 result:(struct __DDResult { }*)arg2 context:(id)arg3;
+ (id)matchingSchemes;

- (void).cxx_destruct;
- (bool)canBePerformedByOpeningURL;
- (id)icon;
- (id)iconName;
- (id)initWithURL:(id)arg1 result:(struct __DDResult { }*)arg2 context:(id)arg3 appRecord:(id)arg4 upiIdentifier:(id)arg5;
- (int)interactionType;
- (id)localizedName;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)notificationURL;
- (void)performFromView:(id)arg1;
- (id)subtitle;
- (id)viewController;

@end