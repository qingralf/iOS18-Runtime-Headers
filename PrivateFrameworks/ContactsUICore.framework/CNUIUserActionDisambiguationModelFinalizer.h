/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIUserActionDisambiguationModelFinalizer : NSObject {
    NSMutableArray * _actions;
    CNUIUserActionItem * _defaultAction;
    NSArray * _directoryServiceActions;
    NSArray * _foundOnDeviceActions;
    bool  _hasDefaultApp;
    NSArray * _recentActions;
}

@property (nonatomic, retain) NSMutableArray *actions;
@property (nonatomic, retain) CNUIUserActionItem *defaultAction;
@property (nonatomic, retain) NSArray *directoryServiceActions;
@property (nonatomic, retain) NSArray *foundOnDeviceActions;
@property (nonatomic) bool hasDefaultApp;
@property (nonatomic, retain) NSArray *recentActions;

+ (id)modelWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5 hasDefaultApp:(bool)arg6;

- (void).cxx_destruct;
- (id)actions;
- (id)defaultAction;
- (id)directoryServiceActions;
- (id)foundOnDeviceActions;
- (bool)hasDefaultApp;
- (id)initWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5 hasDefaultApp:(bool)arg6;
- (id)model;
- (void)promoteLoneActionToBeDefault;
- (void)promoteLoneManagedCallProviderActionToBeDefault;
- (id)recentActions;
- (void)removeCallProviderOverlappingIntentActions;
- (void)removeDefaultActionFromListOfActions;
- (void)removeDiscoveredActionsAlreadyCurated;
- (void)removeDuplicateIntentActionsFromSameProvider;
- (void)removeUninterestingItentActions;
- (void)setActions:(id)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setDirectoryServiceActions:(id)arg1;
- (void)setFoundOnDeviceActions:(id)arg1;
- (void)setHasDefaultApp:(bool)arg1;
- (void)setRecentActions:(id)arg1;

@end