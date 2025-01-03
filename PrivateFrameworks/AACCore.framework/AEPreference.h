/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
 */

@interface AEPreference : NSObject {
    id  _defaultValue;
    NSString * _key;
    bool  _overridden;
    <AEPreferencePrimitives> * _preferencePrimitives;
    <AESystemNotificationPrimitives> * _systemNotificationPrimitives;
    id  _value;
}

@property (nonatomic, readonly) id defaultValue;
@property (nonatomic, readonly, copy) NSString *key;
@property (getter=isOverridden, nonatomic, readonly) bool overridden;
@property (nonatomic, readonly) <AEPreferencePrimitives> *preferencePrimitives;
@property (nonatomic, retain) id preferenceValue;
@property (nonatomic, readonly) <AESystemNotificationPrimitives> *systemNotificationPrimitives;
@property (nonatomic, copy) id value;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)initWithKey:(id)arg1 preferencesPrimitives:(id)arg2 systemNotificationPrimitives:(id)arg3 defaultValue:(id)arg4;
- (bool)isOverridden;
- (id)key;
- (void)preferenceDidUpdate;
- (id)preferencePrimitives;
- (id)preferenceValue;
- (void)setPreferenceValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)systemNotificationPrimitives;
- (id)value;

@end
