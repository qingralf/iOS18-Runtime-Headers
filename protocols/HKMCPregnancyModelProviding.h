/* Generated by RuntimeBrowser.
 */

@protocol HKMCPregnancyModelProviding <NSObject>

@required

- (HKMCPregnancyModel *)getCurrentPregnancyModel;
- (void)registerObserver:(id <HKMCPregnancyModelObserver>)arg1 isUserInitiated:(bool)arg2;
- (void)unregisterObserver:(id <HKMCPregnancyModelObserver>)arg1;

@end