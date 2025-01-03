/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIUserActionDisambiguationModeler : NSObject {
    <CNUIDefaultUserActionFetcher> * _defaultActionFetcher;
    <CNUIUserActionDiscoveringEnvironment> * _discoveringEnvironment;
    <CNUIUserActionRanking> * _rankingHelper;
    <CNUIUserActionTargetDiscovering> * _targetDiscoveringHelper;
}

@property (nonatomic, retain) <CNUIDefaultUserActionFetcher> *defaultActionFetcher;
@property (nonatomic, retain) <CNUIUserActionDiscoveringEnvironment> *discoveringEnvironment;
@property (nonatomic, retain) <CNUIUserActionRanking> *rankingHelper;
@property (nonatomic, retain) <CNUIUserActionTargetDiscovering> *targetDiscoveringHelper;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)_discoverActionsForContact:(id)arg1 actionType:(id)arg2;
- (id)defaultActionChangedObservable;
- (id)defaultActionFetcher;
- (id)defaultActionFromActions:(id)arg1;
- (id)defaultAppsScorerForActionType:(id)arg1;
- (id)discoverActionsForContact:(id)arg1 actionType:(id)arg2;
- (id)discoveringEnvironment;
- (void)emptyDefaultAppsCaches;
- (bool)hasDefaultAppForActionType:(id)arg1;
- (id)init;
- (id)initWithDiscoveringEnvironment:(id)arg1;
- (id)initWithTargetDiscoveringHelper:(id)arg1 rankingHelper:(id)arg2 defaultActionFetcher:(id)arg3 discoveringEnvironment:(id)arg4;
- (id)modelsWithActionType:(id)arg1 defaultAction:(id)arg2 actions:(id)arg3 recentActions:(id)arg4 sorts:(bool)arg5 throttles:(bool)arg6;
- (id)modelsWithContact:(id)arg1 actionType:(id)arg2 defaultActionItem:(id)arg3;
- (id)rankingHelper;
- (id)recentActionsFromActions:(id)arg1;
- (id)schedulerProvider;
- (void)setContactStore:(id)arg1;
- (void)setDefaultActionFetcher:(id)arg1;
- (void)setDiscoveringEnvironment:(id)arg1;
- (void)setRankingHelper:(id)arg1;
- (void)setTargetDiscoveringHelper:(id)arg1;
- (id)sortActionsOnModel:(id)arg1 actionType:(id)arg2;
- (id)targetDiscoveringHelper;
- (id)targetsChangedObservableForActionType:(id)arg1;
- (id)thirdPartyActionsForContactProperty:(id)arg1;
- (id)thirdPartyTargetsForActionTypes:(id)arg1;

@end
