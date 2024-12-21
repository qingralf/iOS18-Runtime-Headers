/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIApplicationIntelligenceSupport : NSObject {
    void applicationState;
    void collector;
}

@property (nonatomic) long long applicationState;

+ (void)collectRemoteContent:(id)arg1 inVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withRemoteContextWrapper:(id)arg3;
+ (void)collectRemoteContentForRootViews:(id)arg1 withRemoteContextWrapper:(id)arg2;
+ (void)collectRemoteContentForWindowHostingScene:(id)arg1 inVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withRemoteContextWrapper:(id)arg3;
+ (Class)remoteContextWrapperClass;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (long long)applicationState;
- (void)connectedScenesUpdated;
- (id)init;
- (void)setApplicationState:(long long)arg1;

@end