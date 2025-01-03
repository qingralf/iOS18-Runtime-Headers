/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTPresetStoreDependency : NSObject {
    NSMutableArray * _conditions;
    AVTPreset * _overridePreset;
}

@property (nonatomic, retain) NSMutableArray *conditions;
@property (nonatomic, retain) AVTPreset *overridePreset;

- (void).cxx_destruct;
- (void)addConditionOnPreset:(id)arg1;
- (void)addConditionOnPreset:(id)arg1 forSpecificPresetIdentifier:(id)arg2;
- (id)conditions;
- (id)initWithOverridePreset:(id)arg1 conditionedOnPreset:(id)arg2;
- (id)initWithOverridePreset:(id)arg1 conditionedOnPreset:(id)arg2 forSpecificPresetIdentifier:(id)arg3;
- (id)overridePreset;
- (void)setConditions:(id)arg1;
- (void)setOverridePreset:(id)arg1;

@end
