/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HangTracerSettingsClient.framework/HangTracerSettingsClient
 */

@interface HTInternalSettings : NSObject

@property (getter=isHUDEnabled, setter=setHUDEnabled:, nonatomic) bool hudEnabled;
@property (setter=setHUDThreshold:, nonatomic) long long hudThreshold;

- (void)applySettings;
- (long long)hudThreshold;
- (bool)isHUDEnabled;
- (void)setHUDEnabled:(bool)arg1;
- (void)setHUDThreshold:(long long)arg1;

@end