/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDEventsAction : DDPreviewAction {
    NSURL * _targetURL;
}

+ (bool)actionAvailableForResult:(struct __DDResult { }*)arg1 url:(id)arg2 context:(id)arg3;
+ (id)actionsWithURL:(id)arg1 result:(struct __DDResult { }*)arg2 context:(id)arg3;
+ (bool)isAvailable;

- (void).cxx_destruct;
- (bool)canBePerformedByOpeningURL;
- (id)iconName;
- (int)interactionType;
- (id)localizedName;
- (id)makeURL;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)notificationURL;
- (void)performFromView:(id)arg1;
- (id)subtitle;
- (id)viewController;

@end
