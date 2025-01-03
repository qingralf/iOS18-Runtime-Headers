/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIButtonItemFactory : NSObject {
    NSMutableArray * _buttonItemGenerators;
    bool  _countMoreButtonTowardsMaxCount;
    <SearchUIButtonItemGeneratorViewDelegate> * _delegate;
    <SearchUIFeedbackDelegate> * _feedbackDelegate;
    NSMapTable * _fetchedCommandButtonItemsForButtons;
    NSMutableSet * _fullyGeneratedButtonItems;
    NSDate * _startTime;
    double  _timeLimitForSubsequentButtonGeneratorUpdates;
}

@property (nonatomic, retain) NSMutableArray *buttonItemGenerators;
@property bool countMoreButtonTowardsMaxCount;
@property <SearchUIButtonItemGeneratorViewDelegate> *delegate;
@property <SearchUIFeedbackDelegate> *feedbackDelegate;
@property (nonatomic, retain) NSMapTable *fetchedCommandButtonItemsForButtons;
@property (nonatomic, retain) NSMutableSet *fullyGeneratedButtonItems;
@property (nonatomic, retain) NSDate *startTime;
@property double timeLimitForSubsequentButtonGeneratorUpdates;

- (void).cxx_destruct;
- (id)buttonItemGenerators;
- (bool)countMoreButtonTowardsMaxCount;
- (id)delegate;
- (id)feedbackDelegate;
- (void)fetchSearchUIButtonitemsWithSFButtonItems:(id)arg1 maxButtonItems:(unsigned long long)arg2 shouldReverseButtonOrder:(bool)arg3 completion:(id /* block */)arg4;
- (id)fetchedCommandButtonItemsForButtons;
- (id)fullyGeneratedButtonItems;
- (id)init;
- (void)setButtonItemGenerators:(id)arg1;
- (void)setCountMoreButtonTowardsMaxCount:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setFetchedCommandButtonItemsForButtons:(id)arg1;
- (void)setFullyGeneratedButtonItems:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setTimeLimitForSubsequentButtonGeneratorUpdates:(double)arg1;
- (id)startTime;
- (double)timeLimitForSubsequentButtonGeneratorUpdates;
- (void)updateCompletionHandlerWithSFButtonItems:(id)arg1 maxButtonItems:(unsigned long long)arg2 shouldReverseButtonOrder:(bool)arg3 completion:(id /* block */)arg4;

@end
