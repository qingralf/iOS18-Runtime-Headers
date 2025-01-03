/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InputAnalytics.framework/InputAnalytics
 */

@interface IASTextInputUserPreferenceStateEvent : NSObject <IATelemetryEvent> {
    NSString * _preferenceName;
    long long  _preferenceValue;
}

@property (nonatomic, copy) NSString *preferenceName;
@property (nonatomic) long long preferenceValue;

- (void).cxx_destruct;
- (void)dispatchEvent:(id /* block */)arg1;
- (bool)isDispatchable;
- (id)preferenceName;
- (long long)preferenceValue;
- (void)resetMeasures;
- (void)setPreferenceName:(id)arg1;
- (void)setPreferenceValue:(long long)arg1;

@end
